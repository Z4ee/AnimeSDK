#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }

#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_051E344CF0CA3DBF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87CF70)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_051E344CF0CA3DBF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Struct_2_051E344CF0CA3DBF_TypeDefinitionIndex = 50198;

struct alignas(8) Class_1_8B550A61FC9DDA82_Struct_2_051E344CF0CA3DBF
{
	::UnityEngine::AnimationState* Field_2_7; // 0x10
	::UnityEngine::Animation* Field_2_1; // 0x18
	::System::String* Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x38
	::System::Single Field_2_5; // 0x3C
	::System::Single Field_2_6; // 0x40
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_051E344CF0CA3DBF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_051E344CF0CA3DBF_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
