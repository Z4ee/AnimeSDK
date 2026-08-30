#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerChallengePeakRecordGroupData; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E25D0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA___C__DISPLAYCLASS2_0__GETCURRECORDGROUPDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1C2E2650)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordData___c__DisplayClass2_0_TypeDefinitionIndex = 64331;

	class PlayerChallengePeakRecordData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 curGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCurRecordGroupData_b__0(::RPG::Client::PlayerChallengePeakRecordGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerChallengePeakRecordGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA___C__DISPLAYCLASS2_0__GETCURRECORDGROUPDATA_B__0_OFFSET))(this, a1);
		}
	};
}
