#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_0179472C0A9A2FB9;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_0179472C0A9A2FB9_STRUCT_2_3CCB8209FBDD8A6E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x886960)
#define CLASS_2_0179472C0A9A2FB9_STRUCT_2_3CCB8209FBDD8A6E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_0179472C0A9A2FB9_Struct_2_3CCB8209FBDD8A6E_TypeDefinitionIndex = 56169;

struct alignas(8) Class_2_0179472C0A9A2FB9_Struct_2_3CCB8209FBDD8A6E
{
	::Class_2_0179472C0A9A2FB9* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0179472C0A9A2FB9_STRUCT_2_3CCB8209FBDD8A6E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_0179472C0A9A2FB9_STRUCT_2_3CCB8209FBDD8A6E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
