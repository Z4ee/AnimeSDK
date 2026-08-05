#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_553BC80C0A542A3A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_553BC80C0A542A3A_STRUCT_2_D473F93BD6D472D2_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x80F9A0)
#define CLASS_1_553BC80C0A542A3A_STRUCT_2_D473F93BD6D472D2_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_553BC80C0A542A3A_Struct_2_D473F93BD6D472D2_2_TypeDefinitionIndex = 89278;

struct alignas(8) Class_1_553BC80C0A542A3A_Struct_2_D473F93BD6D472D2_2
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::System::Threading::CancellationToken Field_2_5; // 0x20
	::Class_1_553BC80C0A542A3A* Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_STRUCT_2_D473F93BD6D472D2_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_STRUCT_2_D473F93BD6D472D2_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
