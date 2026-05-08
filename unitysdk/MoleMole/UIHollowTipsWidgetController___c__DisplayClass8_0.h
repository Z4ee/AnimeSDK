#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIHollowTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x150CD400)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__DOANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x150CD410)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__DOANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x150CD520)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTipsWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 74458;

	class UIHollowTipsWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowTipsWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::UnityEngine::Vector2 finalSize; // 0x20
		::System::Single length; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__DOANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__DOANIMATION_B__1_OFFSET))(this);
		}
	};
}
