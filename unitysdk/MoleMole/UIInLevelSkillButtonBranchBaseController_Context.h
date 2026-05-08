#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F1489324C27A1B39;

#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1639FBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonBranchBaseController_Context_TypeDefinitionIndex = 82986;

	class UIInLevelSkillButtonBranchBaseController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F1489324C27A1B39* Container; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
