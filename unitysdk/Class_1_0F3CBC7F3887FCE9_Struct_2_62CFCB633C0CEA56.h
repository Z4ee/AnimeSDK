#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0F3CBC7F3887FCE9;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_0F3CBC7F3887FCE9_STRUCT_2_62CFCB633C0CEA56_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x713FF0)
#define CLASS_1_0F3CBC7F3887FCE9_STRUCT_2_62CFCB633C0CEA56_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x55E040)

inline static constexpr unsigned int Class_1_0F3CBC7F3887FCE9_Struct_2_62CFCB633C0CEA56_TypeDefinitionIndex = 58507;

struct alignas(8) Class_1_0F3CBC7F3887FCE9_Struct_2_62CFCB633C0CEA56
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x20
	::Class_1_0F3CBC7F3887FCE9* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Boolean Field_2_3; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3CBC7F3887FCE9_STRUCT_2_62CFCB633C0CEA56_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_0F3CBC7F3887FCE9_STRUCT_2_62CFCB633C0CEA56_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
