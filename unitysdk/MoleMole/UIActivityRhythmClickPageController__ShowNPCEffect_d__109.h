#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIActivityRhythmClickPageController; }
namespace MoleMole { class UIActivityRhythmClickPageController___c__DisplayClass109_0; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER__SHOWNPCEFFECT_D__109_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x777AF0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER__SHOWNPCEFFECT_D__109_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController__ShowNPCEffect_d__109_TypeDefinitionIndex = 46823;

	struct alignas(8) UIActivityRhythmClickPageController__ShowNPCEffect_d__109
	{
		::MoleMole::UIActivityRhythmClickPageController___c__DisplayClass109_0* __8__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::System::Action_1<::MoleMole::Battle::Entity*>* onEntityReady; // 0x20
		::MoleMole::Battle::Entity* npcEntity; // 0x28
		::System::String* effectName; // 0x30
		::MoleMole::Battle::Entity* effectEntity; // 0x38
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x40
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x48
		::System::Boolean isShow; // 0x58
		::System::Int32 __1__state; // 0x5C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER__SHOWNPCEFFECT_D__109_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER__SHOWNPCEFFECT_D__109_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
