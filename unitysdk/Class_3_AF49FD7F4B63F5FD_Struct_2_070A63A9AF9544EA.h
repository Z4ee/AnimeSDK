#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_070A63A9AF9544EA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84D940)
#define CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_070A63A9AF9544EA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_AF49FD7F4B63F5FD_Struct_2_070A63A9AF9544EA_TypeDefinitionIndex = 43664;

struct alignas(8) Class_3_AF49FD7F4B63F5FD_Struct_2_070A63A9AF9544EA
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x38
	::System::Int32 Field_2_0; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_070A63A9AF9544EA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_070A63A9AF9544EA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
