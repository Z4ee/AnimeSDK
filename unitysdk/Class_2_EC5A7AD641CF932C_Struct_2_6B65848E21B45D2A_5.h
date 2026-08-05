#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_127;
class Class_2_EC5A7AD641CF932C;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8919D0)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_6B65848E21B45D2A_5_TypeDefinitionIndex = 87197;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_6B65848E21B45D2A_5
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::Class_1_43BD383C98B4C0C5_127* Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x28
	::Class_2_EC5A7AD641CF932C* Field_2_1; // 0x38
	::System::Int32 Field_2_3; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
