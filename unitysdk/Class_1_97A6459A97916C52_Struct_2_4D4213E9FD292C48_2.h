#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_97A6459A97916C52_STRUCT_2_4D4213E9FD292C48_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x884420)
#define CLASS_1_97A6459A97916C52_STRUCT_2_4D4213E9FD292C48_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_97A6459A97916C52_Struct_2_4D4213E9FD292C48_2_TypeDefinitionIndex = 85540;

struct alignas(8) Class_1_97A6459A97916C52_Struct_2_4D4213E9FD292C48_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x10
	::System::Action* Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_0; // 0x28
	::System::Int32 Field_2_3; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97A6459A97916C52_STRUCT_2_4D4213E9FD292C48_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_97A6459A97916C52_STRUCT_2_4D4213E9FD292C48_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
