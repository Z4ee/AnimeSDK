#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace RPG::Client { class PlanetFesFloatingEvent; }
namespace System { class Action; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xACBBA40)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS25_0__DOFLYEVENTEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xACBCA60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController___c__DisplayClass25_0_TypeDefinitionIndex = 61250;

	class PlanetFesFloatingController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesFloatingEvent* floatEffect; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::PlanetFesFloatingController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFlyEventEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS25_0__DOFLYEVENTEFFECT_B__0_OFFSET))(this);
		}
	};
}
