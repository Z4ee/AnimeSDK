#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Struct_2_31852543D3677906.h"
#include "unitysdk/Struct_2_AABA1B8087026F0F.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_523713A408D9D32E_STRUCT_2_C02A5D5EC2F26776_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8765E0)
#define CLASS_1_523713A408D9D32E_STRUCT_2_C02A5D5EC2F26776_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_523713A408D9D32E_Struct_2_C02A5D5EC2F26776_TypeDefinitionIndex = 50243;

struct alignas(8) Class_1_523713A408D9D32E_Struct_2_C02A5D5EC2F26776
{
	::Struct_2_AABA1B8087026F0F Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Struct_2_31852543D3677906> Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_31852543D3677906> Field_2_7; // 0x40
	::System::Int32 Field_2_2; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_C02A5D5EC2F26776_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_C02A5D5EC2F26776_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
