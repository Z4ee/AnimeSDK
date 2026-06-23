#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_DB32C2DBCDB93B06;

#define MOLEMOLE_UIRABDEPOSITORYSKILLDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18217FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositorySkillDescWidgetController_Context_TypeDefinitionIndex = 47540;

	class UIRABDepositorySkillDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_DB32C2DBCDB93B06* SkillData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYSKILLDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
