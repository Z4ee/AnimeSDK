#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__61_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x871BC0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__61_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__RefreshAvatarRTInSkinPanel_d__61_TypeDefinitionIndex = 51571;

	struct alignas(8) UIPlayerAccessoryPageController__RefreshAvatarRTInSkinPanel_d__61
	{
		::MoleMole::AvatarShowSetting* _avatarSetting_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::Foundation::AssetPath _avatarPath_5__3; // 0x30
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x40
		::System::UInt32 skinID; // 0x48
		::System::Int32 __1__state; // 0x4C
		::System::Int32 avatarID; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__61_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__61_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
