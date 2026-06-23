#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_C91109162D964E4D_STRUCT_2_BF9C54E894E4F0F0_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6C8BE0)
#define CLASS_3_C91109162D964E4D_STRUCT_2_BF9C54E894E4F0F0_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_C91109162D964E4D_Struct_2_BF9C54E894E4F0F0_4_TypeDefinitionIndex = 76795;

struct alignas(8) Class_3_C91109162D964E4D_Struct_2_BF9C54E894E4F0F0_4
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_STRUCT_2_BF9C54E894E4F0F0_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_STRUCT_2_BF9C54E894E4F0F0_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
