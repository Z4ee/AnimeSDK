#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_98236523318AE319_Class_1_ED5F9DB290CE9C2F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_98236523318AE319_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_B3D88B315575B7BE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FDBA0)
#define CLASS_1_98236523318AE319_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_B3D88B315575B7BE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_98236523318AE319_Class_1_ED5F9DB290CE9C2F_Struct_2_B3D88B315575B7BE_TypeDefinitionIndex = 86722;

struct alignas(8) Class_1_98236523318AE319_Class_1_ED5F9DB290CE9C2F_Struct_2_B3D88B315575B7BE
{
	::System::Threading::CancellationToken Field_2_1; // 0x10
	::Class_1_98236523318AE319_Class_1_ED5F9DB290CE9C2F* Field_2_0; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x34
	::System::UInt64 Field_2_7; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_B3D88B315575B7BE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_B3D88B315575B7BE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
