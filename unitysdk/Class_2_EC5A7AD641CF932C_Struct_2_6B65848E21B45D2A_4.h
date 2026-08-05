#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_EC5A7AD641CF932C;
class Class_2_EC5A7AD641CF932C_Class_1_9B6B5409A5632D64;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85D940)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_6B65848E21B45D2A_4_TypeDefinitionIndex = 87191;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_6B65848E21B45D2A_4
{
	::Class_2_EC5A7AD641CF932C_Class_1_9B6B5409A5632D64* Field_2_7; // 0x10
	::Class_2_EC5A7AD641CF932C* Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB Field_2_0; // 0x40
	::System::Int32 Field_2_3; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
