#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS19_0__CHECKHASAVATARCANDEPLOY_B__2_OFFSET UNITYSDK_OFFSET(0x1B91B600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9136A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo___c__DisplayClass19_0_TypeDefinitionIndex = 74795;

	class IdleLiveBaseTeamInfo___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ILBattleCharacterLocation posType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckHasAvatarCanDeploy_b__2(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS19_0__CHECKHASAVATARCANDEPLOY_B__2_OFFSET))(this, a1);
		}
	};
}
