#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_89F02A99C5801E3A_STRUCT_2_BF9C54E894E4F0F0_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B3B10)
#define CLASS_4_89F02A99C5801E3A_STRUCT_2_BF9C54E894E4F0F0_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_89F02A99C5801E3A_Struct_2_BF9C54E894E4F0F0_3_TypeDefinitionIndex = 74915;

struct alignas(8) Class_4_89F02A99C5801E3A_Struct_2_BF9C54E894E4F0F0_3
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x50
	::System::Int32 Field_2_2; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_89F02A99C5801E3A_STRUCT_2_BF9C54E894E4F0F0_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_89F02A99C5801E3A_STRUCT_2_BF9C54E894E4F0F0_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
