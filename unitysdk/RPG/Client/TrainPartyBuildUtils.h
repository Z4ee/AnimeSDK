#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoRarityData.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoWorldData.h"
#include "unitysdk/RPG/GameCore/BadgeChallengeType.h"
#include "unitysdk/RPG/GameCore/BadgeType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_E1B199B3D0FB256E_1;
namespace RPG::Client { class PlayerBoardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTYBUILDUTILS_CANCELPREVIEWPHOTO_OFFSET UNITYSDK_OFFSET(0xB363500)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_CREATEFAKESLOTIDTODIYITEMDICT_OFFSET UNITYSDK_OFFSET(0xB364000)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETAVATARPHOTORARITYDATALIST_OFFSET UNITYSDK_OFFSET(0xB364800)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETBADGECHALLENGETYPEBYCHALLENGEGROUPTYPE_OFFSET UNITYSDK_OFFSET(0xB365500)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETBADGETYPEBYCHALLENGEPEAKRANK_OFFSET UNITYSDK_OFFSET(0xB365550)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETCHALLENGEGROUPTYPEBYBADGECHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0xB3654B0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETDISPLAYAREAINFOTODIYITEMDICTBYPLAYERBOARDINFO_OFFSET UNITYSDK_OFFSET(0xB363590)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETDISPLAYAREAINFOTODIYITEMDICT_OFFSET UNITYSDK_OFFSET(0xB3635E0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETLIGHTCONEPHOTORARITYDATALIST_OFFSET UNITYSDK_OFFSET(0xB364E30)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETPHOTOWORLDDATALIST_OFFSET UNITYSDK_OFFSET(0xB364600)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGESUBAREAID_OFFSET UNITYSDK_OFFSET(0xB365E80)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_ITEM_COMMON_DYNAMIC_ITEM_ID_OFFSET UNITYSDK_OFFSET(0xB365670)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_TAG_OFFSET UNITYSDK_OFFSET(0xB362DB0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_AREA_ID_OFFSET UNITYSDK_OFFSET(0xB3655A0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_OFFSET UNITYSDK_OFFSET(0xB365C20)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_OFFSET UNITYSDK_OFFSET(0xB365A00)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_HOVER_MATERIAL_PATH_OFFSET UNITYSDK_OFFSET(0xB365940)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_GOTO_ID_OFFSET UNITYSDK_OFFSET(0xB365840)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_UNLOCK_ID_OFFSET UNITYSDK_OFFSET(0xB365770)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_OUTLINE_ROOT_PATH_OFFSET UNITYSDK_OFFSET(0xB365E40)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_AVATAR_TAG_OFFSET UNITYSDK_OFFSET(0xB3631D0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_LIGHT_CONE_TAG_OFFSET UNITYSDK_OFFSET(0xB362F30)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_MISSION_TAG_OFFSET UNITYSDK_OFFSET(0xB363080)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASBADGETAG_OFFSET UNITYSDK_OFFSET(0xB362D30)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOAVATARTAG_OFFSET UNITYSDK_OFFSET(0xB363150)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOLIGHTCONETAG_OFFSET UNITYSDK_OFFSET(0xB362EB0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOMISSIONTAG_OFFSET UNITYSDK_OFFSET(0xB363000)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ISPHOTOSLOT_OFFSET UNITYSDK_OFFSET(0xB3632A0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_PREVIEWPHOTO_OFFSET UNITYSDK_OFFSET(0xB3633C0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS__HASTAG_OFFSET UNITYSDK_OFFSET(0xB362CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildUtils_TypeDefinitionIndex = 62846;

	class TrainPartyBuildUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DISPLAY_WALL_BADGE_SLOT_ID_ARRAY()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildUtils_TypeDefinitionIndex)->GetStaticField(0x23440);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildUtils_TypeDefinitionIndex)->GetStaticField(0x23448);
		}

		static ::System::Boolean _HasTag(::System::Int32 tag, ::System::UInt32 targetTag)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS__HASTAG_OFFSET))(tag, targetTag);
		}

		static ::System::Boolean HasBadgeTag(::System::Int32 tag)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASBADGETAG_OFFSET))(tag);
		}

		static ::System::Boolean HasPhotoLightConeTag(::System::Int32 tag)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOLIGHTCONETAG_OFFSET))(tag);
		}

		static ::System::Boolean HasPhotoMissionTag(::System::Int32 tag)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOMISSIONTAG_OFFSET))(tag);
		}

		static ::System::Boolean HasPhotoAvatarTag(::System::Int32 tag)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOAVATARTAG_OFFSET))(tag);
		}

		static ::System::Boolean IsPhotoSlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* slotInfo)
		{
			return ((::System::Boolean(*)(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_ISPHOTOSLOT_OFFSET))(slotInfo);
		}

		static ::System::Void PreviewPhoto(::System::UInt32 slotID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* dynamicItem)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_PREVIEWPHOTO_OFFSET))(slotID, dynamicItem);
		}

		static ::System::Void CancelPreviewPhoto(::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_CANCELPREVIEWPHOTO_OFFSET))(slotID);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetDisplayAreaInfoToDIYItemDictByPlayerBoardInfo(::RPG::Client::PlayerBoardInfo* info)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETDISPLAYAREAINFOTODIYITEMDICTBYPLAYERBOARDINFO_OFFSET))(info);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetDisplayAreaInfoToDIYItemDict(::Class_1_E1B199B3D0FB256E_1* displayAreaInfo)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::Class_1_E1B199B3D0FB256E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETDISPLAYAREAINFOTODIYITEMDICT_OFFSET))(displayAreaInfo);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* CreateFakeSlotIDToDIYItemDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_CREATEFAKESLOTIDTODIYITEMDICT_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::TrainPartyBuildUtils_PhotoWorldData>* GetPhotoWorldDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainPartyBuildUtils_PhotoWorldData>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETPHOTOWORLDDATALIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::TrainPartyBuildUtils_PhotoRarityData>* GetAvatarPhotoRarityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainPartyBuildUtils_PhotoRarityData>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETAVATARPHOTORARITYDATALIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::TrainPartyBuildUtils_PhotoRarityData>* GetLightConePhotoRarityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainPartyBuildUtils_PhotoRarityData>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETLIGHTCONEPHOTORARITYDATALIST_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeGroupType GetChallengeGroupTypeByBadgeChallengeType(::RPG::GameCore::BadgeChallengeType badgeChallengeType)
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::RPG::GameCore::BadgeChallengeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETCHALLENGEGROUPTYPEBYBADGECHALLENGETYPE_OFFSET))(badgeChallengeType);
		}

		static ::RPG::GameCore::BadgeChallengeType GetBadgeChallengeTypeByChallengeGroupType(::RPG::GameCore::ChallengeGroupType challengeGroupType)
		{
			return ((::RPG::GameCore::BadgeChallengeType(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETBADGECHALLENGETYPEBYCHALLENGEGROUPTYPE_OFFSET))(challengeGroupType);
		}

		static ::RPG::GameCore::BadgeType GetBadgeTypeByChallengePeakRank(::RPG::Client::ChallengePeakRank rank)
		{
			return ((::RPG::GameCore::BadgeType(*)(::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETBADGETYPEBYCHALLENGEPEAKRANK_OFFSET))(rank);
		}

		static ::System::UInt32 get_BADGE_TAG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_TAG_OFFSET))();
		}

		static ::System::UInt32 get_PHOTO_LIGHT_CONE_TAG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_LIGHT_CONE_TAG_OFFSET))();
		}

		static ::System::UInt32 get_PHOTO_MISSION_TAG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_MISSION_TAG_OFFSET))();
		}

		static ::System::UInt32 get_PHOTO_AVATAR_TAG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_AVATAR_TAG_OFFSET))();
		}

		static ::System::UInt32 get_DISPLAY_WALL_AREA_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_AREA_ID_OFFSET))();
		}

		static ::System::UInt32 get_BADGE_ITEM_COMMON_DYNAMIC_ITEM_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_ITEM_COMMON_DYNAMIC_ITEM_ID_OFFSET))();
		}

		static ::System::UInt32 get_MAP_GO_HOME_UNLOCK_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_UNLOCK_ID_OFFSET))();
		}

		static ::System::UInt32 get_MAP_GO_HOME_GOTO_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_GOTO_ID_OFFSET))();
		}

		static ::System::String* get_HOVER_MATERIAL_PATH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_HOVER_MATERIAL_PATH_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_OFFSET))();
		}

		static ::System::String* get_OUTLINE_ROOT_PATH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_OUTLINE_ROOT_PATH_OFFSET))();
		}

		static ::System::UInt32 get_BadgeSubAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGESUBAREAID_OFFSET))();
		}
	};
}
