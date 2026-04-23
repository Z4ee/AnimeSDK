#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_6_626C9D6DFA6FF983_OFFSET UNITYSDK_OFFSET(0x18D5AC90)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_6_7A3DB2FE4DE49FCD_OFFSET UNITYSDK_OFFSET(0x18D5A9E0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5AB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicLayerIndexConfig_TypeDefinitionIndex = 18824;

	class RogueParamRogueMagicLayerIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7A3DB2FE4DE49FCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_6_7A3DB2FE4DE49FCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_626C9D6DFA6FF983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_6_626C9D6DFA6FF983_OFFSET))(a1, a2);
		}
	};
}
