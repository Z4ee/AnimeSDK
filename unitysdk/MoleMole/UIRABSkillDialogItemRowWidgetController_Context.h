#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E3C2BDB2C84479C2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT_GET_BOSSBASEID_OFFSET UNITYSDK_OFFSET(0x1666EEF0)
#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666F030)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABSkillDialogItemRowWidgetController_Context_TypeDefinitionIndex = 45895;

	class UIRABSkillDialogItemRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean showDetailDialog; // 0x28
		::Enum_3_E3C2BDB2C84479C2 skillIndex; // 0x2C
		::System::Int32 bossCharacterId; // 0x30
		::System::Int32 skillDescId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_bossBaseId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT_GET_BOSSBASEID_OFFSET))(this);
		}
	};
}
