#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_INITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC870440)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_INITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8704E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BeneficialBuffViewData_InitData_TypeDefinitionIndex = 71188;

	class BeneficialBuffViewData_InitData : public ::System::Object
	{
	public:
		::RPG::GameCore::ElationCharacterUIConfig* ElationUIConfig; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Modifiers; // 0x18
		::RPG::Client::BattleUITeamBlockData* BlockData; // 0x20
		::RPG::GameCore::TurnBasedAbilityComponent* AbilityComponent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_INITDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BeneficialBuffViewData_InitData* Create(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::ElationCharacterUIConfig* a3, ::RPG::Client::BattleUITeamBlockData* a4)
		{
			return ((::RPG::Client::BeneficialBuffViewData_InitData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*, ::RPG::Client::BattleUITeamBlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_INITDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
