#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_UIROLESKILLINFOROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2D8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController_UIRoleSkillInfoRowContext_TypeDefinitionIndex = 62270;

	class UIRoleSkillInfoRowChildWindowController_UIRoleSkillInfoRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean EnableTermInteraction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_UIROLESKILLINFOROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
