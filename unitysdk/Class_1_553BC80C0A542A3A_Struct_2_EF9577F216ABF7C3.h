#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_553BC80C0A542A3A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_553BC80C0A542A3A_STRUCT_2_EF9577F216ABF7C3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7631B0)
#define CLASS_1_553BC80C0A542A3A_STRUCT_2_EF9577F216ABF7C3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_553BC80C0A542A3A_Struct_2_EF9577F216ABF7C3_TypeDefinitionIndex = 72009;

struct alignas(8) Class_1_553BC80C0A542A3A_Struct_2_EF9577F216ABF7C3
{
	::System::Threading::CancellationToken Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::Class_1_553BC80C0A542A3A* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Boolean Field_2_4; // 0x40
	::System::Int32 Field_2_0; // 0x44
	::System::Int32 Field_2_5; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_STRUCT_2_EF9577F216ABF7C3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_STRUCT_2_EF9577F216ABF7C3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
