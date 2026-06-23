#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6F28FFD006F2B451;

#define MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2140)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameSkillButtonSwitchChildWindowController_Context_TypeDefinitionIndex = 89540;

	class UIBallGameSkillButtonSwitchChildWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_6F28FFD006F2B451* world; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
