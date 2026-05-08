#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8BCF11C763A084A9;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8BCF11C763A084A9_STRUCT_2_1B9625D3970A47F7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x730120)
#define CLASS_1_8BCF11C763A084A9_STRUCT_2_1B9625D3970A47F7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_8BCF11C763A084A9_Struct_2_1B9625D3970A47F7_TypeDefinitionIndex = 58543;

struct alignas(8) Class_1_8BCF11C763A084A9_Struct_2_1B9625D3970A47F7
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x18
	::PipelineCamera::ScopedDelegateHandle Field_2_4; // 0x28
	::Class_1_8BCF11C763A084A9* Field_2_2; // 0x30
	::System::Int32 Field_2_0; // 0x38
	::System::Single Field_2_3; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_STRUCT_2_1B9625D3970A47F7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_STRUCT_2_1B9625D3970A47F7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
