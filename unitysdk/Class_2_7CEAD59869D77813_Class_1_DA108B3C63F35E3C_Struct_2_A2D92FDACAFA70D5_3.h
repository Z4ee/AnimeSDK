#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_7CEAD59869D77813_Class_1_DA108B3C63F35E3C;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_7CEAD59869D77813_CLASS_1_DA108B3C63F35E3C_STRUCT_2_A2D92FDACAFA70D5_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85DC90)
#define CLASS_2_7CEAD59869D77813_CLASS_1_DA108B3C63F35E3C_STRUCT_2_A2D92FDACAFA70D5_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_7CEAD59869D77813_Class_1_DA108B3C63F35E3C_Struct_2_A2D92FDACAFA70D5_3_TypeDefinitionIndex = 90484;

struct alignas(8) Class_2_7CEAD59869D77813_Class_1_DA108B3C63F35E3C_Struct_2_A2D92FDACAFA70D5_3
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_0; // 0x20
	::Class_2_7CEAD59869D77813_Class_1_DA108B3C63F35E3C* Field_2_1; // 0x30
	::System::Int32 Field_2_3; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813_CLASS_1_DA108B3C63F35E3C_STRUCT_2_A2D92FDACAFA70D5_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813_CLASS_1_DA108B3C63F35E3C_STRUCT_2_A2D92FDACAFA70D5_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
