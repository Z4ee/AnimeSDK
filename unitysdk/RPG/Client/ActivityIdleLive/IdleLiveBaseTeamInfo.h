#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/TeamEditAllTabUiData.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_3_1C169A0F2ACF26E7;
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { template <typename T> class IdleLiveModifierBuilder_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVELRAWFORRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1B916510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVELRAW_OFFSET UNITYSDK_OFFSET(0x1B911CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVEL_OFFSET UNITYSDK_OFFSET(0x1B911C70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKHASAVATARCANDEPLOY_OFFSET UNITYSDK_OFFSET(0x1B913080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKISALLSLOTSFULL_OFFSET UNITYSDK_OFFSET(0x1B912A70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKISFULLBYPOSTYPE_OFFSET UNITYSDK_OFFSET(0x1B9177C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CONFIRMRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B918870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETACTIVECAPTAINTAGCOUNT_OFFSET UNITYSDK_OFFSET(0x1B919080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALIVEBATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1B917E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLAVATARS_OFFSET UNITYSDK_OFFSET(0x1B917600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLTABUIDATA_OFFSET UNITYSDK_OFFSET(0x1B917320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLTEAMSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x1B9091D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETAVATARDATABYID_OFFSET UNITYSDK_OFFSET(0x1B917070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETAVATARSBYPOSTYPE_OFFSET UNITYSDK_OFFSET(0x1B9037C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETCAPTAINSLOTDATA_OFFSET UNITYSDK_OFFSET(0x1B918D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETCAPTAINTAG_OFFSET UNITYSDK_OFFSET(0x1B918F10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETLIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1B917B00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETSLOTDATABYID_OFFSET UNITYSDK_OFFSET(0x1B9118A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GET_SPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1B91B100)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_INITBASE_OFFSET UNITYSDK_OFFSET(0x1B910F00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_MARKALLONSLOTAVATARSEEN_OFFSET UNITYSDK_OFFSET(0x1B912400)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x1B91B060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x1B91B0B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_REGISTERMODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x1B9117F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_REGISTERSPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1B9172C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_SET_SPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1B91B110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_UPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x1B917750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__ADDTEAMAVATAR_1_OFFSET UNITYSDK_OFFSET(0x1B919AC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__ADDTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x1B919770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__BUILDMODIFIERBUILDERS_OFFSET UNITYSDK_OFFSET(0x1B91A6D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CALPOWERLEVELRAWFROMLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B9136B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CHECKTEAMISVALID_OFFSET UNITYSDK_OFFSET(0x1B91A4D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CLEARALLTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x1B91AC90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91B120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__INITTEAMSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x1B911450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__REFRESHTEAMSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x1B91A7E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__UPDATETEAMPOS_OFFSET UNITYSDK_OFFSET(0x1B919D00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo_TypeDefinitionIndex = 74791;

	class IdleLiveBaseTeamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* _ModifierBuilders; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* _AvatarInfo; // 0x18
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* _SpEquipSlotInfo_k__BackingField; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* _SlotInfo; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>* _AllTeamAvatarDatas; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>* _AllTeamSlotDatas; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void InitBase(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_INITBASE_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterModifierBuilder(::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_REGISTERMODIFIERBUILDER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* GetSlotDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETSLOTDATABYID_OFFSET))(this, a1);
		}

		::System::UInt64 CalPowerLevel()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVEL_OFFSET))(this);
		}

		::System::Void MarkAllOnSlotAvatarSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_MARKALLONSLOTAVATARSEEN_OFFSET))(this);
		}

		::System::Boolean CheckIsAllSlotsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKISALLSLOTSFULL_OFFSET))(this);
		}

		::System::Boolean CheckHasAvatarCanDeploy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKHASAVATARCANDEPLOY_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalPowerLevelRaw()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVELRAW_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalPowerLevelRawForRecommend(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVELRAWFORRECOMMEND_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _CalPowerLevelRawFromLayout(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CALPOWERLEVELRAWFROMLAYOUT_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterSpEquipSlotInfo(::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_REGISTERSPEQUIPSLOTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* GetAvatarDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETAVATARDATABYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* GetAllTeamSlotDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLTEAMSLOTDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>* GetAvatarsByPosType(::RPG::GameCore::ILBattleCharacterLocation a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>*(*)(::PVOID, ::RPG::GameCore::ILBattleCharacterLocation, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETAVATARSBYPOSTYPE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::TeamEditAllTabUiData>* GetAllTabUiData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::TeamEditAllTabUiData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLTABUIDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>* GetAllAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLAVATARS_OFFSET))(this);
		}

		::System::Void UpgradeSlot(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_UPGRADESLOT_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckIsFullByPosType(::RPG::GameCore::ILBattleCharacterLocation a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKISFULLBYPOSTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 GetLimitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETLIMITLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAliveBattleAvatarIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALIVEBATTLEAVATARIDLIST_OFFSET))(this);
		}

		::System::Void ConfirmRecommendData(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CONFIRMRECOMMENDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* GetCaptainSlotData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETCAPTAINSLOTDATA_OFFSET))(this);
		}

		::RPG::GameCore::ILBattleAvatarTag GetCaptainTag()
		{
			return ((::RPG::GameCore::ILBattleAvatarTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETCAPTAINTAG_OFFSET))(this);
		}

		::System::UInt32 GetActiveCaptainTagCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETACTIVECAPTAINTAGCOUNT_OFFSET))(this);
		}

		::System::Void _AddTeamAvatar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__ADDTEAMAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Void _AddTeamAvatar_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__ADDTEAMAVATAR_1_OFFSET))(this, a1);
		}

		::System::Void _UpdateTeamPos(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__UPDATETEAMPOS_OFFSET))(this, a1);
		}

		::System::Boolean _CheckTeamIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CHECKTEAMISVALID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* _BuildModifierBuilders(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__BUILDMODIFIERBUILDERS_OFFSET))(this, a1);
		}

		::System::Void _InitTeamSlotDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__INITTEAMSLOTDATAS_OFFSET))(this);
		}

		::System::Void _RefreshTeamSlotDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__REFRESHTEAMSLOTDATAS_OFFSET))(this);
		}

		::System::Void _ClearAllTeamAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CLEARALLTEAMAVATAR_OFFSET))(this);
		}

		::System::Void OnAvatarInfoProtocolReceived(::System::Object* a1, ::Class_3_1C169A0F2ACF26E7* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}

		::System::Void OnSlotInfoProtocolReceived(::System::Object* a1, ::Class_3_1C169A0F2ACF26E7* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* get_SpEquipSlotInfo()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GET_SPEQUIPSLOTINFO_OFFSET))(this);
		}

		::System::Void set_SpEquipSlotInfo(::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_SET_SPEQUIPSLOTINFO_OFFSET))(this, a1);
		}
	};
}
