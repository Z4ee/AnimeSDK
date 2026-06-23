#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C2AE23344FDC0942;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_C2AE23344FDC0942_STRUCT_2_9A37D92BB69BE360_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92F4E0)
#define CLASS_3_C2AE23344FDC0942_STRUCT_2_9A37D92BB69BE360_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_C2AE23344FDC0942_Struct_2_9A37D92BB69BE360_TypeDefinitionIndex = 59627;

struct alignas(8) Class_3_C2AE23344FDC0942_Struct_2_9A37D92BB69BE360
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Class_3_C2AE23344FDC0942* Field_2_3; // 0x28
	::System::Single Field_2_5; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x34
	::System::Int32 Field_2_0; // 0x38
	::System::Single Field_2_4; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_STRUCT_2_9A37D92BB69BE360_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_STRUCT_2_9A37D92BB69BE360_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
