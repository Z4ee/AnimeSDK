#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_METHOD_3_031AF59019FED170_OFFSET UNITYSDK_OFFSET(0x1D3FBE10)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_METHOD_3_F7D73376AD3D4774_OFFSET UNITYSDK_OFFSET(0x1D3FBDC0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FBE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueFormulaRandomListConfig_TypeDefinitionIndex = 17495;

	class RogueModifierReplaceContentRogueFormulaRandomListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7D73376AD3D4774(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaRandomListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaRandomListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_METHOD_3_F7D73376AD3D4774_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_031AF59019FED170(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaRandomListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_METHOD_3_031AF59019FED170_OFFSET))(a1, a2);
		}
	};
}
