#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_5333182AB57CEC76;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_5333182AB57CEC76_STRUCT_2_62BEACA48467DACA_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F3F60)
#define CLASS_3_5333182AB57CEC76_STRUCT_2_62BEACA48467DACA_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_5333182AB57CEC76_Struct_2_62BEACA48467DACA_2_TypeDefinitionIndex = 85031;

struct alignas(8) Class_3_5333182AB57CEC76_Struct_2_62BEACA48467DACA_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_3_5333182AB57CEC76* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x20
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5333182AB57CEC76_STRUCT_2_62BEACA48467DACA_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_5333182AB57CEC76_STRUCT_2_62BEACA48467DACA_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
