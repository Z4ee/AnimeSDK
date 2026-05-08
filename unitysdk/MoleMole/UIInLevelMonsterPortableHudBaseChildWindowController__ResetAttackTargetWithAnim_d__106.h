#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER__RESETATTACKTARGETWITHANIM_D__106_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AC620)
#define MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER__RESETATTACKTARGETWITHANIM_D__106_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5C4D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterPortableHudBaseChildWindowController__ResetAttackTargetWithAnim_d__106_TypeDefinitionIndex = 77554;

	struct alignas(8) UIInLevelMonsterPortableHudBaseChildWindowController__ResetAttackTargetWithAnim_d__106
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* __4__this; // 0x20
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER__RESETATTACKTARGETWITHANIM_D__106_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMONSTERPORTABLEHUDBASECHILDWINDOWCONTROLLER__RESETATTACKTARGETWITHANIM_D__106_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
