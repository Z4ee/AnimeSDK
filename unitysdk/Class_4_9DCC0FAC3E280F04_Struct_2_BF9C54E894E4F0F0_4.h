#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_9DCC0FAC3E280F04_STRUCT_2_BF9C54E894E4F0F0_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FE9C0)
#define CLASS_4_9DCC0FAC3E280F04_STRUCT_2_BF9C54E894E4F0F0_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_9DCC0FAC3E280F04_Struct_2_BF9C54E894E4F0F0_4_TypeDefinitionIndex = 79341;

struct alignas(8) Class_4_9DCC0FAC3E280F04_Struct_2_BF9C54E894E4F0F0_4
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Struct_2_FE9BD044832BC9C3 Field_2_0; // 0x30
	::Struct_2_FE9BD044832BC9C3 Field_2_7; // 0x60
	::System::Int32 Field_2_2; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9DCC0FAC3E280F04_STRUCT_2_BF9C54E894E4F0F0_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_9DCC0FAC3E280F04_STRUCT_2_BF9C54E894E4F0F0_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
