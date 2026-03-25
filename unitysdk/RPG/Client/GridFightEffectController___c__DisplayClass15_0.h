#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97F4C60)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__PLAYFLYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x97F7BE0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__PLAYFLYEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x97F7C20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__PLAYFLYEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0x97F7C30)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__PLAYFLYEFFECT_B__3_OFFSET UNITYSDK_OFFSET(0x97F7C70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass15_0_TypeDefinitionIndex = 52376;

	class GridFightEffectController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18
		::RPG::Client::GridFightFlyEffect* effect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFlyEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__PLAYFLYEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayFlyEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__PLAYFLYEFFECT_B__1_OFFSET))(this);
		}

		::System::Void _PlayFlyEffect_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__PLAYFLYEFFECT_B__2_OFFSET))(this);
		}

		::System::Void _PlayFlyEffect_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS15_0__PLAYFLYEFFECT_B__3_OFFSET))(this);
		}
	};
}
