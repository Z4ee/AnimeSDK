#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3C73F607763424F1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_3C73F607763424F1_STRUCT_2_1DF8A9447CA92836_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81F620)
#define CLASS_3_3C73F607763424F1_STRUCT_2_1DF8A9447CA92836_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_3C73F607763424F1_Struct_2_1DF8A9447CA92836_TypeDefinitionIndex = 75265;

struct alignas(8) Class_3_3C73F607763424F1_Struct_2_1DF8A9447CA92836
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x10
	::System::Threading::CancellationToken Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x20
	::Class_3_3C73F607763424F1* Field_2_7; // 0x30
	::System::Int32 Field_2_1; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C73F607763424F1_STRUCT_2_1DF8A9447CA92836_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_3C73F607763424F1_STRUCT_2_1DF8A9447CA92836_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
