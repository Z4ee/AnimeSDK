#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_46;
namespace MoleMole { class UISuibianTempleHiveBoxPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER__CREATEBUDDYENTITY_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75E500)
#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER__CREATEBUDDYENTITY_D__36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleHiveBoxPageController__CreateBuddyEntity_d__36_TypeDefinitionIndex = 82716;

	struct alignas(8) UISuibianTempleHiveBoxPageController__CreateBuddyEntity_d__36
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::MoleMole::UISuibianTempleHiveBoxPageController* __4__this; // 0x20
		::Class_2_208CC9941471731A_46* _displayConfig_5__2; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Int32 __1__state; // 0x40
		::System::Int32 buddyID; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER__CREATEBUDDYENTITY_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER__CREATEBUDDYENTITY_D__36_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
