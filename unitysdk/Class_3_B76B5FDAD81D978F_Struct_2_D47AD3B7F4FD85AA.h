#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_B76B5FDAD81D978F_STRUCT_2_D47AD3B7F4FD85AA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x801AA0)
#define CLASS_3_B76B5FDAD81D978F_STRUCT_2_D47AD3B7F4FD85AA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_B76B5FDAD81D978F_Struct_2_D47AD3B7F4FD85AA_TypeDefinitionIndex = 89729;

struct alignas(8) Class_3_B76B5FDAD81D978F_Struct_2_D47AD3B7F4FD85AA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x18
	::System::Int32 Field_2_1; // 0x1C
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x20

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_STRUCT_2_D47AD3B7F4FD85AA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_STRUCT_2_D47AD3B7F4FD85AA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
