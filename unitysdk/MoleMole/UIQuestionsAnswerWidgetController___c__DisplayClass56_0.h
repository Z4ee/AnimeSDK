#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_85;
class Class_2_A49223FCF7A3C1CF;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS56_0__BEFORESTAGENPC_G__CHANGETONPC_0_OFFSET UNITYSDK_OFFSET(0x18216C70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS56_0__BEFORESTAGENPC_G__CHATFADEANDSHOW_1_OFFSET UNITYSDK_OFFSET(0x18216CD0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18216C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController___c__DisplayClass56_0_TypeDefinitionIndex = 61871;

	class UIQuestionsAnswerWidgetController___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::Class_2_A49223FCF7A3C1CF* npcConfig; // 0x10
		::Class_2_208CC9941471731A_85* config; // 0x18
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x20
		::System::Int32 index; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _BeforeStageNpc_g__ChangeToNpc_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS56_0__BEFORESTAGENPC_G__CHANGETONPC_0_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _BeforeStageNpc_g__ChatFadeAndShow_1()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS56_0__BEFORESTAGENPC_G__CHATFADEANDSHOW_1_OFFSET))(this);
		}
	};
}
