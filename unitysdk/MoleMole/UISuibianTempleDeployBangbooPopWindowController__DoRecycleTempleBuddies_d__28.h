#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleDeployBangbooPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER__DORECYCLETEMPLEBUDDIES_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FFC20)
#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER__DORECYCLETEMPLEBUDDIES_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDeployBangbooPopWindowController__DoRecycleTempleBuddies_d__28_TypeDefinitionIndex = 53491;

	struct alignas(8) UISuibianTempleDeployBangbooPopWindowController__DoRecycleTempleBuddies_d__28
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> __u__1; // 0x10
		::MoleMole::UISuibianTempleDeployBangbooPopWindowController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER__DORECYCLETEMPLEBUDDIES_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER__DORECYCLETEMPLEBUDDIES_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
