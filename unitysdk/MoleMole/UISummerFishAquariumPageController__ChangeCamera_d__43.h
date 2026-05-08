#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISummerFishAquariumPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER__CHANGECAMERA_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76DBB0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER__CHANGECAMERA_D__43_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageController__ChangeCamera_d__43_TypeDefinitionIndex = 43982;

	struct alignas(8) UISummerFishAquariumPageController__ChangeCamera_d__43
	{
		::MoleMole::UISummerFishAquariumPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Int32 __1__state; // 0x38
		::System::Boolean isRight; // 0x3C
		::System::Boolean doLerp; // 0x3D

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER__CHANGECAMERA_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER__CHANGECAMERA_D__43_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
