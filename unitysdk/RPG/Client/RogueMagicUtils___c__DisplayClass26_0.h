#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PassiveUnitEffectTypeMatchFactorConfig; }

#define RPG_CLIENT_ROGUEMAGICUTILS___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA335B00)
#define RPG_CLIENT_ROGUEMAGICUTILS___C__DISPLAYCLASS26_0___GETPASSIVEUNITEFFECTTYPECONFIGFACTOR_B__0_OFFSET UNITYSDK_OFFSET(0xA336410)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUtils___c__DisplayClass26_0_TypeDefinitionIndex = 54927;

	class RogueMagicUtils___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicEffectType effectType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetPassiveUnitEffectTypeConfigFactor_b__0(::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUTILS___C__DISPLAYCLASS26_0___GETPASSIVEUNITEFFECTTYPECONFIGFACTOR_B__0_OFFSET))(this, x);
		}
	};
}
