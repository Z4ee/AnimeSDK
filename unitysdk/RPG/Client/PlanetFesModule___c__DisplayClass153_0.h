#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesActiveBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS153_0__CALCINCOMEAFTERSWITCHAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x9FC0510)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS153_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC0500)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass153_0_TypeDefinitionIndex = 54242;

	class PlanetFesModule___c__DisplayClass153_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesAvatarData* oldAvatar; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS153_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CalcIncomeAfterSwitchAvatar_b__0(::RPG::Client::PlanetFesActiveBuff* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS153_0__CALCINCOMEAFTERSWITCHAVATAR_B__0_OFFSET))(this, x);
		}
	};
}
