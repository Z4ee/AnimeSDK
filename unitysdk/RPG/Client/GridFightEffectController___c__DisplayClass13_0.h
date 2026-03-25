#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97F4820)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS13_0__PLAYCYRENEFLYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x97F7B90)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS13_0__PLAYCYRENEFLYEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x97F7BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass13_0_TypeDefinitionIndex = 52375;

	class GridFightEffectController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18
		::RPG::Client::GridFightFlyEffect* effect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCyreneFlyEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS13_0__PLAYCYRENEFLYEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayCyreneFlyEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS13_0__PLAYCYRENEFLYEFFECT_B__1_OFFSET))(this);
		}
	};
}
