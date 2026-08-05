#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_48A9B8CD2C904DCE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_48A9B8CD2C904DCE_STRUCT_2_62C4ECA4846CB358_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x819CA0)
#define CLASS_5_48A9B8CD2C904DCE_STRUCT_2_62C4ECA4846CB358_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_5_48A9B8CD2C904DCE_Struct_2_62C4ECA4846CB358_TypeDefinitionIndex = 45838;

struct alignas(8) Class_5_48A9B8CD2C904DCE_Struct_2_62C4ECA4846CB358
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::Class_5_48A9B8CD2C904DCE* Field_2_6; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_48A9B8CD2C904DCE_STRUCT_2_62C4ECA4846CB358_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_48A9B8CD2C904DCE_STRUCT_2_62C4ECA4846CB358_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
