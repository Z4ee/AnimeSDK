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

#define CLASS_1_C68F016107BCCDF0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17117E70)
#define CLASS_1_C68F016107BCCDF0_METHOD_1_1F9AB1861DA68CF4_OFFSET UNITYSDK_OFFSET(0x17117710)
#define CLASS_1_C68F016107BCCDF0_METHOD_1_974E20FF87A8F3DC_OFFSET UNITYSDK_OFFSET(0x17117A00)
#define CLASS_1_C68F016107BCCDF0_METHOD_1_A7E7B6114D51510C_OFFSET UNITYSDK_OFFSET(0x17117B70)
#define CLASS_1_C68F016107BCCDF0_METHOD_1_ACED43539DAFA30B_OFFSET UNITYSDK_OFFSET(0x17117410)
#define CLASS_1_C68F016107BCCDF0__CTOR_OFFSET UNITYSDK_OFFSET(0x17117D50)

inline static constexpr unsigned int Class_1_C68F016107BCCDF0_TypeDefinitionIndex = 60678;

class Class_1_C68F016107BCCDF0 : public ::System::Object
{
public:
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraph*>*>* NNLFEPDDPNH; // 0x10
	::System::String* HOLHGLKFGAO; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LevelGraph*, ::RPG::GameCore::ShowHintEffect*>* IOGKKFKMOBF; // 0x20
	::RPG::Client::MapDef* MJKJCCNJACA; // 0x28

	::System::Void _ctor(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_C68F016107BCCDF0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACED43539DAFA30B(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelGraph* a3, ::RPG::GameCore::ShowHintEffect* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelGraph*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + CLASS_1_C68F016107BCCDF0_METHOD_1_ACED43539DAFA30B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_974E20FF87A8F3DC(::RPG::GameCore::LevelGraph* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C68F016107BCCDF0_METHOD_1_974E20FF87A8F3DC_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ShowHintEffect* Method_1_A7E7B6114D51510C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ShowHintEffect*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C68F016107BCCDF0_METHOD_1_A7E7B6114D51510C_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68F016107BCCDF0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1F9AB1861DA68CF4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C68F016107BCCDF0_METHOD_1_1F9AB1861DA68CF4_OFFSET))(this, a1, a2);
	}
};
