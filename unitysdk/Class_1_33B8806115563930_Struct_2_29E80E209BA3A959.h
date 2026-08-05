#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_33B8806115563930_Class_1_8BB8F3E88D4C664D_1;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_33B8806115563930_STRUCT_2_29E80E209BA3A959_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CF40)
#define CLASS_1_33B8806115563930_STRUCT_2_29E80E209BA3A959_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_33B8806115563930_Struct_2_29E80E209BA3A959_TypeDefinitionIndex = 66247;

struct alignas(8) Class_1_33B8806115563930_Struct_2_29E80E209BA3A959
{
	::Foundation::AssetRequestHandle Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> Field_2_0; // 0x40
	::System::String* Field_2_7; // 0x58
	::Class_1_33B8806115563930_Class_1_8BB8F3E88D4C664D_1* Field_2_6; // 0x60
	::System::Int32 Field_2_1; // 0x68
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_11; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B8806115563930_STRUCT_2_29E80E209BA3A959_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_33B8806115563930_STRUCT_2_29E80E209BA3A959_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
