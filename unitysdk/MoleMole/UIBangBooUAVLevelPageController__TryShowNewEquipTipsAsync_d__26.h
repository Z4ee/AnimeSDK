#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBangBooUAVLevelPageController; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWNEWEQUIPTIPSASYNC_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x755EE0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWNEWEQUIPTIPSASYNC_D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVLevelPageController__TryShowNewEquipTipsAsync_d__26_TypeDefinitionIndex = 41737;

	struct alignas(8) UIBangBooUAVLevelPageController__TryShowNewEquipTipsAsync_d__26
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::System::Collections::Generic::Queue_1<::System::Int32>* _equipTipsPopQueue_5__2; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::MoleMole::UIBangBooUAVLevelPageController* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWNEWEQUIPTIPSASYNC_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWNEWEQUIPTIPSASYNC_D__26_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
