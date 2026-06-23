#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYANIFORENTITY_D__126_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x761270)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYANIFORENTITY_D__126_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__PlayAniForEntity_d__126_TypeDefinitionIndex = 40741;

	struct alignas(8) UIRidusGotBooPageController__PlayAniForEntity_d__126
	{
		::MoleMole::Battle::Entity* entity; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 aniID; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYANIFORENTITY_D__126_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYANIFORENTITY_D__126_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
