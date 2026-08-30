#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_METHOD_3_896A6476918D7016_OFFSET UNITYSDK_OFFSET(0x1E535780)
#define RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_METHOD_3_F4A14B24E60AB9BA_OFFSET UNITYSDK_OFFSET(0x1E535730)
#define RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E535770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig_TypeDefinitionIndex = 17564;

	class RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4A14B24E60AB9BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_METHOD_3_F4A14B24E60AB9BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_896A6476918D7016(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_METHOD_3_896A6476918D7016_OFFSET))(a1, a2);
		}
	};
}
