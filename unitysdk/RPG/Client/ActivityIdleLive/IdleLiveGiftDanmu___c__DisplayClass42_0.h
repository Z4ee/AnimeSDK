#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveGiftDanmu; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveLikeEffect; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMU___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F12B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMU___C__DISPLAYCLASS42_0___PLAYLIKEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1C0F3020)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGiftDanmu___c__DisplayClass42_0_TypeDefinitionIndex = 74879;

	class IdleLiveGiftDanmu___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu* __4__this; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveLikeEffect* likeEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMU___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayLikeEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMU___C__DISPLAYCLASS42_0___PLAYLIKEEFFECT_B__0_OFFSET))(this);
		}
	};
}
