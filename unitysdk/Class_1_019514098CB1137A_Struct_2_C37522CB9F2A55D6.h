#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_019514098CB1137A;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_019514098CB1137A_STRUCT_2_C37522CB9F2A55D6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8A5160)
#define CLASS_1_019514098CB1137A_STRUCT_2_C37522CB9F2A55D6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_019514098CB1137A_Struct_2_C37522CB9F2A55D6_TypeDefinitionIndex = 90186;

struct alignas(8) Class_1_019514098CB1137A_Struct_2_C37522CB9F2A55D6
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::System::Action* Field_2_6; // 0x20
	::Class_1_019514098CB1137A* Field_2_0; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x30
	::System::Single Field_2_7; // 0x38
	::System::Int32 Field_2_2; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_019514098CB1137A_STRUCT_2_C37522CB9F2A55D6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_019514098CB1137A_STRUCT_2_C37522CB9F2A55D6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
