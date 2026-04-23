#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PASSIVEUNITEFFECTTYPEMATCHFACTORCONFIG_METHOD_2_D1E8B20D52FC6308_OFFSET UNITYSDK_OFFSET(0x18BD69D0)
#define RPG_GAMECORE_PASSIVEUNITEFFECTTYPEMATCHFACTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD6B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PassiveUnitEffectTypeMatchFactorConfig_TypeDefinitionIndex = 17020;

	class PassiveUnitEffectTypeMatchFactorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RogueMagicEffectType PassiveUnitEffectType; // 0x10
		::System::Single PassiveUnitEffectTypeMatchFactor; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSIVEUNITEFFECTTYPEMATCHFACTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1E8B20D52FC6308(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSIVEUNITEFFECTTYPEMATCHFACTORCONFIG_METHOD_2_D1E8B20D52FC6308_OFFSET))(a1, a2);
		}
	};
}
