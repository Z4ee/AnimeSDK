#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_B36122F4E56D941E;
class Class_2_B36122F4E56D941E_Class_1_4F7CF8049BCF140A_4;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B36122F4E56D941E_STRUCT_2_6B65848E21B45D2A_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E41E0)
#define CLASS_2_B36122F4E56D941E_STRUCT_2_6B65848E21B45D2A_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_B36122F4E56D941E_Struct_2_6B65848E21B45D2A_3_TypeDefinitionIndex = 53240;

struct alignas(8) Class_2_B36122F4E56D941E_Struct_2_6B65848E21B45D2A_3
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Class_2_B36122F4E56D941E_Class_1_4F7CF8049BCF140A_4* Field_2_3; // 0x20
	::Class_2_B36122F4E56D941E* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_6B65848E21B45D2A_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_6B65848E21B45D2A_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
