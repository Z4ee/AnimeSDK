#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTarget; }

#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x191DED20)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__DISPLAYCLASS69_0__GETTARGETINDEXBYID_B__0_OFFSET UNITYSDK_OFFSET(0x191DF710)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBoss___c__DisplayClass69_0_TypeDefinitionIndex = 60375;

	class ChallengePeakBoss___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTargetIndexByID_b__0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__DISPLAYCLASS69_0__GETTARGETINDEXBYID_B__0_OFFSET))(this, a1);
		}
	};
}
