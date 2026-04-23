#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B35CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS26_0__GETAVATARSBYPOSTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x9B39650)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo___c__DisplayClass26_0_TypeDefinitionIndex = 69155;

	class IdleLiveBaseTeamInfo___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Boolean isExcludeNew; // 0x10
		::RPG::GameCore::ILBattleCharacterLocation posType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvatarsByPosType_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS26_0__GETAVATARSBYPOSTYPE_B__0_OFFSET))(this, avatar);
		}
	};
}
