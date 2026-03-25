#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }

#define RPG_CLIENT_CHALLENGEMODULE___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x92D36F0)
#define RPG_CLIENT_CHALLENGEMODULE___C__DISPLAYCLASS74_0__GETCHALLENGEGROUPDATA_B__0_OFFSET UNITYSDK_OFFSET(0x92D9CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeModule___c__DisplayClass74_0_TypeDefinitionIndex = 51199;

	class ChallengeModule___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::UInt32 challengeGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChallengeGroupData_b__0(::RPG::Client::ChallengeGroupData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__DISPLAYCLASS74_0__GETCHALLENGEGROUPDATA_B__0_OFFSET))(this, x);
		}
	};
}
