#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__SETACCESSORYHIDDEN_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5A2A80)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__SETACCESSORYHIDDEN_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager__SetAccessoryHidden_d__12_TypeDefinitionIndex = 82940;

	struct alignas(8) NPCAccessoryManager__SetAccessoryHidden_d__12
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::NPCCrowd::Accessories::NPCAccessory* acc; // 0x18
		::System::Boolean bIsHidden; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__SETACCESSORYHIDDEN_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__SETACCESSORYHIDDEN_D__12_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
