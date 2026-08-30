#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xDEAEC70)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_COSMICFRAGMENTAREAID_OFFSET UNITYSDK_OFFSET(0xDEAEC10)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_COSMICFRAGMENTMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xDEAEC30)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_COSMICFRAGMENTMIRACLEID_OFFSET UNITYSDK_OFFSET(0xDEAEC50)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESCBOSS_OFFSET UNITYSDK_OFFSET(0xDEAEBF0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESCCOMBAT_OFFSET UNITYSDK_OFFSET(0xDEAEBB0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESCELITE_OFFSET UNITYSDK_OFFSET(0xDEAEBD0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESCRESPITE_OFFSET UNITYSDK_OFFSET(0xDEAEB90)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESC_OFFSET UNITYSDK_OFFSET(0xDEAEB70)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMICONPATH_OFFSET UNITYSDK_OFFSET(0xDEAEB30)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMTITLE_OFFSET UNITYSDK_OFFSET(0xDEAEB50)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_OVERBONUSDISPLAYITEMIDS_OFFSET UNITYSDK_OFFSET(0xDEAEB10)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_OVERBONUSPOINT_OFFSET UNITYSDK_OFFSET(0xDEAEAB0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_OVERBONUSREWARDID_OFFSET UNITYSDK_OFFSET(0xDEAEAF0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_OVERBONUSREWARDLIMIT_OFFSET UNITYSDK_OFFSET(0xDEAEAD0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_UNLOCKMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xDEAEC90)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_INIT_OFFSET UNITYSDK_OFFSET(0xDEAE250)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xDEAEC80)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_COSMICFRAGMENTAREAID_OFFSET UNITYSDK_OFFSET(0xDEAEC20)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_COSMICFRAGMENTMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xDEAEC40)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_COSMICFRAGMENTMIRACLEID_OFFSET UNITYSDK_OFFSET(0xDEAEC60)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESCBOSS_OFFSET UNITYSDK_OFFSET(0xDEAEC00)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESCCOMBAT_OFFSET UNITYSDK_OFFSET(0xDEAEBC0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESCELITE_OFFSET UNITYSDK_OFFSET(0xDEAEBE0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESCRESPITE_OFFSET UNITYSDK_OFFSET(0xDEAEBA0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESC_OFFSET UNITYSDK_OFFSET(0xDEAEB80)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMICONPATH_OFFSET UNITYSDK_OFFSET(0xDEAEB40)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMTITLE_OFFSET UNITYSDK_OFFSET(0xDEAEB60)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_OVERBONUSDISPLAYITEMIDS_OFFSET UNITYSDK_OFFSET(0xDEAEB20)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_OVERBONUSPOINT_OFFSET UNITYSDK_OFFSET(0xDEAEAC0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_OVERBONUSREWARDID_OFFSET UNITYSDK_OFFSET(0xDEAEB00)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_OVERBONUSREWARDLIMIT_OFFSET UNITYSDK_OFFSET(0xDEAEAE0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_UNLOCKMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xDEAECA0)
#define RPG_CLIENT_ROGUEENDLESSCONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xDEAECB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessConstValue_TypeDefinitionIndex = 67446;

	class RogueEndlessConstValue : public ::System::Object
	{
	public:
		::System::String* _MapRoomIconPath_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _OverBonusDisplayItemIDs_k__BackingField; // 0x18
		::RPG::Client::TextID _MapRoomDescCombat_k__BackingField; // 0x20
		::RPG::Client::TextID _MapRoomDescRespite_k__BackingField; // 0x30
		::RPG::Client::TextID _MapRoomDescBoss_k__BackingField; // 0x40
		::RPG::Client::TextID _MapRoomDescElite_k__BackingField; // 0x50
		::RPG::Client::TextID _MapRoomDesc_k__BackingField; // 0x60
		::RPG::Client::TextID _MapRoomTitle_k__BackingField; // 0x70
		::System::UInt32 _CosmicFragmentAreaID_k__BackingField; // 0x80
		::System::UInt32 _OverBonusPoint_k__BackingField; // 0x84
		::System::UInt32 _CosmicFragmentMazeBuff_k__BackingField; // 0x88
		::System::UInt32 _OverBonusRewardID_k__BackingField; // 0x8C
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x90
		::System::UInt32 _UnlockMainMissionID_k__BackingField; // 0x94
		::System::UInt32 _OverBonusRewardLimit_k__BackingField; // 0x98
		::System::UInt32 _CosmicFragmentMiracleID_k__BackingField; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_INIT_OFFSET))(this);
		}

		::System::UInt32 get_OverBonusPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_OVERBONUSPOINT_OFFSET))(this);
		}

		::System::Void set_OverBonusPoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_OVERBONUSPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OverBonusRewardLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_OVERBONUSREWARDLIMIT_OFFSET))(this);
		}

		::System::Void set_OverBonusRewardLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_OVERBONUSREWARDLIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OverBonusRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_OVERBONUSREWARDID_OFFSET))(this);
		}

		::System::Void set_OverBonusRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_OVERBONUSREWARDID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_OverBonusDisplayItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_OVERBONUSDISPLAYITEMIDS_OFFSET))(this);
		}

		::System::Void set_OverBonusDisplayItemIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_OVERBONUSDISPLAYITEMIDS_OFFSET))(this, a1);
		}

		::System::String* get_MapRoomIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMICONPATH_OFFSET))(this);
		}

		::System::Void set_MapRoomIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MapRoomTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMTITLE_OFFSET))(this);
		}

		::System::Void set_MapRoomTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MapRoomDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESC_OFFSET))(this);
		}

		::System::Void set_MapRoomDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MapRoomDescRespite()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESCRESPITE_OFFSET))(this);
		}

		::System::Void set_MapRoomDescRespite(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESCRESPITE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MapRoomDescCombat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESCCOMBAT_OFFSET))(this);
		}

		::System::Void set_MapRoomDescCombat(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESCCOMBAT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MapRoomDescElite()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESCELITE_OFFSET))(this);
		}

		::System::Void set_MapRoomDescElite(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESCELITE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MapRoomDescBoss()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_MAPROOMDESCBOSS_OFFSET))(this);
		}

		::System::Void set_MapRoomDescBoss(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_MAPROOMDESCBOSS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CosmicFragmentAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_COSMICFRAGMENTAREAID_OFFSET))(this);
		}

		::System::Void set_CosmicFragmentAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_COSMICFRAGMENTAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CosmicFragmentMazeBuff()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_COSMICFRAGMENTMAZEBUFF_OFFSET))(this);
		}

		::System::Void set_CosmicFragmentMazeBuff(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_COSMICFRAGMENTMAZEBUFF_OFFSET))(this, a1);
		}

		::System::UInt32 get_CosmicFragmentMiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_COSMICFRAGMENTMIRACLEID_OFFSET))(this);
		}

		::System::Void set_CosmicFragmentMiracleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_COSMICFRAGMENTMIRACLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Void set_ActivityModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_ACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_GET_UNLOCKMAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_UnlockMainMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSCONSTVALUE_SET_UNLOCKMAINMISSIONID_OFFSET))(this, a1);
		}
	};
}
