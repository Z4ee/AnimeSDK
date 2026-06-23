#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController___c__DisplayClass50_0; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1527DAD0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_1__SHOWCUSTOMTRANSITION_B__0_OFFSET UNITYSDK_OFFSET(0x1527DAE0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_1__SHOWCUSTOMTRANSITION_B__1_OFFSET UNITYSDK_OFFSET(0x1527DBB0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_1__SHOWCUSTOMTRANSITION_B__2_OFFSET UNITYSDK_OFFSET(0x1527DC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass50_1_TypeDefinitionIndex = 83704;

	class UIMainCityChatPlayWidgetController___c__DisplayClass50_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityChatPlayWidgetController___c__DisplayClass50_0* CS___8__locals1; // 0x10
		::UnityEngine::Events::UnityAction* selectAction; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* txt; // 0x20
		::System::Int32 npcTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowCustomTransition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_1__SHOWCUSTOMTRANSITION_B__0_OFFSET))(this);
		}

		::System::Void _ShowCustomTransition_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_1__SHOWCUSTOMTRANSITION_B__1_OFFSET))(this);
		}

		::System::Void _ShowCustomTransition_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_1__SHOWCUSTOMTRANSITION_B__2_OFFSET))(this);
		}
	};
}
