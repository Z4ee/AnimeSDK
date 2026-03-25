#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherDivideGymDataItem; }
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDEGYMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90734F0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GETGYMDATAITEMS_OFFSET UNITYSDK_OFFSET(0x9072D20)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GETGYMDATAITEM_OFFSET UNITYSDK_OFFSET(0x9072D60)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GETRELATEDGYMDATAITEMBYMISSION_OFFSET UNITYSDK_OFFSET(0x9072DF0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GET_CURGYMDATAITEM_OFFSET UNITYSDK_OFFSET(0x9073A90)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GET_CURGYMID_OFFSET UNITYSDK_OFFSET(0x9073A70)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GET__GETCHAMPIONKEY_OFFSET UNITYSDK_OFFSET(0x9073300)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_INITUNLOCKBADGE_OFFSET UNITYSDK_OFFSET(0x9073590)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9072B30)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEALREADYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9073790)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEINITED_OFFSET UNITYSDK_OFFSET(0x9073740)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEUNLOCK_OFFSET UNITYSDK_OFFSET(0x9073800)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ONENTERGYM_OFFSET UNITYSDK_OFFSET(0x90733E0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ONLEAVEGYM_OFFSET UNITYSDK_OFFSET(0x90734A0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_RECORDGETCHAMPIONEFFECTPLAYED_OFFSET UNITYSDK_OFFSET(0x9073310)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_SET_CURGYMID_OFFSET UNITYSDK_OFFSET(0x9073A80)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_SHOULDPLAYGETCHAMPIONEFFECT_OFFSET UNITYSDK_OFFSET(0x9073080)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9073B50)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA__INITALLGYMS_OFFSET UNITYSDK_OFFSET(0x9072B80)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA__ISALLBADGEGOT_OFFSET UNITYSDK_OFFSET(0x9073A10)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideGymData_TypeDefinitionIndex = 50526;

	class AetherDivideGymData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AetherDivideGymDataItem*>* _GymDataItems; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _OwnedBadges; // 0x18
		::System::UInt32 _CurGymID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AetherDivideGymDataItem*>* GetGymDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AetherDivideGymDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GETGYMDATAITEMS_OFFSET))(this);
		}

		::RPG::Client::AetherDivideGymDataItem* GetGymDataItem(::System::UInt32 gymID)
		{
			return ((::RPG::Client::AetherDivideGymDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GETGYMDATAITEM_OFFSET))(this, gymID);
		}

		::RPG::Client::AetherDivideGymDataItem* GetRelatedGymDataItemByMission(::RPG::Client::MainMissionData* data)
		{
			return ((::RPG::Client::AetherDivideGymDataItem*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GETRELATEDGYMDATAITEMBYMISSION_OFFSET))(this, data);
		}

		::System::Boolean ShouldPlayGetChampionEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_SHOULDPLAYGETCHAMPIONEFFECT_OFFSET))(this);
		}

		::System::Void RecordGetChampionEffectPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_RECORDGETCHAMPIONEFFECTPLAYED_OFFSET))(this);
		}

		::System::Void OnEnterGym(::System::UInt32 entranceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ONENTERGYM_OFFSET))(this, entranceID);
		}

		::System::Void OnLeaveGym()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ONLEAVEGYM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void InitUnlockBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_INITUNLOCKBADGE_OFFSET))(this);
		}

		::System::Boolean IsBadgeInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEINITED_OFFSET))(this);
		}

		::System::Boolean IsBadgeAlreadyUnlocked(::RPG::Client::AetherDivideGymDataItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEALREADYUNLOCKED_OFFSET))(this, item);
		}

		::System::Boolean IsBadgeUnlock(::RPG::Client::AetherDivideGymDataItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEUNLOCK_OFFSET))(this, item);
		}

		::System::Void _InitAllGyms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA__INITALLGYMS_OFFSET))(this);
		}

		::System::Boolean _IsAllBadgeGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA__ISALLBADGEGOT_OFFSET))(this);
		}

		::System::UInt32 get_CurGymID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GET_CURGYMID_OFFSET))(this);
		}

		::System::Void set_CurGymID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_SET_CURGYMID_OFFSET))(this, value);
		}

		::RPG::Client::AetherDivideGymDataItem* get_CurGymDataItem()
		{
			return ((::RPG::Client::AetherDivideGymDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GET_CURGYMDATAITEM_OFFSET))(this);
		}

		::System::UInt32 get__GetChampionKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GET__GETCHAMPIONKEY_OFFSET))(this);
		}
	};
}
