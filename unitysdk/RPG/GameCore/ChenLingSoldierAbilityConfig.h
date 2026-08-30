#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingAbilityConfig; }

#define RPG_GAMECORE_CHENLINGSOLDIERABILITYCONFIG_METHOD_2_489106A034B4E22C_OFFSET UNITYSDK_OFFSET(0x1E01AA60)
#define RPG_GAMECORE_CHENLINGSOLDIERABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E01AB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierAbilityConfig_TypeDefinitionIndex = 15530;

	class ChenLingSoldierAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingAbilityConfig* Ability; // 0x10
		::RPG::GameCore::ChenLingAbilityConfig* PromotionAbility; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_489106A034B4E22C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingSoldierAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingSoldierAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERABILITYCONFIG_METHOD_2_489106A034B4E22C_OFFSET))(a1, a2);
		}
	};
}
