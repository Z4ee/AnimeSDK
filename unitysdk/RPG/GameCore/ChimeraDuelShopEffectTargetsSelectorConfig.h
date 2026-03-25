#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_METHOD_3_6171872B526F3A43_OFFSET UNITYSDK_OFFSET(0x170A59E0)
#define RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_METHOD_3_C77A666CCB152FC2_OFFSET UNITYSDK_OFFSET(0x170A5940)
#define RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170A59D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelShopEffectTargetsSelectorConfig_TypeDefinitionIndex = 14605;

	class ChimeraDuelShopEffectTargetsSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C77A666CCB152FC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelShopEffectTargetsSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelShopEffectTargetsSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_METHOD_3_C77A666CCB152FC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6171872B526F3A43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelShopEffectTargetsSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelShopEffectTargetsSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPEFFECTTARGETSSELECTORCONFIG_METHOD_3_6171872B526F3A43_OFFSET))(a1, a2);
		}
	};
}
