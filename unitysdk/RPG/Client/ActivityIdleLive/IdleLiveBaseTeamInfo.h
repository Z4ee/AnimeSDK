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

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVELRAWFORRECOMMEND_OFFSET UNITYSDK_OFFSET(0x9B34F30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVELRAW_OFFSET UNITYSDK_OFFSET(0x9B30FE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVEL_OFFSET UNITYSDK_OFFSET(0x9B30F70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKHASAVATARCANDEPLOY_OFFSET UNITYSDK_OFFSET(0x9B320E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKISALLSLOTSFULL_OFFSET UNITYSDK_OFFSET(0x9B31B80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKISFULLBYPOSTYPE_OFFSET UNITYSDK_OFFSET(0x9B36000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CONFIRMRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9B36C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETACTIVECAPTAINTAGCOUNT_OFFSET UNITYSDK_OFFSET(0x9B37320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALIVEBATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x9B36640)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLAVATARS_OFFSET UNITYSDK_OFFSET(0x9B35EE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLTABUIDATA_OFFSET UNITYSDK_OFFSET(0x9B35CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLTEAMSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x9B293A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETAVATARDATABYID_OFFSET UNITYSDK_OFFSET(0x9B35850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETAVATARSBYPOSTYPE_OFFSET UNITYSDK_OFFSET(0x9B240E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETCAPTAINSLOTDATA_OFFSET UNITYSDK_OFFSET(0x9B36FF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETCAPTAINTAG_OFFSET UNITYSDK_OFFSET(0x9B37220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETLIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x9B36310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETSLOTDATABYID_OFFSET UNITYSDK_OFFSET(0x9B30C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GET_SPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x9B392A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_INITBASE_OFFSET UNITYSDK_OFFSET(0x9B306E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_MARKALLONSLOTAVATARSEEN_OFFSET UNITYSDK_OFFSET(0x9B31660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9B39200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9B39250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_REGISTERMODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x9B30BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_REGISTERSPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x9B35C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_SET_SPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x9B392B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_UPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x9B35F90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__ADDTEAMAVATAR_1_OFFSET UNITYSDK_OFFSET(0x9B37CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__ADDTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x9B37970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__BUILDMODIFIERBUILDERS_OFFSET UNITYSDK_OFFSET(0x9B389C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CALPOWERLEVELRAWFROMLAYOUT_OFFSET UNITYSDK_OFFSET(0x9B32660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CHECKTEAMISVALID_OFFSET UNITYSDK_OFFSET(0x9B38790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CLEARALLTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x9B38EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B392C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__INITTEAMSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x9B308E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__REFRESHTEAMSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x9B38AB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__UPDATETEAMPOS_OFFSET UNITYSDK_OFFSET(0x9B37F50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo_TypeDefinitionIndex = 69150;

	class IdleLiveBaseTeamInfo : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* _SpEquipSlotInfo_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* _SlotInfo; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* _AvatarInfo; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>* _AllTeamSlotDatas; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* _ModifierBuilders; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>* _AllTeamAvatarDatas; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void InitBase(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* avatarInfo, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* slotInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_INITBASE_OFFSET))(this, avatarInfo, slotInfo);
		}

		::System::Void RegisterModifierBuilder(::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* builder)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_REGISTERMODIFIERBUILDER_OFFSET))(this, builder);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* GetSlotDataByID(::System::UInt32 slotID)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETSLOTDATABYID_OFFSET))(this, slotID);
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

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalPowerLevelRawForRecommend(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* recommendData)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CALPOWERLEVELRAWFORRECOMMEND_OFFSET))(this, recommendData);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _CalPowerLevelRawFromLayout(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* captainSlotDatas, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* allSlotDatasFlat)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CALPOWERLEVELRAWFROMLAYOUT_OFFSET))(this, captainSlotDatas, allSlotDatasFlat);
		}

		::System::Void RegisterSpEquipSlotInfo(::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* spEquipSlotInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_REGISTERSPEQUIPSLOTINFO_OFFSET))(this, spEquipSlotInfo);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* GetAvatarDataByID(::System::UInt32 avatarId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETAVATARDATABYID_OFFSET))(this, avatarId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* GetAllTeamSlotDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLTEAMSLOTDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>* GetAvatarsByPosType(::RPG::GameCore::ILBattleCharacterLocation posType, ::System::Boolean isExcludeNew)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>*(*)(::PVOID, ::RPG::GameCore::ILBattleCharacterLocation, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETAVATARSBYPOSTYPE_OFFSET))(this, posType, isExcludeNew);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::TeamEditAllTabUiData>* GetAllTabUiData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::TeamEditAllTabUiData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLTABUIDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>* GetAllAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALLAVATARS_OFFSET))(this);
		}

		::System::Void UpgradeSlot(::System::UInt32 slotID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_UPGRADESLOT_OFFSET))(this, slotID, level);
		}

		::System::Boolean CheckIsFullByPosType(::RPG::GameCore::ILBattleCharacterLocation posType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CHECKISFULLBYPOSTYPE_OFFSET))(this, posType);
		}

		::System::UInt32 GetLimitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETLIMITLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAliveBattleAvatarIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GETALIVEBATTLEAVATARIDLIST_OFFSET))(this);
		}

		::System::Void ConfirmRecommendData(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_CONFIRMRECOMMENDDATA_OFFSET))(this, data);
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

		::System::Void _AddTeamAvatar(::System::UInt32 avatarId, ::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__ADDTEAMAVATAR_OFFSET))(this, avatarId, slotID);
		}

		::System::Void _AddTeamAvatar_1(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__ADDTEAMAVATAR_1_OFFSET))(this, avatarId);
		}

		::System::Void _UpdateTeamPos(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* teamAvatarIdDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__UPDATETEAMPOS_OFFSET))(this, teamAvatarIdDict);
		}

		::System::Boolean _CheckTeamIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__CHECKTEAMISVALID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* _BuildModifierBuilders(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* data)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO__BUILDMODIFIERBUILDERS_OFFSET))(this, data);
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

		::System::Void OnAvatarInfoProtocolReceived(::System::Object* sender, ::Class_3_1C169A0F2ACF26E7* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET))(this, sender, e);
		}

		::System::Void OnSlotInfoProtocolReceived(::System::Object* sender, ::Class_3_1C169A0F2ACF26E7* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, sender, e);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* get_SpEquipSlotInfo()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_GET_SPEQUIPSLOTINFO_OFFSET))(this);
		}

		::System::Void set_SpEquipSlotInfo(::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO_SET_SPEQUIPSLOTINFO_OFFSET))(this, value);
		}
	};
}
