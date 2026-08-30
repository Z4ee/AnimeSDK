#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitChallenge; }

#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A4540)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS5_0__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__0_OFFSET UNITYSDK_OFFSET(0x1C5A5CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTrait___c__DisplayClass5_0_TypeDefinitionIndex = 65483;

	class GridFightSeasonTrait___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitConfigsWithoutCheckCompleted_b__0(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS5_0__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__0_OFFSET))(this, a1);
		}
	};
}
