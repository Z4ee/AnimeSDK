#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController___c__DisplayClass25_0; }
namespace RPG::Client { class GridFightUpgradeFlyEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET UNITYSDK_OFFSET(0x97F67D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_1__PLAYUPGRADEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x97F7ED0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_1__PLAYUPGRADEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0x97F7F40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass25_1_TypeDefinitionIndex = 52383;

	class GridFightEffectController___c__DisplayClass25_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightUpgradeFlyEffect* fly; // 0x10
		::RPG::Client::GridFightEffectController___c__DisplayClass25_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_1__PLAYUPGRADEEFFECT_B__1_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_1__PLAYUPGRADEEFFECT_B__2_OFFSET))(this);
		}
	};
}
