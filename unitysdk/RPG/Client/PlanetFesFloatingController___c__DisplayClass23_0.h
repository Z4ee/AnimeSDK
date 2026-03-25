#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesFloatingCoin; }
namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class Action; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F96BF0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS23_0___DOFLYDIAMONDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x9F98130)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController___c__DisplayClass23_0_TypeDefinitionIndex = 54085;

	class PlanetFesFloatingController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesFloatingCoin* floatEffect; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::PlanetFesFloatingController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void __DoFlyDiamondEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS23_0___DOFLYDIAMONDEFFECT_B__0_OFFSET))(this);
		}
	};
}
