#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYBGEFFECT_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81EAC0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYBGEFFECT_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper__PlayBGEffect_d__15_TypeDefinitionIndex = 58273;

	struct alignas(8) UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper__PlayBGEffect_d__15
	{
		::MoleMole::HollowCardCombineConfig* config; // 0x10
		::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper* __4__this; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYBGEFFECT_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYBGEFFECT_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
