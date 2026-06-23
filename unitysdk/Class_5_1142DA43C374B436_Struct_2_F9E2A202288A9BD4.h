#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_568600B6F5743120;
class Class_5_1142DA43C374B436;
class Class_5_1142DA43C374B436_Class_1_5E9723171F9C3B56;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_1142DA43C374B436_STRUCT_2_F9E2A202288A9BD4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D0DB0)
#define CLASS_5_1142DA43C374B436_STRUCT_2_F9E2A202288A9BD4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_5_1142DA43C374B436_Struct_2_F9E2A202288A9BD4_TypeDefinitionIndex = 85535;

struct alignas(8) Class_5_1142DA43C374B436_Struct_2_F9E2A202288A9BD4
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Class_5_1142DA43C374B436_Class_1_5E9723171F9C3B56* Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::Class_3_568600B6F5743120* Field_2_5; // 0x40
	::Class_5_1142DA43C374B436* Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_1142DA43C374B436_STRUCT_2_F9E2A202288A9BD4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_1142DA43C374B436_STRUCT_2_F9E2A202288A9BD4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
