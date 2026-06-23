#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_3CCB8209FBDD8A6E_11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x68F7F0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_3CCB8209FBDD8A6E_11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_3CCB8209FBDD8A6E_11_TypeDefinitionIndex = 65400;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_3CCB8209FBDD8A6E_11
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_2_3CC769D284A54927* Field_2_2; // 0x30
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_3CCB8209FBDD8A6E_11_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_3CCB8209FBDD8A6E_11_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
