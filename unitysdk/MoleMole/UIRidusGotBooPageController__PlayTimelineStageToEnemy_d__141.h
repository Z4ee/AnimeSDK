#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYTIMELINESTAGETOENEMY_D__141_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84CC70)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYTIMELINESTAGETOENEMY_D__141_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__PlayTimelineStageToEnemy_d__141_TypeDefinitionIndex = 91526;

	struct alignas(8) UIRidusGotBooPageController__PlayTimelineStageToEnemy_d__141
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYTIMELINESTAGETOENEMY_D__141_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYTIMELINESTAGETOENEMY_D__141_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
