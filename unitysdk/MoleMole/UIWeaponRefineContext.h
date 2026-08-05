#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIWEAPONREFINECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10F031A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeaponRefineContext_TypeDefinitionIndex = 67390;

	class UIWeaponRefineContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x28
		::Class_1_0D6706375CDAAE8C* ItemDevelopData; // 0x30
		::Class_2_1824EF69C8E376A3* AvatarData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONREFINECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
