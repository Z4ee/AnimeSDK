#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAnimEffect; }
namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class Action; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A96CC10)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS21_0__DOSHOWITEMEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1A96E9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController___c__DisplayClass21_0_TypeDefinitionIndex = 63537;

	class PlanetFesFloatingController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesFloatingController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::PlanetFesAnimEffect* floatEffect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoShowItemEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS21_0__DOSHOWITEMEFFECT_B__0_OFFSET))(this);
		}
	};
}
