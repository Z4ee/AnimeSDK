#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_9DCC0FAC3E280F04_STRUCT_2_BF9C54E894E4F0F0_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76DBE0)
#define CLASS_4_9DCC0FAC3E280F04_STRUCT_2_BF9C54E894E4F0F0_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_4_9DCC0FAC3E280F04_Struct_2_BF9C54E894E4F0F0_2_TypeDefinitionIndex = 55686;

struct alignas(8) Class_4_9DCC0FAC3E280F04_Struct_2_BF9C54E894E4F0F0_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_2_2; // 0x20
	::Struct_2_FE9BD044832BC9C3 Field_2_3; // 0x50
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x80
	::System::Int32 Field_2_0; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9DCC0FAC3E280F04_STRUCT_2_BF9C54E894E4F0F0_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_9DCC0FAC3E280F04_STRUCT_2_BF9C54E894E4F0F0_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
