#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A972FE44F65FF61A_Class_1_8BB8F3E88D4C664D;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_A972FE44F65FF61A_STRUCT_2_29E80E209BA3A959_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70D3B0)
#define CLASS_1_A972FE44F65FF61A_STRUCT_2_29E80E209BA3A959_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_A972FE44F65FF61A_Struct_2_29E80E209BA3A959_TypeDefinitionIndex = 48775;

struct alignas(8) Class_1_A972FE44F65FF61A_Struct_2_29E80E209BA3A959
{
	::System::String* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> Field_2_1; // 0x18
	::Foundation::AssetRequestHandle Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x50
	::Class_1_A972FE44F65FF61A_Class_1_8BB8F3E88D4C664D* Field_2_3; // 0x60
	::System::Int32 Field_2_0; // 0x68
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A972FE44F65FF61A_STRUCT_2_29E80E209BA3A959_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A972FE44F65FF61A_STRUCT_2_29E80E209BA3A959_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
