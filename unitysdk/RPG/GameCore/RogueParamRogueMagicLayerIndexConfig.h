#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_6_626C9D6DFA6FF983_OFFSET UNITYSDK_OFFSET(0x1D176BA0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_6_A2B635B26ADFD07F_OFFSET UNITYSDK_OFFSET(0x1D176B50)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D176B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicLayerIndexConfig_TypeDefinitionIndex = 19070;

	class RogueParamRogueMagicLayerIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A2B635B26ADFD07F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_6_A2B635B26ADFD07F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_626C9D6DFA6FF983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_6_626C9D6DFA6FF983_OFFSET))(a1, a2);
		}
	};
}
