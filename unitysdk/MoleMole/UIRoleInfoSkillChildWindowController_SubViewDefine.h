#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel; }
namespace MoleMole { class UIRoleInfoSkillChildWindowController_SubViewDefine_SetActiveDel; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_GET_REFRESH_OFFSET UNITYSDK_OFFSET(0x16139620)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_GET_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x16139630)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x16139640)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController_SubViewDefine_TypeDefinitionIndex = 79295;

	class UIRoleInfoSkillChildWindowController_SubViewDefine : public ::System::Object
	{
	public:
		::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_SetActiveDel* _SetActive_k__BackingField; // 0x10
		::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel* _Refresh_k__BackingField; // 0x18

		::System::Void _ctor(::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel* refresh, ::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_SetActiveDel* setActive)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel*, ::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_SetActiveDel*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE__CTOR_OFFSET))(this, refresh, setActive);
		}

		::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel* get_Refresh()
		{
			return ((::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_GET_REFRESH_OFFSET))(this);
		}

		::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_SetActiveDel* get_SetActive()
		{
			return ((::MoleMole::UIRoleInfoSkillChildWindowController_SubViewDefine_SetActiveDel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_GET_SETACTIVE_OFFSET))(this);
		}
	};
}
