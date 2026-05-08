#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_522B0BB3ABD42EF0;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_522B0BB3ABD42EF0_STRUCT_2_EC2E239A8F58B972_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CLASS_1_522B0BB3ABD42EF0_STRUCT_2_EC2E239A8F58B972_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_522B0BB3ABD42EF0_Struct_2_EC2E239A8F58B972_TypeDefinitionIndex = 45648;

struct alignas(8) Class_1_522B0BB3ABD42EF0_Struct_2_EC2E239A8F58B972
{
	::Class_1_522B0BB3ABD42EF0* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_6; // 0x30
	::PipelineCamera::ScopedDelegateHandle Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677 Field_2_5; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_STRUCT_2_EC2E239A8F58B972_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_STRUCT_2_EC2E239A8F58B972_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
