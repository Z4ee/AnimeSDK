#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_5.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_AF0F60B7EC92FD6A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_B99494702E2A4F9E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A28A0)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_B99494702E2A4F9E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_B99494702E2A4F9E_TypeDefinitionIndex = 43271;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_B99494702E2A4F9E
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Class_2_AF0F60B7EC92FD6A* Field_2_2; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x38
	::System::UInt32 Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x4C
	::Enum_3_0A3761FE34514D6C_5 Field_2_4; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_B99494702E2A4F9E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_B99494702E2A4F9E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
