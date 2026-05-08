#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_553BC80C0A542A3A_STRUCT_2_CFE93CE130BC7CA2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76F510)
#define CLASS_1_553BC80C0A542A3A_STRUCT_2_CFE93CE130BC7CA2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_553BC80C0A542A3A_Struct_2_CFE93CE130BC7CA2_TypeDefinitionIndex = 72012;

struct alignas(8) Class_1_553BC80C0A542A3A_Struct_2_CFE93CE130BC7CA2
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_5; // 0x10
	::System::Action* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x38
	::System::Int32 Field_2_2; // 0x3C
	::System::Boolean Field_2_4; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_STRUCT_2_CFE93CE130BC7CA2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_STRUCT_2_CFE93CE130BC7CA2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
