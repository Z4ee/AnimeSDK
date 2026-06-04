#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightUpgradeRefreshEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0ED90)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS30_0___PLAYUPGRADEREFRESHEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBB0EDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass30_0_TypeDefinitionIndex = 60275;

	class GridFightEffectController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightUpgradeRefreshEffect* refresh; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayUpgradeRefreshEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS30_0___PLAYUPGRADEREFRESHEFFECT_B__0_OFFSET))(this);
		}
	};
}
