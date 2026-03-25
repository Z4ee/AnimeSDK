#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97F5310)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS17_0__PLAYRANDOMFLY_B__0_OFFSET UNITYSDK_OFFSET(0x97F7C80)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS17_0__PLAYRANDOMFLY_B__1_OFFSET UNITYSDK_OFFSET(0x97F7CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass17_0_TypeDefinitionIndex = 52377;

	class GridFightEffectController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightFlyEffect* effect; // 0x18
		::System::Action* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRandomFly_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS17_0__PLAYRANDOMFLY_B__0_OFFSET))(this);
		}

		::System::Void _PlayRandomFly_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS17_0__PLAYRANDOMFLY_B__1_OFFSET))(this);
		}
	};
}
