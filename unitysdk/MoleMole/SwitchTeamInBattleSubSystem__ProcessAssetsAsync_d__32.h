#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class SwitchTeamInBattleSubSystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85D0A0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC_D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem__ProcessAssetsAsync_d__32_TypeDefinitionIndex = 42452;

	struct alignas(8) SwitchTeamInBattleSubSystem__ProcessAssetsAsync_d__32
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::System::Collections::Generic::List_1_Enumerator<::Foundation::AssetPath> __7__wrap1; // 0x20
		::MoleMole::SwitchTeamInBattleSubSystem* __4__this; // 0x40
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x48
		::System::Int32 _i_5__3; // 0x50
		::System::Single waitSec; // 0x54
		::System::Int32 __1__state; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC_D__32_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
