#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsFence.h"

class Class_1_1DC99F3008D2ACD0;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1DC99F3008D2ACD0_STRUCT_2_C104F3CC3CC6D14B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7691A0)
#define CLASS_1_1DC99F3008D2ACD0_STRUCT_2_C104F3CC3CC6D14B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_1DC99F3008D2ACD0_Struct_2_C104F3CC3CC6D14B_TypeDefinitionIndex = 66612;

struct alignas(8) Class_1_1DC99F3008D2ACD0_Struct_2_C104F3CC3CC6D14B
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::System::Threading::CancellationToken Field_2_3; // 0x20
	::Class_1_1DC99F3008D2ACD0* Field_2_2; // 0x28
	::System::Object* Field_2_5; // 0x30
	::UnityEngine::Rendering::GraphicsFence Field_2_4; // 0x38
	::System::Int32 Field_2_6; // 0x48
	::System::Int32 Field_2_0; // 0x4C
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_7; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_STRUCT_2_C104F3CC3CC6D14B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_STRUCT_2_C104F3CC3CC6D14B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
