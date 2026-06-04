#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_METHOD_6_4E73DE4A51FE9691_OFFSET UNITYSDK_OFFSET(0x19BAF4F0)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_METHOD_6_CC044F96787664E7_OFFSET UNITYSDK_OFFSET(0x19BAF240)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BAF3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueAreaDifficultyConfig_TypeDefinitionIndex = 18797;

	class RogueParamRogueAreaDifficultyConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_CC044F96787664E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_METHOD_6_CC044F96787664E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4E73DE4A51FE9691(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_METHOD_6_4E73DE4A51FE9691_OFFSET))(a1, a2);
		}
	};
}
