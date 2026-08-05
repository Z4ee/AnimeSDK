#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_2_A49223FCF7A3C1CF;
class Class_2_B137C6DF18207AB7;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1757B380)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_B__3_OFFSET UNITYSDK_OFFSET(0x1757B4C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEIN_2_OFFSET UNITYSDK_OFFSET(0x1757B460)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEOUT_5_OFFSET UNITYSDK_OFFSET(0x1757B550)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHANGETONPC_0_OFFSET UNITYSDK_OFFSET(0x1757B390)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATFADEANDSHOW_1_OFFSET UNITYSDK_OFFSET(0x1757B3F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATTASK_4_OFFSET UNITYSDK_OFFSET(0x1757B4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController___c__DisplayClass57_0_TypeDefinitionIndex = 88947;

	class UIQuestionsAnswerWidgetController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::String* reply; // 0x10
		::Class_2_A49223FCF7A3C1CF* npcConfig; // 0x18
		::System::String* replyOption; // 0x20
		::System::String* replyEx; // 0x28
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x30
		::Class_2_B137C6DF18207AB7* eventConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChangeToNpc_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHANGETONPC_0_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChatFadeAndShow_1()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATFADEANDSHOW_1_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__BottomFadeIn_2()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEIN_2_OFFSET))(this);
		}

		::System::Void _TryNextNpc_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_B__3_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChatTask_4()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATTASK_4_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__BottomFadeOut_5()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEOUT_5_OFFSET))(this);
		}
	};
}
