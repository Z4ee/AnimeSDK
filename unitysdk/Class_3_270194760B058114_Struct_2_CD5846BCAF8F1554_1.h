#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_270194760B058114_Class_1_9BFD28ECD33E44BF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_270194760B058114_STRUCT_2_CD5846BCAF8F1554_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x69AFE0)
#define CLASS_3_270194760B058114_STRUCT_2_CD5846BCAF8F1554_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_270194760B058114_Struct_2_CD5846BCAF8F1554_1_TypeDefinitionIndex = 47650;

struct alignas(8) Class_3_270194760B058114_Struct_2_CD5846BCAF8F1554_1
{
	::Class_3_270194760B058114_Class_1_9BFD28ECD33E44BF* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_270194760B058114_STRUCT_2_CD5846BCAF8F1554_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_270194760B058114_STRUCT_2_CD5846BCAF8F1554_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
