#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9D30CF0B72B8D28A_Struct_2_D731FF4936FF71BD.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelEntityUseSkill; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9D30CF0B72B8D28A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11784410)
#define CLASS_1_9D30CF0B72B8D28A_METHOD_1_3302B11F778F050F_OFFSET UNITYSDK_OFFSET(0x117844B0)
#define CLASS_1_9D30CF0B72B8D28A_METHOD_1_E31EE2C8BE050E3C_OFFSET UNITYSDK_OFFSET(0x117841F0)
#define CLASS_1_9D30CF0B72B8D28A__CTOR_OFFSET UNITYSDK_OFFSET(0x11784640)

inline static constexpr unsigned int Class_1_9D30CF0B72B8D28A_TypeDefinitionIndex = 51789;

class Class_1_9D30CF0B72B8D28A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_9D30CF0B72B8D28A_Struct_2_D731FF4936FF71BD>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D30CF0B72B8D28A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E31EE2C8BE050E3C(::RPG::GameCore::LevelEntityUseSkill* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityUseSkill*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9D30CF0B72B8D28A_METHOD_1_E31EE2C8BE050E3C_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D30CF0B72B8D28A_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_3302B11F778F050F(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9D30CF0B72B8D28A_METHOD_1_3302B11F778F050F_OFFSET))(this, a1, a2, a3);
	}
};
