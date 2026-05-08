#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_9.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_43E0F27F37AC299B_STRUCT_2_39E2ACAFCF33ABC8_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x715200)
#define CLASS_1_43E0F27F37AC299B_STRUCT_2_39E2ACAFCF33ABC8_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_43E0F27F37AC299B_Struct_2_39E2ACAFCF33ABC8_1_TypeDefinitionIndex = 49705;

struct alignas(8) Class_1_43E0F27F37AC299B_Struct_2_39E2ACAFCF33ABC8_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_9 Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0xC8
	::System::Int32 Field_2_0; // 0xD0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_STRUCT_2_39E2ACAFCF33ABC8_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_STRUCT_2_39E2ACAFCF33ABC8_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
