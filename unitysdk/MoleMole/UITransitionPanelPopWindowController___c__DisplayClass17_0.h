#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13835160)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__DOFADETRANSITIONWITHSTARTCOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x13835170)

namespace MoleMole
{
	inline static constexpr unsigned int UITransitionPanelPopWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 51416;

	class UITransitionPanelPopWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action* onFadeEndCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFadeTransitionWithStartColor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__DOFADETRANSITIONWITHSTARTCOLOR_B__0_OFFSET))(this);
		}
	};
}
