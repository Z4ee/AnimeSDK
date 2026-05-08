#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C2B262BAEE4F4CD0_Class_1_E79766713E2BB8FD_3;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_E79766713E2BB8FD_3_STRUCT_2_A41BECC15EC1D908_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x746230)
#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_E79766713E2BB8FD_3_STRUCT_2_A41BECC15EC1D908_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5C4D00)

inline static constexpr unsigned int Class_3_C2B262BAEE4F4CD0_Class_1_E79766713E2BB8FD_3_Struct_2_A41BECC15EC1D908_1_TypeDefinitionIndex = 79104;

struct alignas(8) Class_3_C2B262BAEE4F4CD0_Class_1_E79766713E2BB8FD_3_Struct_2_A41BECC15EC1D908_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::Class_3_C2B262BAEE4F4CD0_Class_1_E79766713E2BB8FD_3* Field_2_2; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_E79766713E2BB8FD_3_STRUCT_2_A41BECC15EC1D908_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_E79766713E2BB8FD_3_STRUCT_2_A41BECC15EC1D908_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
