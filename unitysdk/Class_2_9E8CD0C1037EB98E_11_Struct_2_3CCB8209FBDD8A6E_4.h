#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9E8CD0C1037EB98E_11;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_9E8CD0C1037EB98E_11_STRUCT_2_3CCB8209FBDD8A6E_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86C040)
#define CLASS_2_9E8CD0C1037EB98E_11_STRUCT_2_3CCB8209FBDD8A6E_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_11_Struct_2_3CCB8209FBDD8A6E_4_TypeDefinitionIndex = 61793;

struct alignas(8) Class_2_9E8CD0C1037EB98E_11_Struct_2_3CCB8209FBDD8A6E_4
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x20
	::Class_2_9E8CD0C1037EB98E_11* Field_2_0; // 0x30
	::System::Int32 Field_2_2; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_11_STRUCT_2_3CCB8209FBDD8A6E_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_11_STRUCT_2_3CCB8209FBDD8A6E_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
