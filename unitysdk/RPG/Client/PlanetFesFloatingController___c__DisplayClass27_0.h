#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace RPG::Client { class PlanetFesTimedEffect; }
namespace System { class Action; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xACBC2B0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS27_0__DOADDEVENTEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xACBCB00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController___c__DisplayClass27_0_TypeDefinitionIndex = 61252;

	class PlanetFesFloatingController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesTimedEffect* addEffect; // 0x10
		::RPG::Client::PlanetFesFloatingController* __4__this; // 0x18
		::System::Action* onFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoAddEventEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS27_0__DOADDEVENTEFFECT_B__0_OFFSET))(this);
		}
	};
}
