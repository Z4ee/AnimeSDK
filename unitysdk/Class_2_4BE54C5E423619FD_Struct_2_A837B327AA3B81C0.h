#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_4BE54C5E423619FD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_4BE54C5E423619FD_STRUCT_2_A837B327AA3B81C0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x880770)
#define CLASS_2_4BE54C5E423619FD_STRUCT_2_A837B327AA3B81C0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_4BE54C5E423619FD_Struct_2_A837B327AA3B81C0_TypeDefinitionIndex = 55156;

struct alignas(8) Class_2_4BE54C5E423619FD_Struct_2_A837B327AA3B81C0
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_2; // 0x10
	::Class_2_4BE54C5E423619FD* Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_0; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::System::Int32 Field_2_7; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_STRUCT_2_A837B327AA3B81C0_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_STRUCT_2_A837B327AA3B81C0_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
