#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_9F97A2EE200E0628_STRUCT_2_747828769DD032E2_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6FD5F0)
#define CLASS_3_9F97A2EE200E0628_STRUCT_2_747828769DD032E2_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_3_9F97A2EE200E0628_Struct_2_747828769DD032E2_1_TypeDefinitionIndex = 74562;

struct alignas(8) Class_3_9F97A2EE200E0628_Struct_2_747828769DD032E2_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x2C
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F97A2EE200E0628_STRUCT_2_747828769DD032E2_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_9F97A2EE200E0628_STRUCT_2_747828769DD032E2_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
