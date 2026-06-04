#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUELAYEREFFECTLISTCONFIG_METHOD_2_0AB62ECF33FB9C8C_OFFSET UNITYSDK_OFFSET(0x19B41F30)
#define RPG_GAMECORE_ROGUELAYEREFFECTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B41F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueLayerEffectListConfig_TypeDefinitionIndex = 17033;

	class RogueLayerEffectListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUELAYEREFFECTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0AB62ECF33FB9C8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueLayerEffectListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueLayerEffectListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUELAYEREFFECTLISTCONFIG_METHOD_2_0AB62ECF33FB9C8C_OFFSET))(a1, a2);
		}
	};
}
