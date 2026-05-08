#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1799D54B86141F1A_STRUCT_2_9BEBEAF493022E13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x781C90)
#define CLASS_1_1799D54B86141F1A_STRUCT_2_9BEBEAF493022E13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

inline static constexpr unsigned int Class_1_1799D54B86141F1A_Struct_2_9BEBEAF493022E13_TypeDefinitionIndex = 66751;

struct alignas(8) Class_1_1799D54B86141F1A_Struct_2_9BEBEAF493022E13
{
	::MoleMole::UIGeneralTipsPopWindowController* Field_2_4; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::System::Action* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x40
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_2; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1799D54B86141F1A_STRUCT_2_9BEBEAF493022E13_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1799D54B86141F1A_STRUCT_2_9BEBEAF493022E13_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
