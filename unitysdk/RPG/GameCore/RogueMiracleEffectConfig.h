#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMIRACLEEFFECTCONFIG_METHOD_2_D0A74B218E6CE8D6_OFFSET UNITYSDK_OFFSET(0x19B4C870)
#define RPG_GAMECORE_ROGUEMIRACLEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4C8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleEffectConfig_TypeDefinitionIndex = 17039;

	class RogueMiracleEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D0A74B218E6CE8D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMiracleEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMiracleEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEFFECTCONFIG_METHOD_2_D0A74B218E6CE8D6_OFFSET))(a1, a2);
		}
	};
}
