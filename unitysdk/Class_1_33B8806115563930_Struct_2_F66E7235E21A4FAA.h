#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_33B8806115563930_Class_1_8BB8F3E88D4C664D;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_33B8806115563930_STRUCT_2_F66E7235E21A4FAA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D3060)
#define CLASS_1_33B8806115563930_STRUCT_2_F66E7235E21A4FAA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_33B8806115563930_Struct_2_F66E7235E21A4FAA_TypeDefinitionIndex = 66246;

struct alignas(8) Class_1_33B8806115563930_Struct_2_F66E7235E21A4FAA
{
	::Foundation::AssetRequestHandle Field_2_4; // 0x10
	::Foundation::AssetPath Field_2_6; // 0x30
	::Class_1_33B8806115563930_Class_1_8BB8F3E88D4C664D* Field_2_5; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> Field_2_7; // 0x48
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x60
	::System::Int32 Field_2_0; // 0x70
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_10; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B8806115563930_STRUCT_2_F66E7235E21A4FAA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_33B8806115563930_STRUCT_2_F66E7235E21A4FAA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
