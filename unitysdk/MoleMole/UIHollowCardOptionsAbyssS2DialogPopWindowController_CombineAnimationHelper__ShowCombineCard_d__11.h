#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__SHOWCOMBINECARD_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8842A0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__SHOWCOMBINECARD_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper__ShowCombineCard_d__11_TypeDefinitionIndex = 41314;

	struct alignas(8) UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper__ShowCombineCard_d__11
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__SHOWCOMBINECARD_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__SHOWCOMBINECARD_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
