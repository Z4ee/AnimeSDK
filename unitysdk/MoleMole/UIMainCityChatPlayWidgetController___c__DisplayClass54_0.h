#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179E5230)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__ENSUREPREVIOUSNODEFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x179E5240)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__ENSUREPREVIOUSNODEFADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x179E5270)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass54_0_TypeDefinitionIndex = 77923;

	class UIMainCityChatPlayWidgetController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Boolean showBlackScreen; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnsurePreviousNodeFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__ENSUREPREVIOUSNODEFADEOUT_B__0_OFFSET))(this);
		}

		::System::Void _EnsurePreviousNodeFadeOut_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__ENSUREPREVIOUSNODEFADEOUT_B__1_OFFSET))(this);
		}
	};
}
