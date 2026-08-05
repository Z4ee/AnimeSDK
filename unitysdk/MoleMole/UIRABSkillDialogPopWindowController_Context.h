#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABSKILLDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_BOSSBASEID_OFFSET UNITYSDK_OFFSET(0x18864D30)
#define MOLEMOLE_UIRABSKILLDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18864E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABSkillDialogPopWindowController_Context_TypeDefinitionIndex = 69829;

	class UIRABSkillDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectSkillDescId; // 0x28
		::System::Int32 bossCharacterId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_bossBaseId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_BOSSBASEID_OFFSET))(this);
		}
	};
}
