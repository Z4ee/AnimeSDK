#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_2B69BCB161EF3587;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_2B69BCB161EF3587_STRUCT_2_EBD53E751F5F7C46_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BCF10)
#define CLASS_2_2B69BCB161EF3587_STRUCT_2_EBD53E751F5F7C46_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_2B69BCB161EF3587_Struct_2_EBD53E751F5F7C46_2_TypeDefinitionIndex = 75485;

struct alignas(8) Class_2_2B69BCB161EF3587_Struct_2_EBD53E751F5F7C46_2
{
	::System::Threading::CancellationToken Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x28
	::Class_2_2B69BCB161EF3587* Field_2_0; // 0x38
	::System::Int32 Field_2_2; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_STRUCT_2_EBD53E751F5F7C46_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_STRUCT_2_EBD53E751F5F7C46_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
