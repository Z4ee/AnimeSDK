#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/Enum_3_DB663931210BBC27_66.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/Client/TrainParty/SlotType.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildManager___c__DisplayClass19_0.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildManager___c__DisplayClass19_1.h"
#include "unitysdk/RPG/GameCore/BadgeChallengeType.h"
#include "unitysdk/RPG/GameCore/BadgeType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/SlotDisplayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_409DDE73E6219FD7_1;
class Class_1_8116AE3B07301E74;
class Class_1_905995C4C61F81F7_27;
class Class_1_98A08031F550F4C1_5;
class Class_1_C9E417278351157F_10;
class Class_1_C9E417278351157F_9;
class Class_1_D17272E82AE804C2_253;
class Class_1_D1E0AD3915BCCF29_24;
class Class_1_D40936EF3BF54118_102;
class Class_1_E1B199B3D0FB256E_1;
class Class_1_E8F97FD00858F980_1;
class Class_1_FF220487FAB45279_7;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::TrainParty { class TrainPartyBuildAreaInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYBadgeItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYNormalItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYPhotoItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildLevelRewardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildStepInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSubArea; }
namespace RPG::Client::TrainParty::OutlinePost { class OutlinePostManager; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELALLPREVIEWDIY_OFFSET UNITYSDK_OFFSET(0xCA9F150)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELPREVIEWDIY_OFFSET UNITYSDK_OFFSET(0xCAA20F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CHANGEBADGEAUTOFILLSTATE_OFFSET UNITYSDK_OFFSET(0xCA99EC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CLEARDIYITEMREDDOT_OFFSET UNITYSDK_OFFSET(0xCAA2240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDISPLAYWALLDIY_OFFSET UNITYSDK_OFFSET(0xCA995F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDIY_OFFSET UNITYSDK_OFFSET(0xCAA1560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA9E180)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_FETCHDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xCAA22F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETALLAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xCAA1340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBADGEITEMBYCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0xCA9AA80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBADGEITEMBYCHALLENGE_OFFSET UNITYSDK_OFFSET(0xCA9AD20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDAREAINFOBYID_OFFSET UNITYSDK_OFFSET(0xCA999E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDDIYITEMSBYSLOT_OFFSET UNITYSDK_OFFSET(0xCAA2930)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDSTATUSBYSTATICID_OFFSET UNITYSDK_OFFSET(0xCAA0700)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYID_OFFSET UNITYSDK_OFFSET(0xCA922A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYSLOTID_OFFSET UNITYSDK_OFFSET(0xCAA0920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELREWARDINFOLIST_OFFSET UNITYSDK_OFFSET(0xCAA2AB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELROW_OFFSET UNITYSDK_OFFSET(0xCAA2D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETMISSIONPHOTODIYITEMS_OFFSET UNITYSDK_OFFSET(0xCA9A580)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETNEXTAREAINFO_OFFSET UNITYSDK_OFFSET(0xCAA0AF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETOIGINALBUILDDIYITEMSBYSLOT_OFFSET UNITYSDK_OFFSET(0xCA95E30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETORCREATEPHOTODIYITEM_OFFSET UNITYSDK_OFFSET(0xCA92330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSHOWINACTIVITYAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xCAA1110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTROTATION_OFFSET UNITYSDK_OFFSET(0xCAA31B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTTODIYITEMDICT_OFFSET UNITYSDK_OFFSET(0xCA99C80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSUBAREALIST_OFFSET UNITYSDK_OFFSET(0xCA963C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETUNLOCKEDAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xCAA0F70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDCOINITEMROW_OFFSET UNITYSDK_OFFSET(0xCAA35E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xCAA35A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCAA35C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCAA3780)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_DEFAULTAREAID_OFFSET UNITYSDK_OFFSET(0xCAA3640)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_FUNDS_OFFSET UNITYSDK_OFFSET(0xCAA3560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISACTIVITYFINISHED_OFFSET UNITYSDK_OFFSET(0xCAA2E70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISINEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xCAA34E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_OUTLINEPOSTMANAGER_OFFSET UNITYSDK_OFFSET(0xCAA3890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_SLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0xCAA3870)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0xCAA3580)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET__BUILDFUNDSITEMID_OFFSET UNITYSDK_OFFSET(0xCA9ECD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xCAA2DC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASNEWBADGES_OFFSET UNITYSDK_OFFSET(0xCA9ADC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCA9DC40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISAREAUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCAA0F10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISBUILDLEVELREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xCA994E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISDESKDISPLAYSLOT_OFFSET UNITYSDK_OFFSET(0xCAA2F20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISHEROROOMUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCAA2E10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISNEWRECEIVEDBADGE_OFFSET UNITYSDK_OFFSET(0xCA9AED0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISSHELFDISPLAYSLOT_OFFSET UNITYSDK_OFFSET(0xCAA30B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0xCA9F260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONBUILDINGUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xCA9F3E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONDIYFINISH_OFFSET UNITYSDK_OFFSET(0xCA9ED80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONENTERBUILDMAINPAGE_OFFSET UNITYSDK_OFFSET(0xCAA1960)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONEXITBUILDMAINPAGE_OFFSET UNITYSDK_OFFSET(0xCAA1B20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONTAKEBUILDLEVELREWARD_OFFSET UNITYSDK_OFFSET(0xCA9F340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_PREVIEWDIYITEM_OFFSET UNITYSDK_OFFSET(0xCAA1F70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_RECORDUNLOCKSTATICIDLIST_OFFSET UNITYSDK_OFFSET(0xCAA0600)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_REMOVEDIY_OFFSET UNITYSDK_OFFSET(0xCAA1780)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xCAA35B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCAA35D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_FUNDS_OFFSET UNITYSDK_OFFSET(0xCAA3570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_OUTLINEPOSTMANAGER_OFFSET UNITYSDK_OFFSET(0xCAA38A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_SLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0xCAA3880)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_STARNUM_OFFSET UNITYSDK_OFFSET(0xCAA3590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_STARTBUILDSTATICSTEP_OFFSET UNITYSDK_OFFSET(0xCAA1380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHBUILDCAMERA_OFFSET UNITYSDK_OFFSET(0xCAA1CE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHDIYCAMERA_OFFSET UNITYSDK_OFFSET(0xCAA1E20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNCDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0xCA9EC40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xCA9E2A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETBUILDABLEBAREAINFO_OFFSET UNITYSDK_OFFSET(0xCAA0CB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETNEWUNLOCKEDAREAINFO_OFFSET UNITYSDK_OFFSET(0xCAA0E30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETORCREATEBADGEDIYITEM_OFFSET UNITYSDK_OFFSET(0xCA91F50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETSLOTINFOBYID_OFFSET UNITYSDK_OFFSET(0xCAA0770)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYINITITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0xCAA3330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEBUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xCA9ED30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEFUNDS_OFFSET UNITYSDK_OFFSET(0xCA9E3E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATESTARNUM_OFFSET UNITYSDK_OFFSET(0xCA9ECE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0xCA99AE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDYNAMICITEM_OFFSET UNITYSDK_OFFSET(0xCAA0370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CANCELALLBADGEEXPIRETIMERS_OFFSET UNITYSDK_OFFSET(0xCA9B5A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CANCELBADGEEXPIRETIMER_OFFSET UNITYSDK_OFFSET(0xCA9CF50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARNORMALITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0xCA9D0F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARPHOTONEWSTATES_OFFSET UNITYSDK_OFFSET(0xCA9D200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEBADGESYNCDATA_OFFSET UNITYSDK_OFFSET(0xCA9BB70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATENORMALPROPSYNCDATA_OFFSET UNITYSDK_OFFSET(0xCA9BD60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEOUTLINEPOSMANAGER_OFFSET UNITYSDK_OFFSET(0xCA9E040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEPHOTOSYNCDATA_OFFSET UNITYSDK_OFFSET(0xCA9BC60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATESLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0xCA9DFE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA38B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHBADGEDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xCA9BE60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHNORMALDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xCAA2410)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xCA9C110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xCA9C1F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETAREAINFOBYID_OFFSET UNITYSDK_OFFSET(0xCAA0560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETBADGEITEMBYCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xCA9AB20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__HASDISPLAYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xCAA3020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITALLAREAINFO_OFFSET UNITYSDK_OFFSET(0xCA9DCE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0xCAA3480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ISBADGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xCA9A9E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ONBADGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xCA9D050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__REMOVEEXPIREDBADGEREDDOTIDS_OFFSET UNITYSDK_OFFSET(0xCA9D490)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__RESETAREAINFOS_OFFSET UNITYSDK_OFFSET(0xCA9E8D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__STARTBADGEEXPIRETIMER_OFFSET UNITYSDK_OFFSET(0xCA9A7C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xCA9E9C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBADGEDIYITEMLIST_OFFSET UNITYSDK_OFFSET(0xCA9AF30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCA9EBF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCDYNAMICITEMLIST_OFFSET UNITYSDK_OFFSET(0xCA9E490)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCPHOTODIYITEMLIST_OFFSET UNITYSDK_OFFSET(0xCA9B710)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___FETCHPHOTODIYITEMSBYSLOTTYPE_G___TRYADDSINGLEAVATAR_19_0_OFFSET UNITYSDK_OFFSET(0xCA9CCA0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager_TypeDefinitionIndex = 69379;

	class TrainPartyBuildManager : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _INVALID_SUB_AREA_ID = 0x0; // 0x0
		::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* _OutlinePostManager_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* _AreaInfoList; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _NewReceivedBadgeIDList; // 0x20
		::Class_1_8116AE3B07301E74* _SlotPosMappingManager_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BadgeExpireTimerMap; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*>* _BuildPhotoDIYItemCacheList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*>* _BuildBadgeDIYItemCacheList; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockStaticIDSet; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*>* _BuildDIYItemMap; // 0x50
		::System::Boolean _IsHeroRoomEarlyUnlocked; // 0x58
		::System::UInt32 _Funds_k__BackingField; // 0x5C
		::System::UInt32 _Count; // 0x60
		::System::UInt32 _BuildLevel_k__BackingField; // 0x64
		::System::UInt32 _BuildProgress_k__BackingField; // 0x68
		::System::UInt32 _AlreadyTakenRewardMaxLevel; // 0x6C
		::System::UInt32 _StarNum_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void ConfirmDisplayWallDiy(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDISPLAYWALLDIY_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetSlotToDIYItemDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTTODIYITEMDICT_OFFSET))(this);
		}

		::System::Void ChangeBadgeAutoFillState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CHANGEBADGEAUTOFILLSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>* GetSubAreaList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSUBAREALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*>* GetMissionPhotoDIYItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETMISSIONPHOTODIYITEMS_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* TryGetOrCreateBadgeDIYItem(::System::UInt32 a1, ::System::Int64 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETORCREATEBADGEDIYITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem* GetOrCreatePhotoDIYItem(::Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETORCREATEPHOTODIYITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* GetBadgeItemByChallengePeak(::System::UInt32 a1, ::RPG::Client::ChallengePeakRank a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBADGEITEMBYCHALLENGEPEAK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* GetBadgeItemByChallenge(::RPG::GameCore::ChallengeGroupType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBADGEITEMBYCHALLENGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasNewBadges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASNEWBADGES_OFFSET))(this);
		}

		::System::Boolean IsNewReceivedBadge(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISNEWRECEIVEDBADGE_OFFSET))(this, a1);
		}

		::System::Void _SyncBadgeDIYItemList(::System::Collections::Generic::IEnumerable_1<::Class_1_C9E417278351157F_10*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_C9E417278351157F_10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBADGEDIYITEMLIST_OFFSET))(this, a1);
		}

		::System::Void _SyncPhotoDIYItemList(::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_24*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_24*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCPHOTODIYITEMLIST_OFFSET))(this, a1);
		}

		::Class_1_E8F97FD00858F980_1* _CreateBadgeSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::Class_1_E8F97FD00858F980_1*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEBADGESYNCDATA_OFFSET))(this, a1, a2);
		}

		::Class_1_D1E0AD3915BCCF29_24* _CreatePhotoSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::Class_1_D1E0AD3915BCCF29_24*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEPHOTOSYNCDATA_OFFSET))(this, a1, a2);
		}

		::Class_1_D17272E82AE804C2_253* _CreateNormalPropSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::Class_1_D17272E82AE804C2_253*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATENORMALPROPSYNCDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _AddDisplayAreaInfo(::Class_1_E1B199B3D0FB256E_1* a1, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a2, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E_1*, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDISPLAYAREAINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _FetchBadgeDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHBADGEDIYITEMSBYSLOTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _FetchPhotoDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _FetchPhotoDIYItemsBySlotType(::RPG::Client::TrainParty::SlotType a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::SlotType, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTTYPE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* _GetBadgeItemByChallengeData(::RPG::GameCore::BadgeChallengeType a1, ::System::UInt32 a2, ::RPG::GameCore::BadgeType a3)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::RPG::GameCore::BadgeChallengeType, ::System::UInt32, ::RPG::GameCore::BadgeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETBADGEITEMBYCHALLENGEDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _StartBadgeExpireTimer(::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__STARTBADGEEXPIRETIMER_OFFSET))(this, a1);
		}

		::System::Void _CancelBadgeExpireTimer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CANCELBADGEEXPIRETIMER_OFFSET))(this, a1);
		}

		::System::Void _CancelAllBadgeExpireTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CANCELALLBADGEEXPIRETIMERS_OFFSET))(this);
		}

		::System::Void _OnBadgeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ONBADGEEXPIRED_OFFSET))(this);
		}

		::System::Void _ClearNormalItemNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARNORMALITEMNEWSTATES_OFFSET))(this);
		}

		::System::Void _ClearPhotoNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARPHOTONEWSTATES_OFFSET))(this);
		}

		::System::Void _RemoveExpiredBadgeRedDotIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__REMOVEEXPIREDBADGEREDDOTIDS_OFFSET))(this);
		}

		::System::Boolean _IsBadgeExpired(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ISBADGEEXPIRED_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FF220487FAB45279_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateFunds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEFUNDS_OFFSET))(this, a1);
		}

		::System::Void UpdateStarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATESTARNUM_OFFSET))(this, a1);
		}

		::System::Void UpdateBuildLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEBUILDLEVEL_OFFSET))(this, a1);
		}

		::System::Void OnDiyFinish(::Class_1_409DDE73E6219FD7_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_409DDE73E6219FD7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONDIYFINISH_OFFSET))(this, a1);
		}

		::System::Void OnAreaUnlock(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONAREAUNLOCK_OFFSET))(this, a1);
		}

		::System::Void OnTakeBuildLevelReward(::Class_1_905995C4C61F81F7_27* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONTAKEBUILDLEVELREWARD_OFFSET))(this, a1);
		}

		::System::Void OnBuildingUpdateNotify(::Class_1_D40936EF3BF54118_102* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONBUILDINGUPDATENOTIFY_OFFSET))(this, a1);
		}

		::System::Void RecordUnlockStaticIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_RECORDUNLOCKSTATICIDLIST_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_66 GetBuildStatusByStaticID(::System::UInt32 a1)
		{
			return ((::Enum_3_DB663931210BBC27_66(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDSTATUSBYSTATICID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* TryGetSlotInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETSLOTINFOBYID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDIYItemBySlotID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYSLOTID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDiyItemByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* GetNextAreaInfo(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETNEXTAREAINFO_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* TryGetBuildablebAreaInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETBUILDABLEBAREAINFO_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* TryGetNewUnlockedAreaInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETNEWUNLOCKEDAREAINFO_OFFSET))(this);
		}

		::System::Boolean IsBuildLevelRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISBUILDLEVELREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean IsAreaUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISAREAUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* GetUnlockedAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETUNLOCKEDAREAINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* GetShowInActivityAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSHOWINACTIVITYAREAINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* GetAllAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETALLAREAINFOLIST_OFFSET))(this);
		}

		::System::Void StartBuildStaticStep(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_STARTBUILDSTATICSTEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfirmDiy(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a2, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDIY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveDiy(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_REMOVEDIY_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnterBuildMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONENTERBUILDMAINPAGE_OFFSET))(this);
		}

		::System::Void OnExitBuildMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONEXITBUILDMAINPAGE_OFFSET))(this);
		}

		::System::Void SwitchBuildCamera(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHBUILDCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SwitchDiyCamera(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a2, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHDIYCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PreviewDiyItem(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_PREVIEWDIYITEM_OFFSET))(this, a1, a2);
		}

		::System::Void CancelAllPreviewDiy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELALLPREVIEWDIY_OFFSET))(this);
		}

		::System::Void CancelPreviewDiy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELPREVIEWDIY_OFFSET))(this, a1);
		}

		::System::Void ClearDiyItemReddot(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CLEARDIYITEMREDDOT_OFFSET))(this, a1);
		}

		::System::Void FetchDiyItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_FETCHDIYITEMSBYSLOTINFO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetBuildDiyItemsBySlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDDIYITEMSBYSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetOiginalBuildDiyItemsBySlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETOIGINALBUILDDIYITEMSBYSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*>* GetLevelRewardInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELREWARDINFOLIST_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyRewardConfigRow* GetLevelRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyRewardConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELROW_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* GetBuildAreaInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDAREAINFOBYID_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void _SyncBuildProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBUILDPROGRESS_OFFSET))(this, a1);
		}

		::System::Void SyncDisplayAreaInfo(::Class_1_E1B199B3D0FB256E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNCDISPLAYAREAINFO_OFFSET))(this, a1);
		}

		::System::Boolean IsHeroRoomUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISHEROROOMUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsDeskDisplaySlot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISDESKDISPLAYSLOT_OFFSET))(this, a1);
		}

		::System::Boolean IsShelfDisplaySlot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISSHELFDISPLAYSLOT_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetSlotRotation(::System::UInt32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTROTATION_OFFSET))(this, a1);
		}

		::System::Void TryInitItemNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYINITITEMNEWSTATES_OFFSET))(this);
		}

		::System::Void _InitAllAreaInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITALLAREAINFO_OFFSET))(this);
		}

		::System::Void _CreateSlotPosMappingManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATESLOTPOSMAPPINGMANAGER_OFFSET))(this);
		}

		::System::Void _CreateOutLinePosManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEOUTLINEPOSMANAGER_OFFSET))(this);
		}

		::System::Void _ResetAreaInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__RESETAREAINFOS_OFFSET))(this);
		}

		::System::Void _SyncAreaInfoList(::System::Collections::Generic::IList_1<::Class_1_98A08031F550F4C1_5*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_98A08031F550F4C1_5*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCAREAINFOLIST_OFFSET))(this, a1);
		}

		::System::Void _FetchNormalDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHNORMALDIYITEMSBYSLOTINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* _GetAreaInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETAREAINFOBYID_OFFSET))(this, a1);
		}

		::System::Void _SyncDynamicItemList(::System::Collections::Generic::IList_1<::Class_1_C9E417278351157F_9*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_C9E417278351157F_9*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCDYNAMICITEMLIST_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem* _AddDynamicItem(::System::UInt32 a1, ::System::Int64 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDYNAMICITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasDisplaySlotType(::Il2CppArray<::RPG::GameCore::SlotDisplayType>* a1, ::RPG::GameCore::SlotDisplayType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SlotDisplayType>*, ::RPG::GameCore::SlotDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__HASDISPLAYSLOTTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitItemNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITITEMNEWSTATES_OFFSET))(this);
		}

		::System::UInt32 get_Funds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_FUNDS_OFFSET))(this);
		}

		::System::Void set_Funds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_FUNDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_STARNUM_OFFSET))(this);
		}

		::System::Void set_StarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_STARNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuildLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDLEVEL_OFFSET))(this);
		}

		::System::Void set_BuildLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuildProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDPROGRESS_OFFSET))(this);
		}

		::System::Void set_BuildProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDPROGRESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemRow* get_BuildCoinItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDCOINITEMROW_OFFSET))(this);
		}

		::System::UInt32 get_DefaultAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_DEFAULTAREAID_OFFSET))(this);
		}

		::System::Boolean get_IsInEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISINEARLYACCESS_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsActivityFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISACTIVITYFINISHED_OFFSET))(this);
		}

		::Class_1_8116AE3B07301E74* get_SlotPosMappingManager()
		{
			return ((::Class_1_8116AE3B07301E74*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_SLOTPOSMAPPINGMANAGER_OFFSET))(this);
		}

		::System::Void set_SlotPosMappingManager(::Class_1_8116AE3B07301E74* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8116AE3B07301E74*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_SLOTPOSMAPPINGMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* get_OutlinePostManager()
		{
			return ((::RPG::Client::TrainParty::OutlinePost::OutlinePostManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_OUTLINEPOSTMANAGER_OFFSET))(this);
		}

		::System::Void set_OutlinePostManager(::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::OutlinePostManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_OUTLINEPOSTMANAGER_OFFSET))(this, a1);
		}

		::System::UInt32 get__BuildFundsItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET__BUILDFUNDSITEMID_OFFSET))(this);
		}

		::System::Void __FetchPhotoDIYItemsBySlotType_g___TryAddSingleAvatar_19_0(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass19_0& a2, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass19_1& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass19_0&, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass19_1&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___FETCHPHOTODIYITEMSBYSLOTTYPE_G___TRYADDSINGLEAVATAR_19_0_OFFSET))(this, a1, a2, a3);
		}
	};
}
