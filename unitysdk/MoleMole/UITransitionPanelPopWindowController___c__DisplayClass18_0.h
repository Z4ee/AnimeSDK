#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E44910)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__DOFADETRANSITIONWITHSTARTCOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x12E44920)

namespace MoleMole
{
	inline static constexpr unsigned int UITransitionPanelPopWindowController___c__DisplayClass18_0_TypeDefinitionIndex = 70324;

	class UITransitionPanelPopWindowController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action* onFadeEndCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFadeTransitionWithStartColor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__DOFADETRANSITIONWITHSTARTCOLOR_B__0_OFFSET))(this);
		}
	};
}
