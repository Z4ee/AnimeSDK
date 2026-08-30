#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_METHOD_3_97DF7A8C33D911CB_OFFSET UNITYSDK_OFFSET(0x1E33D210)
#define RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_METHOD_3_9ECEB27FAE425EFB_OFFSET UNITYSDK_OFFSET(0x1E33D270)
#define RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33D260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSummonedChimeraSelectorConfig_TypeDefinitionIndex = 15737;

	class ChimeraDuelSummonedChimeraSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_97DF7A8C33D911CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSummonedChimeraSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSummonedChimeraSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_METHOD_3_97DF7A8C33D911CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9ECEB27FAE425EFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSummonedChimeraSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSummonedChimeraSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONEDCHIMERASELECTORCONFIG_METHOD_3_9ECEB27FAE425EFB_OFFSET))(a1, a2);
		}
	};
}
