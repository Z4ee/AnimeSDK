#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightTraitActiveEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4700C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS20_0__PLAYTRAITACTIVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA472A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass20_0_TypeDefinitionIndex = 59331;

	class GridFightEffectController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitActiveEffect* effect; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTraitActiveEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS20_0__PLAYTRAITACTIVEEFFECT_B__0_OFFSET))(this);
		}
	};
}
