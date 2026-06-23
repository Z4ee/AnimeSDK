#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_566;

#define MOLEMOLE_UIINLEVELRIDUSGOTBOOPASSIVESKILLROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1571DA40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRidusGotBooPassiveSkillRowWidgetControllerContext_TypeDefinitionIndex = 70602;

	class UIInLevelRidusGotBooPassiveSkillRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_566* Cfg; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRIDUSGOTBOOPASSIVESKILLROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
