#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/AvatarSwitchSortType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_AVATARSWITCHSORTTYPESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x134C8180)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarSwitchSortTypeSettingContext_TypeDefinitionIndex = 74136;

	class AvatarSwitchSortTypeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::Battle::AvatarSwitchSortType SwitchSortType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSWITCHSORTTYPESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
