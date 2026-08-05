#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_E5405E1863E5FD2C_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_E5405E1863E5FD2C_1_STRUCT_2_3CCB8209FBDD8A6E_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x845EE0)
#define CLASS_2_E5405E1863E5FD2C_1_STRUCT_2_3CCB8209FBDD8A6E_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_E5405E1863E5FD2C_1_Struct_2_3CCB8209FBDD8A6E_3_TypeDefinitionIndex = 61408;

struct alignas(8) Class_2_E5405E1863E5FD2C_1_Struct_2_3CCB8209FBDD8A6E_3
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x10
	::Class_2_E5405E1863E5FD2C_1* Field_2_6; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5405E1863E5FD2C_1_STRUCT_2_3CCB8209FBDD8A6E_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_E5405E1863E5FD2C_1_STRUCT_2_3CCB8209FBDD8A6E_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
