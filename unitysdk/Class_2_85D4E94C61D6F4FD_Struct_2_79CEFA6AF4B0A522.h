#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_85D4E94C61D6F4FD_STRUCT_2_79CEFA6AF4B0A522_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5AE290)
#define CLASS_2_85D4E94C61D6F4FD_STRUCT_2_79CEFA6AF4B0A522_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_85D4E94C61D6F4FD_Struct_2_79CEFA6AF4B0A522_TypeDefinitionIndex = 54928;

struct alignas(8) Class_2_85D4E94C61D6F4FD_Struct_2_79CEFA6AF4B0A522
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_STRUCT_2_79CEFA6AF4B0A522_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_STRUCT_2_79CEFA6AF4B0A522_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
