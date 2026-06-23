#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_70FF0C3E70C4EF9F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_70FF0C3E70C4EF9F_STRUCT_2_21432949A5771034_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F4BB0)
#define CLASS_1_70FF0C3E70C4EF9F_STRUCT_2_21432949A5771034_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_70FF0C3E70C4EF9F_Struct_2_21432949A5771034_TypeDefinitionIndex = 78213;

struct alignas(8) Class_1_70FF0C3E70C4EF9F_Struct_2_21432949A5771034
{
	::Class_1_70FF0C3E70C4EF9F* Field_2_2; // 0x10
	::System::Threading::CancellationToken Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_STRUCT_2_21432949A5771034_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_STRUCT_2_21432949A5771034_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
