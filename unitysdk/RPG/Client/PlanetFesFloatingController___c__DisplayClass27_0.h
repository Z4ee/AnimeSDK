#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace RPG::Client { class PlanetFesTimedEffect; }
namespace System { class Action; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC410B60)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS27_0__DOADDEVENTEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xC411360)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController___c__DisplayClass27_0_TypeDefinitionIndex = 62176;

	class PlanetFesFloatingController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::PlanetFesTimedEffect* addEffect; // 0x18
		::RPG::Client::PlanetFesFloatingController* __4__this; // 0x20

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
