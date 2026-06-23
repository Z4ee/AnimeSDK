#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_958;
class Class_2_719AB4D2FEFA4E3C;
class Class_2_A7D6B79489471F0B;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__STARTGAME_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F7520)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__STARTGAME_D__55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController__StartGame_d__55_TypeDefinitionIndex = 61870;

	struct alignas(8) UIQuestionsAnswerWidgetController__StartGame_d__55
	{
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x10
		::Class_2_A7D6B79489471F0B* _eventConfig_5__4; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::Class_2_208CC9941471731A_958* _nextConfig_5__3; // 0x38
		::Class_2_719AB4D2FEFA4E3C* _config_5__2; // 0x40
		::System::Boolean restart; // 0x48
		::System::Int32 stageId; // 0x4C
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__STARTGAME_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__STARTGAME_D__55_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
