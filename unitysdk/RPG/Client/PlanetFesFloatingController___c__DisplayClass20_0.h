#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace RPG::Client { class PlanetFesTimedEffect; }
namespace System { class Action; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F96240)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS20_0__DOPLAYADDCOINEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x9F98090)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController___c__DisplayClass20_0_TypeDefinitionIndex = 54083;

	class PlanetFesFloatingController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesFloatingController* __4__this; // 0x10
		::RPG::Client::PlanetFesTimedEffect* addEffect; // 0x18
		::System::Action* onFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayAddCoinEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS20_0__DOPLAYADDCOINEFFECT_B__0_OFFSET))(this);
		}
	};
}
