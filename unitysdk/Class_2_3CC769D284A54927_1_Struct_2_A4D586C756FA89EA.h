#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_958;
class Class_2_3CC769D284A54927_1;
class Class_3_472679C84451629A_23;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_A4D586C756FA89EA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CB20)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_A4D586C756FA89EA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_A4D586C756FA89EA_TypeDefinitionIndex = 57651;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_A4D586C756FA89EA
{
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_472679C84451629A_23*> Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_5; // 0x50
	::Class_2_208CC9941471731A_958* Field_2_4; // 0x60
	::System::Int32 Field_2_3; // 0x68
	::System::Int32 Field_2_0; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_A4D586C756FA89EA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_A4D586C756FA89EA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
