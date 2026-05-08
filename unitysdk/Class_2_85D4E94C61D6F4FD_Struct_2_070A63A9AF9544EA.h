#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_85D4E94C61D6F4FD_STRUCT_2_070A63A9AF9544EA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x730F50)
#define CLASS_2_85D4E94C61D6F4FD_STRUCT_2_070A63A9AF9544EA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_85D4E94C61D6F4FD_Struct_2_070A63A9AF9544EA_TypeDefinitionIndex = 54926;

struct alignas(8) Class_2_85D4E94C61D6F4FD_Struct_2_070A63A9AF9544EA
{
	::Foundation::ViewObject::ViewObjectHandle Field_2_3; // 0x10
	::System::Threading::CancellationToken Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_STRUCT_2_070A63A9AF9544EA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_STRUCT_2_070A63A9AF9544EA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
