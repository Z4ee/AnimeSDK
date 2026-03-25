#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_METHOD_3_2338F6773D59ECC9_OFFSET UNITYSDK_OFFSET(0x171C7620)
#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_METHOD_3_500B8D76AD4673F0_OFFSET UNITYSDK_OFFSET(0x171C88B0)
#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C75D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierDisableMasterRoundRandomAffixConfig_TypeDefinitionIndex = 17705;

	class FateModifierDisableMasterRoundRandomAffixConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_500B8D76AD4673F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierDisableMasterRoundRandomAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierDisableMasterRoundRandomAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_METHOD_3_500B8D76AD4673F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2338F6773D59ECC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierDisableMasterRoundRandomAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierDisableMasterRoundRandomAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERROUNDRANDOMAFFIXCONFIG_METHOD_3_2338F6773D59ECC9_OFFSET))(a1, a2);
		}
	};
}
