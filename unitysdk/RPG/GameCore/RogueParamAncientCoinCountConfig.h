#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMANCIENTCOINCOUNTCONFIG_METHOD_6_6A9F40ADC8EF3E01_OFFSET UNITYSDK_OFFSET(0x1D40CB40)
#define RPG_GAMECORE_ROGUEPARAMANCIENTCOINCOUNTCONFIG_METHOD_6_B577B7F7C9DFBB65_OFFSET UNITYSDK_OFFSET(0x1D40CB90)
#define RPG_GAMECORE_ROGUEPARAMANCIENTCOINCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40CB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamAncientCoinCountConfig_TypeDefinitionIndex = 19598;

	class RogueParamAncientCoinCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMANCIENTCOINCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6A9F40ADC8EF3E01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamAncientCoinCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamAncientCoinCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMANCIENTCOINCOUNTCONFIG_METHOD_6_6A9F40ADC8EF3E01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B577B7F7C9DFBB65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamAncientCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamAncientCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMANCIENTCOINCOUNTCONFIG_METHOD_6_B577B7F7C9DFBB65_OFFSET))(a1, a2);
		}
	};
}
