#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6E781DF9B76E407C.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT_GET_BOSSBASEID_OFFSET UNITYSDK_OFFSET(0x1799C640)
#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1799C780)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABSkillDialogItemRowWidgetController_Context_TypeDefinitionIndex = 53375;

	class UIRABSkillDialogItemRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 skillDescId; // 0x28
		::System::Boolean showDetailDialog; // 0x2C
		::System::Int32 bossCharacterId; // 0x30
		::Enum_3_6E781DF9B76E407C skillIndex; // 0x34

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
