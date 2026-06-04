#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }

#define RPG_CLIENT_CHALLENGEMODULE___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB555980)
#define RPG_CLIENT_CHALLENGEMODULE___C__DISPLAYCLASS89_0__GETCHALLENGEGROUPDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB55C050)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeModule___c__DisplayClass89_0_TypeDefinitionIndex = 59045;

	class ChallengeModule___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::System::UInt32 challengeGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChallengeGroupData_b__0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__DISPLAYCLASS89_0__GETCHALLENGEGROUPDATA_B__0_OFFSET))(this, a1);
		}
	};
}
