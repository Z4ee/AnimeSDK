#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B90EB50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO___C__DISPLAYCLASS10_0__GETAVATARSBYPOSTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1B90EF50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarInfo___c__DisplayClass10_0_TypeDefinitionIndex = 74777;

	class IdleLiveAvatarInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ILBattleCharacterLocation posType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvatarsByPosType_b__0(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO___C__DISPLAYCLASS10_0__GETAVATARSBYPOSTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
