#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionBaseData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC58C1D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA___C__DISPLAYCLASS2_0__GETPROMOTIONBYUNLOCKSTAR_B__0_OFFSET UNITYSDK_OFFSET(0xC58C520)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarData___c__DisplayClass2_0_TypeDefinitionIndex = 74774;

	class IdleLiveAvatarData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 unlockStar; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPromotionByUnlockStar_b__0(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA___C__DISPLAYCLASS2_0__GETPROMOTIONBYUNLOCKSTAR_B__0_OFFSET))(this, a1);
		}
	};
}
