#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_88757C352B68BC6A;

#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17230810)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonBranchBaseController_Context_TypeDefinitionIndex = 74325;

	class UIInLevelSkillButtonBranchBaseController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_88757C352B68BC6A* Container; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
