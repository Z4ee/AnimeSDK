#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_4_11BC434BF0766D43;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_11BC434BF0766D43_STRUCT_2_D8D6B952AA14C16B_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x731060)
#define CLASS_4_11BC434BF0766D43_STRUCT_2_D8D6B952AA14C16B_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_11BC434BF0766D43_Struct_2_D8D6B952AA14C16B_1_TypeDefinitionIndex = 49514;

struct alignas(8) Class_4_11BC434BF0766D43_Struct_2_D8D6B952AA14C16B_1
{
	::System::Threading::CancellationToken Field_2_5; // 0x10
	::Class_4_11BC434BF0766D43* Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_11BC434BF0766D43_STRUCT_2_D8D6B952AA14C16B_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_11BC434BF0766D43_STRUCT_2_D8D6B952AA14C16B_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
