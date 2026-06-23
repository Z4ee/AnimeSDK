#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS428_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16798870)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS428_0__PLAYFADEINSWITCHSCENE_B__1_OFFSET UNITYSDK_OFFSET(0x16798880)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass428_0_TypeDefinitionIndex = 54873;

	class UIGalgamePageController___c__DisplayClass428_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::UnityEngine::CanvasGroup* stageCanvasGroup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS428_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeInSwitchScene_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS428_0__PLAYFADEINSWITCHSCENE_B__1_OFFSET))(this);
		}
	};
}
