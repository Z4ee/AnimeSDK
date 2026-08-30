#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTarget; }

#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA0890)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__DISPLAYCLASS71_0__GETTARGETINDEXBYID_B__0_OFFSET UNITYSDK_OFFSET(0xCAA12C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBoss___c__DisplayClass71_0_TypeDefinitionIndex = 63227;

	class ChallengePeakBoss___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTargetIndexByID_b__0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__DISPLAYCLASS71_0__GETTARGETINDEXBYID_B__0_OFFSET))(this, a1);
		}
	};
}
