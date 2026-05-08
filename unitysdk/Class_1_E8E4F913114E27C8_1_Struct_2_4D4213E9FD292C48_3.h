#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_E8E4F913114E27C8_1_STRUCT_2_4D4213E9FD292C48_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x722350)
#define CLASS_1_E8E4F913114E27C8_1_STRUCT_2_4D4213E9FD292C48_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_E8E4F913114E27C8_1_Struct_2_4D4213E9FD292C48_3_TypeDefinitionIndex = 79756;

struct alignas(8) Class_1_E8E4F913114E27C8_1_Struct_2_4D4213E9FD292C48_3
{
	::System::Action* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8E4F913114E27C8_1_STRUCT_2_4D4213E9FD292C48_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_E8E4F913114E27C8_1_STRUCT_2_4D4213E9FD292C48_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
