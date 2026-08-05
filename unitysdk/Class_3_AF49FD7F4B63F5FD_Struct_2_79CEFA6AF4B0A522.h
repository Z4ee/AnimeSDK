#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_79CEFA6AF4B0A522_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6D9210)
#define CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_79CEFA6AF4B0A522_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_AF49FD7F4B63F5FD_Struct_2_79CEFA6AF4B0A522_TypeDefinitionIndex = 89789;

struct alignas(8) Class_3_AF49FD7F4B63F5FD_Struct_2_79CEFA6AF4B0A522
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x20
	::Foundation::ViewObject::ViewObjectHandle Field_2_7; // 0x30
	::System::Int32 Field_2_1; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_79CEFA6AF4B0A522_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_79CEFA6AF4B0A522_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
