#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_EC5A7AD641CF932C;
class Class_2_EC5A7AD641CF932C_Class_1_9B6B5409A5632D64;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x791630)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_6B65848E21B45D2A_6_TypeDefinitionIndex = 79717;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_6B65848E21B45D2A_6
{
	::Class_2_EC5A7AD641CF932C* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB Field_2_3; // 0x28
	::Class_2_EC5A7AD641CF932C_Class_1_9B6B5409A5632D64* Field_2_4; // 0x48
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x50
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
