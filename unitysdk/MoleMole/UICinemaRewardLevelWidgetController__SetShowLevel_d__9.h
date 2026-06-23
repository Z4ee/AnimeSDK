#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaRewardLevelWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__SETSHOWLEVEL_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x80FAA0)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__SETSHOWLEVEL_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardLevelWidgetController__SetShowLevel_d__9_TypeDefinitionIndex = 86210;

	struct alignas(8) UICinemaRewardLevelWidgetController__SetShowLevel_d__9
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UICinemaRewardLevelWidgetController* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Int32 level; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Boolean isGold; // 0x38
		::System::Boolean hasEffect; // 0x39

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__SETSHOWLEVEL_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__SETSHOWLEVEL_D__9_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
