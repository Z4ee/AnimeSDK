#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_76615B7B6F13B74A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_76615B7B6F13B74A_STRUCT_2_20D5506003C5C30C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70A590)
#define CLASS_2_76615B7B6F13B74A_STRUCT_2_20D5506003C5C30C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_76615B7B6F13B74A_Struct_2_20D5506003C5C30C_TypeDefinitionIndex = 39167;

struct alignas(8) Class_2_76615B7B6F13B74A_Struct_2_20D5506003C5C30C
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Class_2_76615B7B6F13B74A* Field_2_2; // 0x20
	::System::Threading::CancellationToken Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x3C
	::System::Int32 Field_2_5; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76615B7B6F13B74A_STRUCT_2_20D5506003C5C30C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_76615B7B6F13B74A_STRUCT_2_20D5506003C5C30C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
