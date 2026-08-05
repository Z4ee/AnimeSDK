#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_98236523318AE319;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_98236523318AE319_STRUCT_2_E5E8599FD59CB99A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FDB90)
#define CLASS_1_98236523318AE319_STRUCT_2_E5E8599FD59CB99A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_98236523318AE319_Struct_2_E5E8599FD59CB99A_TypeDefinitionIndex = 86718;

struct alignas(8) Class_1_98236523318AE319_Struct_2_E5E8599FD59CB99A
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x10
	::Class_1_98236523318AE319* Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x28
	::System::Int32 Field_2_1; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_STRUCT_2_E5E8599FD59CB99A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_STRUCT_2_E5E8599FD59CB99A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
