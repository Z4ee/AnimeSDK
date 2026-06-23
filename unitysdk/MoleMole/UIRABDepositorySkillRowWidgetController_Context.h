#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_DB32C2DBCDB93B06;

#define MOLEMOLE_UIRABDEPOSITORYSKILLROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1578B590)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositorySkillRowWidgetController_Context_TypeDefinitionIndex = 51838;

	class UIRABDepositorySkillRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_DB32C2DBCDB93B06* SkillData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYSKILLROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
