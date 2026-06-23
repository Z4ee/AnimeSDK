#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MobileTouchRumbleBattleMode.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_MOBILETOUCHRUMBLEBATTLEMODESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D61C80)

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleBattleModeSettingContext_TypeDefinitionIndex = 64659;

	class MobileTouchRumbleBattleModeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::MobileTouchRumbleBattleMode BattleMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILETOUCHRUMBLEBATTLEMODESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
