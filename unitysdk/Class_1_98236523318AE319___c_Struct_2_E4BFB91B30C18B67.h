#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_98236523318AE319___C_STRUCT_2_E4BFB91B30C18B67_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FDB80)
#define CLASS_1_98236523318AE319___C_STRUCT_2_E4BFB91B30C18B67_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_98236523318AE319___c_Struct_2_E4BFB91B30C18B67_TypeDefinitionIndex = 86732;

struct alignas(8) Class_1_98236523318AE319___c_Struct_2_E4BFB91B30C18B67
{
	::System::Threading::CancellationToken Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x28
	::System::Boolean Field_2_5; // 0x38
	::System::Int32 Field_2_0; // 0x3C
	::System::UInt32 Field_2_4; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319___C_STRUCT_2_E4BFB91B30C18B67_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319___C_STRUCT_2_E4BFB91B30C18B67_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
