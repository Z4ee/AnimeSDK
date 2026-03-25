#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitChallenge; }

#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98A3C40)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS4_0__GETTRAITCONFIGS_B__0_OFFSET UNITYSDK_OFFSET(0x98A57B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTrait___c__DisplayClass4_0_TypeDefinitionIndex = 53106;

	class GridFightSeasonTrait___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitConfigs_b__0(::RPG::Client::GridFightTraitChallenge* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__DISPLAYCLASS4_0__GETTRAITCONFIGS_B__0_OFFSET))(this, x);
		}
	};
}
