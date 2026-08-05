#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_142;
class Class_2_208CC9941471731A_799;
class Class_2_719AB4D2FEFA4E3C;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace MoleMole { class UIQuestionsAnswerWidgetController___c__DisplayClass57_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C51E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController__TryNextNpc_d__57_TypeDefinitionIndex = 88937;

	struct alignas(8) UIQuestionsAnswerWidgetController__TryNextNpc_d__57
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__2; // 0x10
		::MoleMole::UIQuestionsAnswerWidgetController___c__DisplayClass57_0* __8__1; // 0x20
		::Class_2_719AB4D2FEFA4E3C* _stageConfig_5__2; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x40
		::Class_2_719AB4D2FEFA4E3C* _stage_5__6; // 0x48
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x50
		::Class_2_208CC9941471731A_799* _special_5__7; // 0x60
		::Class_2_208CC9941471731A_142* _nextConfig_5__3; // 0x68
		::System::Boolean _correct_5__4; // 0x70
		::System::Boolean skipScreen; // 0x71
		::System::Int32 _exScore_5__5; // 0x74
		::System::Int32 __1__state; // 0x78

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
