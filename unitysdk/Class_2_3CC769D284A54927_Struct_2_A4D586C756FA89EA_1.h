#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
class Class_3_472679C84451629A_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_A4D586C756FA89EA_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F56E0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_A4D586C756FA89EA_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_A4D586C756FA89EA_1_TypeDefinitionIndex = 76725;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_A4D586C756FA89EA_1
{
	::Class_3_472679C84451629A_1* Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_10; // 0x28
	::Class_2_3CC769D284A54927* Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x40
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_472679C84451629A_1*> Field_2_11; // 0x50
	::System::Int32 Field_2_0; // 0x68
	::System::Int32 Field_2_5; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_A4D586C756FA89EA_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_A4D586C756FA89EA_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
