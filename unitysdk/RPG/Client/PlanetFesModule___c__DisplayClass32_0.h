#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAD36650)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS32_0__ISLANDTYPEINCOMEUP_B__0_OFFSET UNITYSDK_OFFSET(0xAD36660)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass32_0_TypeDefinitionIndex = 61409;

	class PlanetFesModule___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesLandType landType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsLandTypeIncomeUp_b__0(::RPG::Client::PlanetFesActiveBuff* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS32_0__ISLANDTYPEINCOMEUP_B__0_OFFSET))(this, x);
		}
	};
}
