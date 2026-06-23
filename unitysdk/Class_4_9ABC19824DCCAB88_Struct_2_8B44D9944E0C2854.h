#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_9ABC19824DCCAB88_STRUCT_2_8B44D9944E0C2854_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x735000)
#define CLASS_4_9ABC19824DCCAB88_STRUCT_2_8B44D9944E0C2854_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_4_9ABC19824DCCAB88_Struct_2_8B44D9944E0C2854_TypeDefinitionIndex = 79573;

struct alignas(8) Class_4_9ABC19824DCCAB88_Struct_2_8B44D9944E0C2854
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::System::String* Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x30
	::System::Int32 Field_2_2; // 0x34
	::System::Int32 Field_2_3; // 0x38
	::System::Boolean Field_2_5; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_STRUCT_2_8B44D9944E0C2854_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_STRUCT_2_8B44D9944E0C2854_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
