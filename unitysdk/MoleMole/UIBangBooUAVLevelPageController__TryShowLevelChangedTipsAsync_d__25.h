#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBangBooUAVLevelPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWLEVELCHANGEDTIPSASYNC_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x827E00)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWLEVELCHANGEDTIPSASYNC_D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVLevelPageController__TryShowLevelChangedTipsAsync_d__25_TypeDefinitionIndex = 61524;

	struct alignas(8) UIBangBooUAVLevelPageController__TryShowLevelChangedTipsAsync_d__25
	{
		::MoleMole::UIBangBooUAVLevelPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Int32 __1__state; // 0x38
		::System::Int32 _curLevel_5__2; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWLEVELCHANGEDTIPSASYNC_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWLEVELCHANGEDTIPSASYNC_D__25_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
