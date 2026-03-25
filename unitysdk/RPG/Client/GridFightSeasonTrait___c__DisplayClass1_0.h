#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitChallenge; }

#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98A3560)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS1_0__GETTRAITCHALLENGES_B__0_OFFSET UNITYSDK_OFFSET(0x98A5770)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTrait___c__DisplayClass1_0_TypeDefinitionIndex = 53105;

	class GridFightSeasonTrait___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitChallenges_b__0(::RPG::Client::GridFightTraitChallenge* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS1_0__GETTRAITCHALLENGES_B__0_OFFSET))(this, x);
		}
	};
}
