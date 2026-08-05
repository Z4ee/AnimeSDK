#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYCARDANIMASYNC_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x884290)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYCARDANIMASYNC_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper__PlayCardAnimAsync_d__13_TypeDefinitionIndex = 41317;

	struct alignas(8) UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper__PlayCardAnimAsync_d__13
	{
		::MoleMole::HollowCardCombineConfig* config; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__2; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper* __4__this; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* combineGoList; // 0x40
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x48
		::System::Int32 __1__state; // 0x58
		::System::Boolean _isSecondCombine_5__2; // 0x5C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYCARDANIMASYNC_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYCARDANIMASYNC_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
