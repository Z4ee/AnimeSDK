#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animator; }

#define CLASS_2_A31465F603522373_STRUCT_2_D6F951A46A320987_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7750B0)
#define CLASS_2_A31465F603522373_STRUCT_2_D6F951A46A320987_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_A31465F603522373_Struct_2_D6F951A46A320987_TypeDefinitionIndex = 78248;

struct alignas(8) Class_2_A31465F603522373_Struct_2_D6F951A46A320987
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::UnityEngine::Animator* Field_2_2; // 0x18
	::System::ValueTuple_2<::System::Single, ::System::Single> Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x28
	::System::Int32 Field_2_0; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_STRUCT_2_D6F951A46A320987_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_STRUCT_2_D6F951A46A320987_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
