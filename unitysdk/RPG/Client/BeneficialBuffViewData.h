#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC947C20)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_ELATIONBUFFGROUP_OFFSET UNITYSDK_OFFSET(0xC948080)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_NORMALBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC948060)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_ELATIONBUFFGROUP_OFFSET UNITYSDK_OFFSET(0xC948090)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_NORMALBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC948070)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC947CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BeneficialBuffViewData_TypeDefinitionIndex = 71149;

	class BeneficialBuffViewData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* _NormalBuffList_k__BackingField; // 0x10
		::RPG::Client::ElationBattleBuffGroupViewData* _ElationBuffGroup_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::ElationCharacterUIConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::BeneficialBuffViewData* Create(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::ElationCharacterUIConfig* a3)
		{
			return ((::RPG::Client::BeneficialBuffViewData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* get_NormalBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_NORMALBUFFLIST_OFFSET))(this);
		}

		::System::Void set_NormalBuffList(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_NORMALBUFFLIST_OFFSET))(this, a1);
		}

		::RPG::Client::ElationBattleBuffGroupViewData* get_ElationBuffGroup()
		{
			return ((::RPG::Client::ElationBattleBuffGroupViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_ELATIONBUFFGROUP_OFFSET))(this);
		}

		::System::Void set_ElationBuffGroup(::RPG::Client::ElationBattleBuffGroupViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_ELATIONBUFFGROUP_OFFSET))(this, a1);
		}
	};
}
