#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_METHOD_3_D7B9DED493C4F5FE_OFFSET UNITYSDK_OFFSET(0x1D3F9800)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_METHOD_3_DEC1B4BF320B89BA_OFFSET UNITYSDK_OFFSET(0x1D3F9850)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyAnyGainCoinConfig_TypeDefinitionIndex = 17752;

	class RogueModifierModifyAnyGainCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7B9DED493C4F5FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyAnyGainCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyAnyGainCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_METHOD_3_D7B9DED493C4F5FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DEC1B4BF320B89BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyAnyGainCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyAnyGainCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYANYGAINCOINCONFIG_METHOD_3_DEC1B4BF320B89BA_OFFSET))(a1, a2);
		}
	};
}
