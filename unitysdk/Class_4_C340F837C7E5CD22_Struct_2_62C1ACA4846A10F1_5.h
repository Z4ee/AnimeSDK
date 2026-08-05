#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FDFE69FE7B72463B;
class Class_4_C340F837C7E5CD22;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_C340F837C7E5CD22_STRUCT_2_62C1ACA4846A10F1_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86BD30)
#define CLASS_4_C340F837C7E5CD22_STRUCT_2_62C1ACA4846A10F1_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_C340F837C7E5CD22_Struct_2_62C1ACA4846A10F1_5_TypeDefinitionIndex = 52938;

struct alignas(8) Class_4_C340F837C7E5CD22_Struct_2_62C1ACA4846A10F1_5
{
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x10
	::Class_4_C340F837C7E5CD22* Field_2_0; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::System::Int32 Field_2_2; // 0x38
	::System::Int32 Field_2_5; // 0x3C
	::System::Int32 Field_2_7; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_STRUCT_2_62C1ACA4846A10F1_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_STRUCT_2_62C1ACA4846A10F1_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
