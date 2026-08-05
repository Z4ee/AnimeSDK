#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_B34091191FCE3A1B;
class Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A_3;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B34091191FCE3A1B_STRUCT_2_6B65848E21B45D2A_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CD7B0)
#define CLASS_2_B34091191FCE3A1B_STRUCT_2_6B65848E21B45D2A_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B_Struct_2_6B65848E21B45D2A_2_TypeDefinitionIndex = 87066;

struct alignas(8) Class_2_B34091191FCE3A1B_Struct_2_6B65848E21B45D2A_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A_3* Field_2_5; // 0x30
	::Class_2_B34091191FCE3A1B* Field_2_6; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_6B65848E21B45D2A_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_6B65848E21B45D2A_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
