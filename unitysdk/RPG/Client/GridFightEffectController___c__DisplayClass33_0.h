#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightEquipActiveEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97F6ED0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0__PLAYEQUIPACTIVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x97F8140)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass33_0_TypeDefinitionIndex = 52387;

	class GridFightEffectController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipActiveEffect* equipEffect; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayEquipActiveEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0__PLAYEQUIPACTIVEEFFECT_B__0_OFFSET))(this);
		}
	};
}
