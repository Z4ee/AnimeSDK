#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER__RESETATTACKTARGETWITHANIM_D__115_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x884380)
#define MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER__RESETATTACKTARGETWITHANIM_D__115_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterPortableHudBaseChildWindowController__ResetAttackTargetWithAnim_d__115_TypeDefinitionIndex = 57372;

	struct alignas(8) UIInLevelMonsterPortableHudBaseChildWindowController__ResetAttackTargetWithAnim_d__115
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x20
		::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER__RESETATTACKTARGETWITHANIM_D__115_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER__RESETATTACKTARGETWITHANIM_D__115_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
