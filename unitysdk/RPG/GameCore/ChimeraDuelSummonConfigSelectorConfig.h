#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSUMMONCONFIGSELECTORCONFIG_METHOD_3_A8D7F59B92C691CB_OFFSET UNITYSDK_OFFSET(0x18806180)
#define RPG_GAMECORE_CHIMERADUELSUMMONCONFIGSELECTORCONFIG_METHOD_3_C07C7AFC8F43AFDB_OFFSET UNITYSDK_OFFSET(0x18806120)
#define RPG_GAMECORE_CHIMERADUELSUMMONCONFIGSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18806170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSummonConfigSelectorConfig_TypeDefinitionIndex = 15106;

	class ChimeraDuelSummonConfigSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONCONFIGSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C07C7AFC8F43AFDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSummonConfigSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSummonConfigSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONCONFIGSELECTORCONFIG_METHOD_3_C07C7AFC8F43AFDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8D7F59B92C691CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSummonConfigSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSummonConfigSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONCONFIGSELECTORCONFIG_METHOD_3_A8D7F59B92C691CB_OFFSET))(a1, a2);
		}
	};
}
