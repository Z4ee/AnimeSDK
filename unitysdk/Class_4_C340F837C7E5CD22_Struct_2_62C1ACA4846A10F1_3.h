#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_4_C340F837C7E5CD22;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_C340F837C7E5CD22_STRUCT_2_62C1ACA4846A10F1_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86DEB0)
#define CLASS_4_C340F837C7E5CD22_STRUCT_2_62C1ACA4846A10F1_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_C340F837C7E5CD22_Struct_2_62C1ACA4846A10F1_3_TypeDefinitionIndex = 52933;

struct alignas(8) Class_4_C340F837C7E5CD22_Struct_2_62C1ACA4846A10F1_3
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_4_C340F837C7E5CD22* Field_2_0; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x20
	::System::Int32 Field_2_2; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_STRUCT_2_62C1ACA4846A10F1_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_STRUCT_2_62C1ACA4846A10F1_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
