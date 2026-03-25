#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_902;
namespace InControl { class PlayerAction; }

#define CLASS_1_4DBF4263913B7C67_CLASS_1_C38D59ED566A8741_METHOD_1_3DE39D0B7183A6A4_OFFSET UNITYSDK_OFFSET(0x114EB540)
#define CLASS_1_4DBF4263913B7C67_CLASS_1_C38D59ED566A8741_METHOD_1_7EC693EFA0B59E75_OFFSET UNITYSDK_OFFSET(0x114EBA30)
#define CLASS_1_4DBF4263913B7C67_CLASS_1_C38D59ED566A8741__CTOR_OFFSET UNITYSDK_OFFSET(0x114EA850)

inline static constexpr unsigned int Class_1_4DBF4263913B7C67_Class_1_C38D59ED566A8741_TypeDefinitionIndex = 61728;

class Class_1_4DBF4263913B7C67_Class_1_C38D59ED566A8741 : public ::System::Object
{
public:
	::InControl::PlayerAction* Field_1_5; // 0x10
	::InControl::PlayerAction* Field_1_4; // 0x18
	::Class_0_16E4307DCC419505_902* Field_1_6; // 0x20
	::InControl::PlayerAction* Field_1_3; // 0x28
	::InControl::PlayerAction* Field_1_2; // 0x30
	::UnityEngine::Vector2 Field_1_0; // 0x38
	::System::Single Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DBF4263913B7C67_CLASS_1_C38D59ED566A8741__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7EC693EFA0B59E75(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DBF4263913B7C67_CLASS_1_C38D59ED566A8741_METHOD_1_7EC693EFA0B59E75_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_3DE39D0B7183A6A4()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DBF4263913B7C67_CLASS_1_C38D59ED566A8741_METHOD_1_3DE39D0B7183A6A4_OFFSET))(this);
	}
};
