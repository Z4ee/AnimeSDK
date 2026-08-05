#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_7E85711946499166_STRUCT_2_070A63A9AF9544EA_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96A740)
#define CLASS_4_7E85711946499166_STRUCT_2_070A63A9AF9544EA_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_7E85711946499166_Struct_2_070A63A9AF9544EA_1_TypeDefinitionIndex = 72370;

struct alignas(8) Class_4_7E85711946499166_Struct_2_070A63A9AF9544EA_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x10
	::System::Threading::CancellationToken Field_2_7; // 0x20
	::Foundation::ViewObject::ViewObjectHandle Field_2_6; // 0x28
	::System::Int32 Field_2_5; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x3C
	::System::Int32 Field_2_1; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_STRUCT_2_070A63A9AF9544EA_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_STRUCT_2_070A63A9AF9544EA_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
