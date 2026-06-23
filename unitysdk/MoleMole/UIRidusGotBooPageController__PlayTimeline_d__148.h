#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace MoleMole { class UIRidusGotBooPageController___c__DisplayClass148_0; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYTIMELINE_D__148_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F7550)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYTIMELINE_D__148_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__PlayTimeline_d__148_TypeDefinitionIndex = 40732;

	struct alignas(8) UIRidusGotBooPageController__PlayTimeline_d__148
	{
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x10
		::System::String* key; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::MoleMole::UIRidusGotBooPageController___c__DisplayClass148_0* __8__1; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean withInputBlock; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYTIMELINE_D__148_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYTIMELINE_D__148_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
