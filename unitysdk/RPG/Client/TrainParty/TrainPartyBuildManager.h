#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/Enum_3_DB663931210BBC27_65.h"
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
class Class_1_905995C4C61F81F7_27;
class Class_1_98A08031F550F4C1_8;
class Class_1_A6B0B39A319DDDE2_2;
class Class_1_C9E417278351157F_10;
class Class_1_C9E417278351157F_9;
class Class_1_D17272E82AE804C2_239;
class Class_1_D1E0AD3915BCCF29_22;
class Class_1_D40936EF3BF54118_95;
class Class_1_D704B32D505CBFB3;
class Class_1_E1B199B3D0FB256E_1;
class Class_1_E8F97FD00858F980_1;
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

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELALLPREVIEWDIY_OFFSET UNITYSDK_OFFSET(0xB343C50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELPREVIEWDIY_OFFSET UNITYSDK_OFFSET(0xB346D20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CHANGEBADGEAUTOFILLSTATE_OFFSET UNITYSDK_OFFSET(0xB33F270)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CLEARDIYITEMREDDOT_OFFSET UNITYSDK_OFFSET(0xB346E70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDISPLAYWALLDIY_OFFSET UNITYSDK_OFFSET(0xB33E950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDIY_OFFSET UNITYSDK_OFFSET(0xB3461A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB342BD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_FETCHDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xB346F30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETALLAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xB345F80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBADGEITEMBYCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0xB33FCD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBADGEITEMBYCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB33FF50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDAREAINFOBYID_OFFSET UNITYSDK_OFFSET(0xB33ED60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDDIYITEMSBYSLOT_OFFSET UNITYSDK_OFFSET(0xB347430)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDSTATUSBYSTATICID_OFFSET UNITYSDK_OFFSET(0xB3452D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYID_OFFSET UNITYSDK_OFFSET(0xB337690)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYSLOTID_OFFSET UNITYSDK_OFFSET(0xB345540)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELREWARDINFOLIST_OFFSET UNITYSDK_OFFSET(0xB347590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELROW_OFFSET UNITYSDK_OFFSET(0xB347740)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETMISSIONPHOTODIYITEMS_OFFSET UNITYSDK_OFFSET(0xB33F850)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETNEXTAREAINFO_OFFSET UNITYSDK_OFFSET(0xB345760)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETOIGINALBUILDDIYITEMSBYSLOT_OFFSET UNITYSDK_OFFSET(0xB33B310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETORCREATEPHOTODIYITEM_OFFSET UNITYSDK_OFFSET(0xB337740)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSHOWINACTIVITYAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xB345D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTROTATION_OFFSET UNITYSDK_OFFSET(0xB347BA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTTODIYITEMDICT_OFFSET UNITYSDK_OFFSET(0xB33F020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSUBAREALIST_OFFSET UNITYSDK_OFFSET(0xB33B8D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETUNLOCKEDAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xB345C10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDCOINITEMROW_OFFSET UNITYSDK_OFFSET(0xB347FD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xB347F90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xB347FB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xB348150)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_DEFAULTAREAID_OFFSET UNITYSDK_OFFSET(0xB348030)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_FUNDS_OFFSET UNITYSDK_OFFSET(0xB347F50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISACTIVITYFINISHED_OFFSET UNITYSDK_OFFSET(0xB347860)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISINEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xB347ED0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_OUTLINEPOSTMANAGER_OFFSET UNITYSDK_OFFSET(0xB348260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_SLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0xB348240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0xB347F70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET__BUILDFUNDSITEMID_OFFSET UNITYSDK_OFFSET(0xB343780)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB3477B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASNEWBADGES_OFFSET UNITYSDK_OFFSET(0xB33FFF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB342820)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISAREAUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB345BB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISBUILDLEVELREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB33E840)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISDESKDISPLAYSLOT_OFFSET UNITYSDK_OFFSET(0xB347910)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISHEROROOMUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB347800)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISNEWRECEIVEDBADGE_OFFSET UNITYSDK_OFFSET(0xB3401A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISSHELFDISPLAYSLOT_OFFSET UNITYSDK_OFFSET(0xB347AA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0xB343D60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONBUILDINGUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xB343EE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONDIYFINISH_OFFSET UNITYSDK_OFFSET(0xB343830)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONENTERBUILDMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB346590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONEXITBUILDMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB346750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONTAKEBUILDLEVELREWARD_OFFSET UNITYSDK_OFFSET(0xB343E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_PREVIEWDIYITEM_OFFSET UNITYSDK_OFFSET(0xB346BA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_RECORDUNLOCKSTATICIDLIST_OFFSET UNITYSDK_OFFSET(0xB3451C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_REMOVEDIY_OFFSET UNITYSDK_OFFSET(0xB3463B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xB347FA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xB347FC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_FUNDS_OFFSET UNITYSDK_OFFSET(0xB347F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_OUTLINEPOSTMANAGER_OFFSET UNITYSDK_OFFSET(0xB348270)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_SLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0xB348250)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_STARNUM_OFFSET UNITYSDK_OFFSET(0xB347F80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_STARTBUILDSTATICSTEP_OFFSET UNITYSDK_OFFSET(0xB345FC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHBUILDCAMERA_OFFSET UNITYSDK_OFFSET(0xB346910)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHDIYCAMERA_OFFSET UNITYSDK_OFFSET(0xB346A50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNCDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0xB3436F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xB342CD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETBUILDABLEBAREAINFO_OFFSET UNITYSDK_OFFSET(0xB345920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETNEWUNLOCKEDAREAINFO_OFFSET UNITYSDK_OFFSET(0xB345A90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETORCREATEBADGEDIYITEM_OFFSET UNITYSDK_OFFSET(0xB3372D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETSLOTINFOBYID_OFFSET UNITYSDK_OFFSET(0xB345340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYINITITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0xB347D20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEBUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xB3437E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEFUNDS_OFFSET UNITYSDK_OFFSET(0xB342E10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATESTARNUM_OFFSET UNITYSDK_OFFSET(0xB343790)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0xB33EE80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDYNAMICITEM_OFFSET UNITYSDK_OFFSET(0xB344EF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CANCELALLBADGEEXPIRETIMERS_OFFSET UNITYSDK_OFFSET(0xB340820)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CANCELBADGEEXPIRETIMER_OFFSET UNITYSDK_OFFSET(0xB341FA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARNORMALITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0xB342150)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARPHOTONEWSTATES_OFFSET UNITYSDK_OFFSET(0xB342270)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEBADGESYNCDATA_OFFSET UNITYSDK_OFFSET(0xB340D00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATENORMALPROPSYNCDATA_OFFSET UNITYSDK_OFFSET(0xB340EE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEOUTLINEPOSMANAGER_OFFSET UNITYSDK_OFFSET(0xB342B70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEPHOTOSYNCDATA_OFFSET UNITYSDK_OFFSET(0xB340DF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATESLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0xB342B10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB348280)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHBADGEDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xB340FE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHNORMALDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xB347030)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xB341230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xB341310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETAREAINFOBYID_OFFSET UNITYSDK_OFFSET(0xB345110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETBADGEITEMBYCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB33FD70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__HASDISPLAYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xB347A10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITALLAREAINFO_OFFSET UNITYSDK_OFFSET(0xB3428F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0xB347E70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ISBADGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xB33FC30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ONBADGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xB3420B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__REMOVEEXPIREDBADGEREDDOTIDS_OFFSET UNITYSDK_OFFSET(0xB342560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__RESETAREAINFOS_OFFSET UNITYSDK_OFFSET(0xB343360)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__STARTBADGEEXPIRETIMER_OFFSET UNITYSDK_OFFSET(0xB33FA30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xB343480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBADGEDIYITEMLIST_OFFSET UNITYSDK_OFFSET(0xB340200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xB3436A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCDYNAMICITEMLIST_OFFSET UNITYSDK_OFFSET(0xB342EC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCPHOTODIYITEMLIST_OFFSET UNITYSDK_OFFSET(0xB3409B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___FETCHPHOTODIYITEMSBYSLOTTYPE_G___TRYADDSINGLEAVATAR_19_0_OFFSET UNITYSDK_OFFSET(0xB341C20)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager_TypeDefinitionIndex = 68567;

	class TrainPartyBuildManager : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _INVALID_SUB_AREA_ID = 0x0; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*>* _BuildPhotoDIYItemCacheList; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockStaticIDSet; // 0x18
		::Class_1_D704B32D505CBFB3* _SlotPosMappingManager_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*>* _BuildDIYItemMap; // 0x28
		::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* _OutlinePostManager_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* _AreaInfoList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BadgeExpireTimerMap; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*>* _BuildBadgeDIYItemCacheList; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _NewReceivedBadgeIDList; // 0x50
		::System::UInt32 _BuildLevel_k__BackingField; // 0x58
		::System::UInt32 _AlreadyTakenRewardMaxLevel; // 0x5C
		::System::Boolean _IsHeroRoomEarlyUnlocked; // 0x60
		::System::UInt32 _Count; // 0x64
		::System::UInt32 _Funds_k__BackingField; // 0x68
		::System::UInt32 _BuildProgress_k__BackingField; // 0x6C
		::System::UInt32 _StarNum_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void ConfirmDisplayWallDiy(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* slotInfo, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDISPLAYWALLDIY_OFFSET))(this, slotInfo, item);
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

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* TryGetOrCreateBadgeDIYItem(::System::UInt32 badgeID, ::System::Int64 expireTime)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETORCREATEBADGEDIYITEM_OFFSET))(this, badgeID, expireTime);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem* GetOrCreatePhotoDIYItem(::Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 photoType, ::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETORCREATEPHOTODIYITEM_OFFSET))(this, photoType, uniqueID);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* GetBadgeItemByChallengePeak(::System::UInt32 groupID, ::RPG::Client::ChallengePeakRank rank)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBADGEITEMBYCHALLENGEPEAK_OFFSET))(this, groupID, rank);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* GetBadgeItemByChallenge(::RPG::GameCore::ChallengeGroupType type, ::System::UInt32 groupID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBADGEITEMBYCHALLENGE_OFFSET))(this, type, groupID);
		}

		::System::Boolean HasNewBadges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASNEWBADGES_OFFSET))(this);
		}

		::System::Boolean IsNewReceivedBadge(::System::UInt32 badgeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISNEWRECEIVEDBADGE_OFFSET))(this, badgeID);
		}

		::System::Void _SyncBadgeDIYItemList(::System::Collections::Generic::IEnumerable_1<::Class_1_C9E417278351157F_10*>* badgeInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_C9E417278351157F_10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBADGEDIYITEMLIST_OFFSET))(this, badgeInfoList);
		}

		::System::Void _SyncPhotoDIYItemList(::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_22*>* photoInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_22*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCPHOTODIYITEMLIST_OFFSET))(this, photoInfoList);
		}

		::Class_1_E8F97FD00858F980_1* _CreateBadgeSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* slotInfo, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::Class_1_E8F97FD00858F980_1*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEBADGESYNCDATA_OFFSET))(this, slotInfo, item);
		}

		::Class_1_D1E0AD3915BCCF29_22* _CreatePhotoSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* slotInfo, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::Class_1_D1E0AD3915BCCF29_22*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEPHOTOSYNCDATA_OFFSET))(this, slotInfo, item);
		}

		::Class_1_D17272E82AE804C2_239* _CreateNormalPropSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* slotInfo, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::Class_1_D17272E82AE804C2_239*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATENORMALPROPSYNCDATA_OFFSET))(this, slotInfo, item);
		}

		::System::Void _AddDisplayAreaInfo(::Class_1_E1B199B3D0FB256E_1* displayAreaInfo, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* slotInfo, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E_1*, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDISPLAYAREAINFO_OFFSET))(this, displayAreaInfo, slotInfo, item);
		}

		::System::Void _FetchBadgeDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHBADGEDIYITEMSBYSLOTINFO_OFFSET))(this, targetSlot, list);
		}

		::System::Void _FetchPhotoDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTINFO_OFFSET))(this, targetSlot, list);
		}

		::System::Void _FetchPhotoDIYItemsBySlotType(::RPG::Client::TrainParty::SlotType slotType, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::SlotType, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTTYPE_OFFSET))(this, slotType, list);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* _GetBadgeItemByChallengeData(::RPG::GameCore::BadgeChallengeType type, ::System::UInt32 groupID, ::RPG::GameCore::BadgeType badgeType)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::RPG::GameCore::BadgeChallengeType, ::System::UInt32, ::RPG::GameCore::BadgeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETBADGEITEMBYCHALLENGEDATA_OFFSET))(this, type, groupID, badgeType);
		}

		::System::Void _StartBadgeExpireTimer(::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__STARTBADGEEXPIRETIMER_OFFSET))(this, item);
		}

		::System::Void _CancelBadgeExpireTimer(::System::UInt32 badgeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CANCELBADGEEXPIRETIMER_OFFSET))(this, badgeID);
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

		::System::Boolean _IsBadgeExpired(::System::Int64 expiredTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ISBADGEEXPIRED_OFFSET))(this, expiredTime);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_A6B0B39A319DDDE2_2* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6B0B39A319DDDE2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void UpdateFunds(::System::UInt32 funds)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEFUNDS_OFFSET))(this, funds);
		}

		::System::Void UpdateStarNum(::System::UInt32 starNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATESTARNUM_OFFSET))(this, starNum);
		}

		::System::Void UpdateBuildLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEBUILDLEVEL_OFFSET))(this, level);
		}

		::System::Void OnDiyFinish(::Class_1_409DDE73E6219FD7_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_409DDE73E6219FD7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONDIYFINISH_OFFSET))(this, rsp);
		}

		::System::Void OnAreaUnlock(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONAREAUNLOCK_OFFSET))(this, areaID);
		}

		::System::Void OnTakeBuildLevelReward(::Class_1_905995C4C61F81F7_27* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONTAKEBUILDLEVELREWARD_OFFSET))(this, rsp);
		}

		::System::Void OnBuildingUpdateNotify(::Class_1_D40936EF3BF54118_95* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_95*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONBUILDINGUPDATENOTIFY_OFFSET))(this, notify);
		}

		::System::Void RecordUnlockStaticIDList(::System::Collections::Generic::IList_1<::System::UInt32>* unlockStaticIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_RECORDUNLOCKSTATICIDLIST_OFFSET))(this, unlockStaticIDList);
		}

		::Enum_3_DB663931210BBC27_65 GetBuildStatusByStaticID(::System::UInt32 staticID)
		{
			return ((::Enum_3_DB663931210BBC27_65(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDSTATUSBYSTATICID_OFFSET))(this, staticID);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* TryGetSlotInfoByID(::System::UInt32 slotID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETSLOTINFOBYID_OFFSET))(this, slotID);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDIYItemBySlotID(::System::UInt32 slotID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYSLOTID_OFFSET))(this, slotID);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDiyItemByID(::System::UInt32 id)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYID_OFFSET))(this, id);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* GetNextAreaInfo(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* preAreaInfo)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETNEXTAREAINFO_OFFSET))(this, preAreaInfo);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* TryGetBuildablebAreaInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETBUILDABLEBAREAINFO_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* TryGetNewUnlockedAreaInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETNEWUNLOCKEDAREAINFO_OFFSET))(this);
		}

		::System::Boolean IsBuildLevelRewardTaken(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISBUILDLEVELREWARDTAKEN_OFFSET))(this, level);
		}

		::System::Boolean IsAreaUnlocked(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISAREAUNLOCKED_OFFSET))(this, areaID);
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

		::System::Void StartBuildStaticStep(::System::UInt32 areaID, ::System::UInt32 goalID, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo* stepInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_STARTBUILDSTATICSTEP_OFFSET))(this, areaID, goalID, stepInfo);
		}

		::System::Void ConfirmDiy(::System::UInt32 areaID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDIY_OFFSET))(this, areaID, targetSlot, item);
		}

		::System::Void RemoveDiy(::System::UInt32 areaID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_REMOVEDIY_OFFSET))(this, areaID, targetSlot);
		}

		::System::Void OnEnterBuildMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONENTERBUILDMAINPAGE_OFFSET))(this);
		}

		::System::Void OnExitBuildMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONEXITBUILDMAINPAGE_OFFSET))(this);
		}

		::System::Void SwitchBuildCamera(::System::UInt32 areaID, ::System::UInt32 staticItemID, ::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHBUILDCAMERA_OFFSET))(this, areaID, staticItemID, slotID);
		}

		::System::Void SwitchDiyCamera(::System::UInt32 areaID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* slotInfo, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHDIYCAMERA_OFFSET))(this, areaID, slotInfo, item);
		}

		::System::Void PreviewDiyItem(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_PREVIEWDIYITEM_OFFSET))(this, targetSlot, item);
		}

		::System::Void CancelAllPreviewDiy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELALLPREVIEWDIY_OFFSET))(this);
		}

		::System::Void CancelPreviewDiy(::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELPREVIEWDIY_OFFSET))(this, slotID);
		}

		::System::Void ClearDiyItemReddot(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CLEARDIYITEMREDDOT_OFFSET))(this, itemList);
		}

		::System::Void FetchDiyItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_FETCHDIYITEMSBYSLOTINFO_OFFSET))(this, targetSlot, list);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetBuildDiyItemsBySlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDDIYITEMSBYSLOT_OFFSET))(this, targetSlot);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetOiginalBuildDiyItemsBySlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETOIGINALBUILDDIYITEMSBYSLOT_OFFSET))(this, targetSlot);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*>* GetLevelRewardInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELREWARDINFOLIST_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyRewardConfigRow* GetLevelRow(::System::UInt32 level)
		{
			return ((::RPG::GameCore::TrainPartyRewardConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELROW_OFFSET))(this, level);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* GetBuildAreaInfoByID(::System::UInt32 id)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDAREAINFOBYID_OFFSET))(this, id);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void _SyncBuildProgress(::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBUILDPROGRESS_OFFSET))(this, progress);
		}

		::System::Void SyncDisplayAreaInfo(::Class_1_E1B199B3D0FB256E_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNCDISPLAYAREAINFO_OFFSET))(this, info);
		}

		::System::Boolean IsHeroRoomUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISHEROROOMUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsDeskDisplaySlot(::System::UInt32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISDESKDISPLAYSLOT_OFFSET))(this, slotID);
		}

		::System::Boolean IsShelfDisplaySlot(::System::UInt32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISSHELFDISPLAYSLOT_OFFSET))(this, slotID);
		}

		::UnityEngine::Quaternion GetSlotRotation(::System::UInt32 slotID)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTROTATION_OFFSET))(this, slotID);
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

		::System::Void _SyncAreaInfoList(::System::Collections::Generic::IList_1<::Class_1_98A08031F550F4C1_8*>* serverInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_98A08031F550F4C1_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCAREAINFOLIST_OFFSET))(this, serverInfos);
		}

		::System::Void _FetchNormalDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHNORMALDIYITEMSBYSLOTINFO_OFFSET))(this, targetSlot, list);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* _GetAreaInfoByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETAREAINFOBYID_OFFSET))(this, ID);
		}

		::System::Void _SyncDynamicItemList(::System::Collections::Generic::IList_1<::Class_1_C9E417278351157F_9*>* trainPartyPropList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_C9E417278351157F_9*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCDYNAMICITEMLIST_OFFSET))(this, trainPartyPropList);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem* _AddDynamicItem(::System::UInt32 id, ::System::Int64 acquiredTime)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDYNAMICITEM_OFFSET))(this, id, acquiredTime);
		}

		::System::Boolean _HasDisplaySlotType(::Il2CppArray<::RPG::GameCore::SlotDisplayType>* types, ::RPG::GameCore::SlotDisplayType displaySlotType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SlotDisplayType>*, ::RPG::GameCore::SlotDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__HASDISPLAYSLOTTYPE_OFFSET))(this, types, displaySlotType);
		}

		::System::Void _InitItemNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITITEMNEWSTATES_OFFSET))(this);
		}

		::System::UInt32 get_Funds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_FUNDS_OFFSET))(this);
		}

		::System::Void set_Funds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_FUNDS_OFFSET))(this, value);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_STARNUM_OFFSET))(this);
		}

		::System::Void set_StarNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_STARNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_BuildLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDLEVEL_OFFSET))(this);
		}

		::System::Void set_BuildLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_BuildProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDPROGRESS_OFFSET))(this);
		}

		::System::Void set_BuildProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDPROGRESS_OFFSET))(this, value);
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

		::Class_1_D704B32D505CBFB3* get_SlotPosMappingManager()
		{
			return ((::Class_1_D704B32D505CBFB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_SLOTPOSMAPPINGMANAGER_OFFSET))(this);
		}

		::System::Void set_SlotPosMappingManager(::Class_1_D704B32D505CBFB3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D704B32D505CBFB3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_SLOTPOSMAPPINGMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* get_OutlinePostManager()
		{
			return ((::RPG::Client::TrainParty::OutlinePost::OutlinePostManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_OUTLINEPOSTMANAGER_OFFSET))(this);
		}

		::System::Void set_OutlinePostManager(::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::OutlinePostManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_OUTLINEPOSTMANAGER_OFFSET))(this, value);
		}

		::System::UInt32 get__BuildFundsItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET__BUILDFUNDSITEMID_OFFSET))(this);
		}

		::System::Void __FetchPhotoDIYItemsBySlotType_g___TryAddSingleAvatar_19_0(::System::UInt32 avatarID, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass19_0& a2, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass19_1& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass19_0&, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass19_1&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___FETCHPHOTODIYITEMSBYSLOTTYPE_G___TRYADDSINGLEAVATAR_19_0_OFFSET))(this, avatarID, a2, a3);
		}
	};
}
