#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8A5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleWeaponRecommendPopContext_TypeDefinitionIndex = 57814;

	class UIRoleWeaponRecommendPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x28
		::System::UInt32 avatarId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
