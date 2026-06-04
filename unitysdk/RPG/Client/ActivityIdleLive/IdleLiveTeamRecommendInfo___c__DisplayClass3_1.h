#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB16BBF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS3_1___HASMATCHEDTAGONCAPTAIN_B__1_OFFSET UNITYSDK_OFFSET(0xB16BF30)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamRecommendInfo___c__DisplayClass3_1_TypeDefinitionIndex = 69959;

	class IdleLiveTeamRecommendInfo___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::UInt32 avatarId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __HasMatchedTagOnCaptain_b__1(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS3_1___HASMATCHEDTAGONCAPTAIN_B__1_OFFSET))(this, a1);
		}
	};
}
