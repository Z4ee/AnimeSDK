#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A27C3E06CB3501A8;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_A27C3E06CB3501A8_STRUCT_2_3DF10C1C031BC5F7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8D7D40)
#define CLASS_1_A27C3E06CB3501A8_STRUCT_2_3DF10C1C031BC5F7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_A27C3E06CB3501A8_Struct_2_3DF10C1C031BC5F7_TypeDefinitionIndex = 80897;

struct alignas(8) Class_1_A27C3E06CB3501A8_Struct_2_3DF10C1C031BC5F7
{
	::MoleMole::Battle::Entity* Field_2_5; // 0x10
	::PipelineCamera::ScopedDelegateHandle Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x20
	::Class_1_A27C3E06CB3501A8* Field_2_6; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_STRUCT_2_3DF10C1C031BC5F7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_STRUCT_2_3DF10C1C031BC5F7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
