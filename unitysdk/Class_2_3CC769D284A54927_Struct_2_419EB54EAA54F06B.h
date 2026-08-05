#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_419EB54EAA54F06B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C7970)
#define CLASS_2_3CC769D284A54927_STRUCT_2_419EB54EAA54F06B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_419EB54EAA54F06B_TypeDefinitionIndex = 76719;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_419EB54EAA54F06B
{
	::Class_2_3CC769D284A54927* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x18
	::UnityEngine::AnimationCurve* Field_2_5; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x30
	::System::Single Field_2_4; // 0x40
	::System::Int32 Field_2_1; // 0x44
	::System::Single Field_2_11; // 0x48
	::System::Single Field_2_6; // 0x4C
	::System::Single Field_2_10; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_419EB54EAA54F06B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_419EB54EAA54F06B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
