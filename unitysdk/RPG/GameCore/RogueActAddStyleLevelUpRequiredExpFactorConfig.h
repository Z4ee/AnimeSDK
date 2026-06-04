#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_METHOD_6_3936126BB97C2427_OFFSET UNITYSDK_OFFSET(0x19AE1510)
#define RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_METHOD_6_F5EF6469B526B632_OFFSET UNITYSDK_OFFSET(0x19AE1730)
#define RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE1650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddStyleLevelUpRequiredExpFactorConfig_TypeDefinitionIndex = 18745;

	class RogueActAddStyleLevelUpRequiredExpFactorConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3936126BB97C2427(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddStyleLevelUpRequiredExpFactorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddStyleLevelUpRequiredExpFactorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_METHOD_6_3936126BB97C2427_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F5EF6469B526B632(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddStyleLevelUpRequiredExpFactorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddStyleLevelUpRequiredExpFactorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDSTYLELEVELUPREQUIREDEXPFACTORCONFIG_METHOD_6_F5EF6469B526B632_OFFSET))(a1, a2);
		}
	};
}
