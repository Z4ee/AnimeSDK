#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_36;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_6D212096371432EC_STRUCT_2_DE1BA78B6F68ADDE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8609F0)
#define CLASS_2_6D212096371432EC_STRUCT_2_DE1BA78B6F68ADDE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_6D212096371432EC_Struct_2_DE1BA78B6F68ADDE_TypeDefinitionIndex = 73469;

struct alignas(8) Class_2_6D212096371432EC_Struct_2_DE1BA78B6F68ADDE
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_0_16E4307DCC419505_36*> Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x28
	::System::Threading::CancellationTokenSource* Field_2_0; // 0x38
	::System::Threading::CancellationTokenRegistration Field_2_7; // 0x40
	::System::Threading::CancellationToken Field_2_1; // 0x58
	::System::Int32 Field_2_3; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC_STRUCT_2_DE1BA78B6F68ADDE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC_STRUCT_2_DE1BA78B6F68ADDE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
