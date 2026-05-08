#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_5_A6F8D19602712D95;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define CLASS_1_49776B0E09344AA8_CLASS_1_B09FF3E6F7E4C626_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12DE62A0)
#define CLASS_1_49776B0E09344AA8_CLASS_1_B09FF3E6F7E4C626_METHOD_1_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x12DE6380)
#define CLASS_1_49776B0E09344AA8_CLASS_1_B09FF3E6F7E4C626__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE6290)

inline static constexpr unsigned int Class_1_49776B0E09344AA8_Class_1_B09FF3E6F7E4C626_TypeDefinitionIndex = 57728;

class Class_1_49776B0E09344AA8_Class_1_B09FF3E6F7E4C626 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_5; // 0x10
	::Class_5_A6F8D19602712D95* Field_1_4; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_2; // 0x24
	::UnityEngine::Vector3 Field_1_0; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_CLASS_1_B09FF3E6F7E4C626__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_CLASS_1_B09FF3E6F7E4C626_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_CLASS_1_B09FF3E6F7E4C626_METHOD_1_C145705A054F47D2_OFFSET))(this, a1);
	}
};
