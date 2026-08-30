#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_METHOD_3_0092ED4B1372FDC2_OFFSET UNITYSDK_OFFSET(0x1EEFC060)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_METHOD_3_D9B56A97562814A6_OFFSET UNITYSDK_OFFSET(0x1EEFC010)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFC050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaLevelUpOnCardRemoveConfig_TypeDefinitionIndex = 17665;

	class RogueModifierPersonaLevelUpOnCardRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9B56A97562814A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaLevelUpOnCardRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaLevelUpOnCardRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_METHOD_3_D9B56A97562814A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0092ED4B1372FDC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaLevelUpOnCardRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaLevelUpOnCardRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_METHOD_3_0092ED4B1372FDC2_OFFSET))(a1, a2);
		}
	};
}
