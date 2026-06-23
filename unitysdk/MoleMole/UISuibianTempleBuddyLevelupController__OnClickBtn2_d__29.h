#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C1714D5E615D4B4B_27;
class MatAnimation;
namespace MoleMole { class UISuibianTempleBuddyLevelupController; }
namespace MoleMole { class UISuibianTempleBuddyLevelupController___c__DisplayClass29_0; }
namespace MoleMole { class UISuibianTempleBuddyLevelupController___c__DisplayClass29_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B30D0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController__OnClickBtn2_d__29_TypeDefinitionIndex = 71357;

	struct alignas(8) UISuibianTempleBuddyLevelupController__OnClickBtn2_d__29
	{
		::MatAnimation* _matAnim_5__3; // 0x10
		::MoleMole::UISuibianTempleBuddyLevelupController* __4__this; // 0x18
		::MoleMole::UISuibianTempleBuddyLevelupController___c__DisplayClass29_1* __8__2; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_C1714D5E615D4B4B_27*> __u__1; // 0x28
		::UnityEngine::Animation* _anim_5__4; // 0x40
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x48
		::MoleMole::UISuibianTempleBuddyLevelupController___c__DisplayClass29_0* __8__1; // 0x50
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x58
		::Class_3_C1714D5E615D4B4B_27* _rsp_5__2; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Single _delay_5__5; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
