#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_2_STRUCT_2_604119849220121B_9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C43B0)
#define CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_2_STRUCT_2_604119849220121B_9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_2_Struct_2_604119849220121B_9_TypeDefinitionIndex = 61082;

struct alignas(8) Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_2_Struct_2_604119849220121B_9
{
	::Class_1_26F3F0BB91581A51_Class_1_A26A2EE33E21CFFB_2* Field_2_3; // 0x10
	::System::Threading::CancellationToken Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_2_STRUCT_2_604119849220121B_9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51_CLASS_1_A26A2EE33E21CFFB_2_STRUCT_2_604119849220121B_9_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
