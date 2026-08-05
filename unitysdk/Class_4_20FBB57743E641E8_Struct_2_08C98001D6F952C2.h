#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_AAE113EF1D654B70;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_20FBB57743E641E8_STRUCT_2_08C98001D6F952C2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x837120)
#define CLASS_4_20FBB57743E641E8_STRUCT_2_08C98001D6F952C2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_20FBB57743E641E8_Struct_2_08C98001D6F952C2_TypeDefinitionIndex = 45856;

struct alignas(8) Class_4_20FBB57743E641E8_Struct_2_08C98001D6F952C2
{
	::Class_1_AAE113EF1D654B70* Field_2_7; // 0x10
	::System::Threading::CancellationToken Field_2_6; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x50
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x60
	::System::Int32 Field_2_1; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20FBB57743E641E8_STRUCT_2_08C98001D6F952C2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_20FBB57743E641E8_STRUCT_2_08C98001D6F952C2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
