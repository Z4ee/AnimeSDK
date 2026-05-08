#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1D0F14FBEE98E5ED;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_E5E8599FD59CB99A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x717260)
#define CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_E5E8599FD59CB99A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Struct_2_E5E8599FD59CB99A_TypeDefinitionIndex = 67691;

struct alignas(8) Class_1_1D0F14FBEE98E5ED_Struct_2_E5E8599FD59CB99A
{
	::Class_1_1D0F14FBEE98E5ED* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_3; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_E5E8599FD59CB99A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_E5E8599FD59CB99A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
