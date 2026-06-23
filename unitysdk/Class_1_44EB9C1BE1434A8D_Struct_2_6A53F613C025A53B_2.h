#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_44EB9C1BE1434A8D;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_44EB9C1BE1434A8D_STRUCT_2_6A53F613C025A53B_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x792E70)
#define CLASS_1_44EB9C1BE1434A8D_STRUCT_2_6A53F613C025A53B_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_44EB9C1BE1434A8D_Struct_2_6A53F613C025A53B_2_TypeDefinitionIndex = 62922;

struct alignas(8) Class_1_44EB9C1BE1434A8D_Struct_2_6A53F613C025A53B_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_1_44EB9C1BE1434A8D* Field_2_2; // 0x18
	::PipelineCamera::ScopedDelegateHandle Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_STRUCT_2_6A53F613C025A53B_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_STRUCT_2_6A53F613C025A53B_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
