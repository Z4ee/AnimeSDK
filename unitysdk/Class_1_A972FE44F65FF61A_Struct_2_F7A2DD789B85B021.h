#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A972FE44F65FF61A_Class_1_3838C6946A19E159;
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_A972FE44F65FF61A_STRUCT_2_F7A2DD789B85B021_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D4F70)
#define CLASS_1_A972FE44F65FF61A_STRUCT_2_F7A2DD789B85B021_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_A972FE44F65FF61A_Struct_2_F7A2DD789B85B021_TypeDefinitionIndex = 73484;

struct alignas(8) Class_1_A972FE44F65FF61A_Struct_2_F7A2DD789B85B021
{
	::Foundation::AssetPath Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::IO::Stream*> Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x38
	::Foundation::AssetRequestHandle Field_2_4; // 0x48
	::Class_1_A972FE44F65FF61A_Class_1_3838C6946A19E159* Field_2_3; // 0x68
	::System::Int32 Field_2_0; // 0x70
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A972FE44F65FF61A_STRUCT_2_F7A2DD789B85B021_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A972FE44F65FF61A_STRUCT_2_F7A2DD789B85B021_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
