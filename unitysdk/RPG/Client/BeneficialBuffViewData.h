#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9E8A2C0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_ELATIONBUFFGROUP_OFFSET UNITYSDK_OFFSET(0x9E8A5F0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_NORMALBUFFLIST_OFFSET UNITYSDK_OFFSET(0x9E8A5D0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_ELATIONBUFFGROUP_OFFSET UNITYSDK_OFFSET(0x9E8A600)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_NORMALBUFFLIST_OFFSET UNITYSDK_OFFSET(0x9E8A5E0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E8A360)

namespace RPG::Client
{
	inline static constexpr unsigned int BeneficialBuffViewData_TypeDefinitionIndex = 65605;

	class BeneficialBuffViewData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* _NormalBuffList_k__BackingField; // 0x10
		::RPG::Client::ElationBattleBuffGroupViewData* _ElationBuffGroup_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* modifiers, ::RPG::GameCore::TurnBasedAbilityComponent* ability, ::RPG::GameCore::ElationCharacterUIConfig* elationUIConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA__CTOR_OFFSET))(this, modifiers, ability, elationUIConfig);
		}

		static ::RPG::Client::BeneficialBuffViewData* Create(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* modifiers, ::RPG::GameCore::TurnBasedAbilityComponent* ability, ::RPG::GameCore::ElationCharacterUIConfig* elationUIConfig)
		{
			return ((::RPG::Client::BeneficialBuffViewData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CREATE_OFFSET))(modifiers, ability, elationUIConfig);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* get_NormalBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_NORMALBUFFLIST_OFFSET))(this);
		}

		::System::Void set_NormalBuffList(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_NORMALBUFFLIST_OFFSET))(this, value);
		}

		::RPG::Client::ElationBattleBuffGroupViewData* get_ElationBuffGroup()
		{
			return ((::RPG::Client::ElationBattleBuffGroupViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_ELATIONBUFFGROUP_OFFSET))(this);
		}

		::System::Void set_ElationBuffGroup(::RPG::Client::ElationBattleBuffGroupViewData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_ELATIONBUFFGROUP_OFFSET))(this, value);
		}
	};
}
