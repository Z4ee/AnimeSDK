#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class ShowHintEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_67ED1B7BCF908CF6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB7F890)
#define CLASS_1_67ED1B7BCF908CF6_METHOD_1_1F9AB1861DA68CF4_OFFSET UNITYSDK_OFFSET(0xAB7F120)
#define CLASS_1_67ED1B7BCF908CF6_METHOD_1_3510C95836FB69B0_OFFSET UNITYSDK_OFFSET(0xAB7EDA0)
#define CLASS_1_67ED1B7BCF908CF6_METHOD_1_974E20FF87A8F3DC_OFFSET UNITYSDK_OFFSET(0xAB7F420)
#define CLASS_1_67ED1B7BCF908CF6_METHOD_1_A7E7B6114D51510C_OFFSET UNITYSDK_OFFSET(0xAB7F590)
#define CLASS_1_67ED1B7BCF908CF6__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7F770)

inline static constexpr unsigned int Class_1_67ED1B7BCF908CF6_TypeDefinitionIndex = 56612;

class Class_1_67ED1B7BCF908CF6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LevelGraph*, ::RPG::GameCore::ShowHintEffect*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraph*>*>* Field_1_2; // 0x20
	::RPG::Client::MapDef* Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_67ED1B7BCF908CF6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3510C95836FB69B0(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelGraph* a3, ::RPG::GameCore::ShowHintEffect* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelGraph*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + CLASS_1_67ED1B7BCF908CF6_METHOD_1_3510C95836FB69B0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_974E20FF87A8F3DC(::RPG::GameCore::LevelGraph* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67ED1B7BCF908CF6_METHOD_1_974E20FF87A8F3DC_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ShowHintEffect* Method_1_A7E7B6114D51510C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ShowHintEffect*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67ED1B7BCF908CF6_METHOD_1_A7E7B6114D51510C_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67ED1B7BCF908CF6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1F9AB1861DA68CF4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67ED1B7BCF908CF6_METHOD_1_1F9AB1861DA68CF4_OFFSET))(this, a1, a2);
	}
};
