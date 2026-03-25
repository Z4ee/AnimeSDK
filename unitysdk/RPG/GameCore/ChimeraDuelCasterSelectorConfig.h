#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCASTERSELECTORCONFIG_METHOD_3_B02329E566822932_OFFSET UNITYSDK_OFFSET(0x17096D20)
#define RPG_GAMECORE_CHIMERADUELCASTERSELECTORCONFIG_METHOD_3_E6E102FE41F5F8B3_OFFSET UNITYSDK_OFFSET(0x17096C80)
#define RPG_GAMECORE_CHIMERADUELCASTERSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17096D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCasterSelectorConfig_TypeDefinitionIndex = 14598;

	class ChimeraDuelCasterSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6E102FE41F5F8B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCasterSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCasterSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERSELECTORCONFIG_METHOD_3_E6E102FE41F5F8B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B02329E566822932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCasterSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCasterSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERSELECTORCONFIG_METHOD_3_B02329E566822932_OFFSET))(a1, a2);
		}
	};
}
