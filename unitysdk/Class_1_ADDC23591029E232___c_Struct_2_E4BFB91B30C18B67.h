#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_ADDC23591029E232___C_STRUCT_2_E4BFB91B30C18B67_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6737D0)
#define CLASS_1_ADDC23591029E232___C_STRUCT_2_E4BFB91B30C18B67_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_ADDC23591029E232___c_Struct_2_E4BFB91B30C18B67_TypeDefinitionIndex = 53889;

struct alignas(8) Class_1_ADDC23591029E232___c_Struct_2_E4BFB91B30C18B67
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x20
	::System::Threading::CancellationToken Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x38
	::System::UInt32 Field_2_4; // 0x3C
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232___C_STRUCT_2_E4BFB91B30C18B67_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232___C_STRUCT_2_E4BFB91B30C18B67_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
