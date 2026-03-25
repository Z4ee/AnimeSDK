#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1;
class Class_1_4CF8088A158DCE25_17;
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelGameSessionItem; }
namespace RPG::Client { class IChimeraDuelSkillData; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_CANBEUPGRADEDBY_OFFSET UNITYSDK_OFFSET(0x939F480)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x939EEE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x939EBC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_CREATE_OFFSET UNITYSDK_OFFSET(0x939EA50)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETCURRENTATTACK_OFFSET UNITYSDK_OFFSET(0x939F690)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETCURRENTEXPOFCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x939F3F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETCURRENTHEALTH_OFFSET UNITYSDK_OFFSET(0x939F900)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x939F070)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETMAXEXPOFCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x939F270)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETMAXEXPOFPREVIOUSLEVEL_OFFSET UNITYSDK_OFFSET(0x939F330)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETSELLPRICE_OFFSET UNITYSDK_OFFSET(0x939FAC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_CHIMERADATA_OFFSET UNITYSDK_OFFSET(0x939E890)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x939E870)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x939EA30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_GAINEDEXP_OFFSET UNITYSDK_OFFSET(0x939E940)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x939E860)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x939F1E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_SET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x939E880)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_SET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x939EA40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_SYNC_OFFSET UNITYSDK_OFFSET(0x939FE60)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_TRYGETBATTLESKILLDATA_OFFSET UNITYSDK_OFFSET(0x939FDA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_TRYGETCOREFLAMECOUNT_OFFSET UNITYSDK_OFFSET(0x939FB50)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_TRYGETSHOPSKILLDATA_OFFSET UNITYSDK_OFFSET(0x939FCE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_TRYGETSKILLDATAFORDISPLAY_OFFSET UNITYSDK_OFFSET(0x939FBF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_WOULDLEVELUPWITHEXP_OFFSET UNITYSDK_OFFSET(0x939F570)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x939EFE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x939EB50)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA__GETCOREFLAMECOUNT_OFFSET UNITYSDK_OFFSET(0x939F030)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA__GETGAINEDEXPFORDISPLAY_OFFSET UNITYSDK_OFFSET(0x939E950)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionChimera_TypeDefinitionIndex = 51387;

	class ChimeraDuelGameSessionChimera : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionItem* _Equipment_k__BackingField; // 0x10
		::System::Int32 _GainedExp; // 0x18
		::System::UInt32 _SpecialParam; // 0x1C
		::System::UInt32 _ChimeraID_k__BackingField; // 0x20
		::System::UInt32 _UniqueID_k__BackingField; // 0x24
		::System::Int32 _DeltaAttack; // 0x28
		::System::Int32 _DeltaHealth; // 0x2C

		::System::Void _ctor(::System::UInt32 uniqueID, ::System::UInt32 chimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA__CTOR_OFFSET))(this, uniqueID, chimeraID);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionChimera* source, ::System::Nullable_1<::System::UInt32> newChimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA__CTOR_1_OFFSET))(this, source, newChimeraID);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_CHIMERAID_OFFSET))(this);
		}

		::System::Void set_ChimeraID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_SET_CHIMERAID_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelChimeraData* get_ChimeraData()
		{
			return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_CHIMERADATA_OFFSET))(this);
		}

		::System::Int32 get_GainedExp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_GAINEDEXP_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionItem* get_Equipment()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GET_EQUIPMENT_OFFSET))(this);
		}

		::System::Void set_Equipment(::RPG::Client::ChimeraDuelGameSessionItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_SET_EQUIPMENT_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelGameSessionChimera* Create(::Class_1_02098A44CBBFEEE1* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_CREATE_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSessionChimera* Create_1(::Class_1_4CF8088A158DCE25_17* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::Class_1_4CF8088A158DCE25_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_CREATE_1_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSessionChimera* CreateFake(::System::UInt32 uniqueID, ::System::UInt32 chimeraID, ::System::Int32 gainedExp, ::System::Int32 deltaAttack, ::System::Int32 deltaHealth, ::System::UInt32 equipmentItemID, ::System::UInt32 specialParam)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_CREATEFAKE_OFFSET))(uniqueID, chimeraID, gainedExp, deltaAttack, deltaHealth, equipmentItemID, specialParam);
		}

		::System::Int32 _GetGainedExpForDisplay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA__GETGAINEDEXPFORDISPLAY_OFFSET))(this);
		}

		::System::Int32 GetCurrentLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETCURRENTLEVEL_OFFSET))(this);
		}

		::System::Boolean IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_ISMAXLEVEL_OFFSET))(this);
		}

		::System::Int32 GetMaxExpOfCurrentLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETMAXEXPOFCURRENTLEVEL_OFFSET))(this);
		}

		::System::Int32 GetMaxExpOfPreviousLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETMAXEXPOFPREVIOUSLEVEL_OFFSET))(this);
		}

		::System::Int32 GetCurrentExpOfCurrentLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETCURRENTEXPOFCURRENTLEVEL_OFFSET))(this);
		}

		::System::Boolean CanBeUpgradedBy(::RPG::Client::ChimeraDuelGameSessionChimera* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_CANBEUPGRADEDBY_OFFSET))(this, other);
		}

		::System::Boolean WouldLevelUpWithExp(::System::Int32 exp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_WOULDLEVELUPWITHEXP_OFFSET))(this, exp);
		}

		::System::Int32 GetCurrentAttack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETCURRENTATTACK_OFFSET))(this);
		}

		::System::Int32 GetCurrentHealth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETCURRENTHEALTH_OFFSET))(this);
		}

		::System::Int32 GetSellPrice()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_GETSELLPRICE_OFFSET))(this);
		}

		::System::Int32 _GetCoreflameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA__GETCOREFLAMECOUNT_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> TryGetCoreflameCount()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_TRYGETCOREFLAMECOUNT_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetSkillDataForDisplay()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_TRYGETSKILLDATAFORDISPLAY_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetShopSkillData()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_TRYGETSHOPSKILLDATA_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetBattleSkillData()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_TRYGETBATTLESKILLDATA_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_02098A44CBBFEEE1* chimeraUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONCHIMERA_SYNC_OFFSET))(this, chimeraUpdate);
		}
	};
}
