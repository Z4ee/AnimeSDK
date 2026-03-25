#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELDEFENDERSELECTORCONFIG_METHOD_3_48EE56708ED6CBB7_OFFSET UNITYSDK_OFFSET(0x17099380)
#define RPG_GAMECORE_CHIMERADUELDEFENDERSELECTORCONFIG_METHOD_3_CD4E47E01C921EC6_OFFSET UNITYSDK_OFFSET(0x170992E0)
#define RPG_GAMECORE_CHIMERADUELDEFENDERSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17099370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelDefenderSelectorConfig_TypeDefinitionIndex = 14600;

	class ChimeraDuelDefenderSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDEFENDERSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD4E47E01C921EC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelDefenderSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelDefenderSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDEFENDERSELECTORCONFIG_METHOD_3_CD4E47E01C921EC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48EE56708ED6CBB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelDefenderSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelDefenderSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDEFENDERSELECTORCONFIG_METHOD_3_48EE56708ED6CBB7_OFFSET))(a1, a2);
		}
	};
}
