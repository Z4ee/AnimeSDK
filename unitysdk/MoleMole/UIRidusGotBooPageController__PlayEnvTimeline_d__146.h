#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYENVTIMELINE_D__146_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78D2A0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYENVTIMELINE_D__146_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__PlayEnvTimeline_d__146_TypeDefinitionIndex = 75514;

	struct alignas(8) UIRidusGotBooPageController__PlayEnvTimeline_d__146
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYENVTIMELINE_D__146_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYENVTIMELINE_D__146_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
