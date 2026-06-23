#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_17E903BDA51D43F0;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_17E903BDA51D43F0_STRUCT_2_EBD53E751F5F7C46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x745750)
#define CLASS_2_17E903BDA51D43F0_STRUCT_2_EBD53E751F5F7C46_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0_Struct_2_EBD53E751F5F7C46_TypeDefinitionIndex = 58714;

struct alignas(8) Class_2_17E903BDA51D43F0_Struct_2_EBD53E751F5F7C46
{
	::Class_2_17E903BDA51D43F0* Field_2_2; // 0x10
	::System::Threading::CancellationToken Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_STRUCT_2_EBD53E751F5F7C46_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_STRUCT_2_EBD53E751F5F7C46_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
