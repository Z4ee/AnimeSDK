#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_2_STRUCT_2_604119849220121B_12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B47B0)
#define CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_2_STRUCT_2_604119849220121B_12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_2_Struct_2_604119849220121B_12_TypeDefinitionIndex = 74155;

struct alignas(8) Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_2_Struct_2_604119849220121B_12
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_2* Field_2_6; // 0x20
	::System::Threading::CancellationToken Field_2_7; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x30
	::System::Int32 Field_2_1; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_2_STRUCT_2_604119849220121B_12_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_2_STRUCT_2_604119849220121B_12_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
