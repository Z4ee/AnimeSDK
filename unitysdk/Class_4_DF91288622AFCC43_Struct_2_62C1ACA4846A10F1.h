#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/System/ValueType.h"

class Class_4_DF91288622AFCC43;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_DF91288622AFCC43_STRUCT_2_62C1ACA4846A10F1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x83BCE0)
#define CLASS_4_DF91288622AFCC43_STRUCT_2_62C1ACA4846A10F1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_DF91288622AFCC43_Struct_2_62C1ACA4846A10F1_TypeDefinitionIndex = 42855;

struct alignas(8) Class_4_DF91288622AFCC43_Struct_2_62C1ACA4846A10F1
{
	::Struct_2_29439DBE2B63DCF3 Field_2_7; // 0x10
	::Class_4_DF91288622AFCC43* Field_2_0; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x48
	::System::Int32 Field_2_2; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DF91288622AFCC43_STRUCT_2_62C1ACA4846A10F1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_DF91288622AFCC43_STRUCT_2_62C1ACA4846A10F1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
