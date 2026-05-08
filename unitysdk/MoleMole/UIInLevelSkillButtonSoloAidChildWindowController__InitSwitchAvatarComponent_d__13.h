#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelSkillButtonSoloAidChildWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER__INITSWITCHAVATARCOMPONENT_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79B570)
#define MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER__INITSWITCHAVATARCOMPONENT_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonSoloAidChildWindowController__InitSwitchAvatarComponent_d__13_TypeDefinitionIndex = 61508;

	struct alignas(8) UIInLevelSkillButtonSoloAidChildWindowController__InitSwitchAvatarComponent_d__13
	{
		::MoleMole::UIInLevelSkillButtonSoloAidChildWindowController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER__INITSWITCHAVATARCOMPONENT_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER__INITSWITCHAVATARCOMPONENT_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
