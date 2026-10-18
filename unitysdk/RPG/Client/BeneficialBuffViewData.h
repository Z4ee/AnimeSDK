#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1190;
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::Client { class BeneficialBuffViewData_InitData; }
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC86FD00)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETALLBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xC870190)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETHASNORMALBUFF_OFFSET UNITYSDK_OFFSET(0xC870370)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETISEMPTY_OFFSET UNITYSDK_OFFSET(0xC870140)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_BLOCKDATA_OFFSET UNITYSDK_OFFSET(0xC870420)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_ELATIONBUFFGROUP_OFFSET UNITYSDK_OFFSET(0xC870400)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_NORMALBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC8703E0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_BLOCKDATA_OFFSET UNITYSDK_OFFSET(0xC870430)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_ELATIONBUFFGROUP_OFFSET UNITYSDK_OFFSET(0xC870410)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_NORMALBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC8703F0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC86FDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BeneficialBuffViewData_TypeDefinitionIndex = 71187;

	class BeneficialBuffViewData : public ::System::Object
	{
	public:
		// static const ::System::Int32 SEPERATE_LINE_INDEX = 0x0; // 0x0
		// static const ::System::Int32 ELATION_BUFF_INDEX = 0x1; // 0x0
		// static const ::System::Int32 TEAM_BLOCK_DETAIL_INDEX = 0x2; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* _NormalBuffList_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_1190* _BlockData_k__BackingField; // 0x18
		::RPG::Client::ElationBattleBuffGroupViewData* _ElationBuffGroup_k__BackingField; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::ElationCharacterUIConfig* a3, ::RPG::Client::BattleUITeamBlockData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*, ::RPG::Client::BattleUITeamBlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::BeneficialBuffViewData* Create(::RPG::Client::BeneficialBuffViewData_InitData* a1)
		{
			return ((::RPG::Client::BeneficialBuffViewData*(*)(::RPG::Client::BeneficialBuffViewData_InitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean GetIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETISEMPTY_OFFSET))(this);
		}

		::System::Boolean GetHasNormalBuff(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETHASNORMALBUFF_OFFSET))(this, a1);
		}

		::System::Int32 GetAllBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETALLBUFFCOUNT_OFFSET))(this);
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

		::Class_0_16E4307DCC419505_1190* get_BlockData()
		{
			return ((::Class_0_16E4307DCC419505_1190*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_BLOCKDATA_OFFSET))(this);
		}

		::System::Void set_BlockData(::Class_0_16E4307DCC419505_1190* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1190*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_BLOCKDATA_OFFSET))(this, a1);
		}
	};
}
