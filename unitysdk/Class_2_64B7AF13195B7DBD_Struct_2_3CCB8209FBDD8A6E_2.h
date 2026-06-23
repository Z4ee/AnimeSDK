#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_64B7AF13195B7DBD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_64B7AF13195B7DBD_STRUCT_2_3CCB8209FBDD8A6E_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x67DE00)
#define CLASS_2_64B7AF13195B7DBD_STRUCT_2_3CCB8209FBDD8A6E_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_64B7AF13195B7DBD_Struct_2_3CCB8209FBDD8A6E_2_TypeDefinitionIndex = 39836;

struct alignas(8) Class_2_64B7AF13195B7DBD_Struct_2_3CCB8209FBDD8A6E_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_64B7AF13195B7DBD* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64B7AF13195B7DBD_STRUCT_2_3CCB8209FBDD8A6E_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_64B7AF13195B7DBD_STRUCT_2_3CCB8209FBDD8A6E_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
