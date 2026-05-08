#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_419EB54EAA54F06B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71A480)
#define CLASS_2_3CC769D284A54927_STRUCT_2_419EB54EAA54F06B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_419EB54EAA54F06B_TypeDefinitionIndex = 61347;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_419EB54EAA54F06B
{
	::UnityEngine::AnimationCurve* Field_2_4; // 0x10
	::Class_2_3CC769D284A54927* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Single Field_2_3; // 0x40
	::System::Single Field_2_5; // 0x44
	::System::Int32 Field_2_0; // 0x48
	::System::Single Field_2_7; // 0x4C
	::System::Single Field_2_6; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_419EB54EAA54F06B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_419EB54EAA54F06B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
