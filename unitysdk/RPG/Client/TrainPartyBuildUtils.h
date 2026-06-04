#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoRarityData.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoWorldData.h"
#include "unitysdk/RPG/GameCore/BadgeChallengeType.h"
#include "unitysdk/RPG/GameCore/BadgeType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_E1B199B3D0FB256E_1;
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFOBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xCABEEF0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0xCABEE80)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_CANCELPREVIEWPHOTO_OFFSET UNITYSDK_OFFSET(0xCABEDF0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_CREATEFAKESLOTIDTODIYITEMDICT_OFFSET UNITYSDK_OFFSET(0xCABEF30)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETAVATARPHOTORARITYDATALIST_OFFSET UNITYSDK_OFFSET(0xCABF7E0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETBADGECHALLENGETYPEBYCHALLENGEGROUPTYPE_OFFSET UNITYSDK_OFFSET(0xCAC05E0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETBADGETYPEBYCHALLENGEPEAKRANK_OFFSET UNITYSDK_OFFSET(0xCAC0630)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETCHALLENGEGROUPTYPEBYBADGECHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0xCAC0590)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETLIGHTCONEPHOTORARITYDATALIST_OFFSET UNITYSDK_OFFSET(0xCABFE90)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETPHOTOWORLDDATALIST_OFFSET UNITYSDK_OFFSET(0xCABF530)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGESUBAREAID_OFFSET UNITYSDK_OFFSET(0xCAC0FF0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_ITEM_COMMON_DYNAMIC_ITEM_ID_OFFSET UNITYSDK_OFFSET(0xCAC0750)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_TAG_OFFSET UNITYSDK_OFFSET(0xCABE6A0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_AREA_ID_OFFSET UNITYSDK_OFFSET(0xCAC0680)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_OFFSET UNITYSDK_OFFSET(0xCAC0D60)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_OFFSET UNITYSDK_OFFSET(0xCAC0B10)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_HOVER_MATERIAL_PATH_OFFSET UNITYSDK_OFFSET(0xCAC0A50)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_GOTO_ID_OFFSET UNITYSDK_OFFSET(0xCAC0950)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_UNLOCK_ID_OFFSET UNITYSDK_OFFSET(0xCAC0850)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_OUTLINE_ROOT_PATH_OFFSET UNITYSDK_OFFSET(0xCAC0FB0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_AVATAR_TAG_OFFSET UNITYSDK_OFFSET(0xCABEAC0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_LIGHT_CONE_TAG_OFFSET UNITYSDK_OFFSET(0xCABE820)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_MISSION_TAG_OFFSET UNITYSDK_OFFSET(0xCABE970)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASBADGETAG_OFFSET UNITYSDK_OFFSET(0xCABE620)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOAVATARTAG_OFFSET UNITYSDK_OFFSET(0xCABEA40)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOLIGHTCONETAG_OFFSET UNITYSDK_OFFSET(0xCABE7A0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOMISSIONTAG_OFFSET UNITYSDK_OFFSET(0xCABE8F0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ISPHOTOSLOT_OFFSET UNITYSDK_OFFSET(0xCABEB90)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_PREVIEWPHOTO_OFFSET UNITYSDK_OFFSET(0xCABECB0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS__HASTAG_OFFSET UNITYSDK_OFFSET(0xCABE5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildUtils_TypeDefinitionIndex = 63780;

	class TrainPartyBuildUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildUtils_TypeDefinitionIndex)->GetStaticField(0x58CB0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DISPLAY_WALL_BADGE_SLOT_ID_ARRAY()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildUtils_TypeDefinitionIndex)->GetStaticField(0x58CB8);
		}

		static ::System::Boolean _HasTag(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS__HASTAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasBadgeTag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASBADGETAG_OFFSET))(a1);
		}

		static ::System::Boolean HasPhotoLightConeTag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOLIGHTCONETAG_OFFSET))(a1);
		}

		static ::System::Boolean HasPhotoMissionTag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOMISSIONTAG_OFFSET))(a1);
		}

		static ::System::Boolean HasPhotoAvatarTag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOAVATARTAG_OFFSET))(a1);
		}

		static ::System::Boolean IsPhotoSlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_ISPHOTOSLOT_OFFSET))(a1);
		}

		static ::System::Void PreviewPhoto(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_PREVIEWPHOTO_OFFSET))(a1, a2);
		}

		static ::System::Void CancelPreviewPhoto(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_CANCELPREVIEWPHOTO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* AssembleDisplayAreaInfo(::Class_1_E1B199B3D0FB256E_1* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::Class_1_E1B199B3D0FB256E_1*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFO_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* AssembleDisplayAreaInfoByLocalPlayerData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFOBYLOCALPLAYERDATA_OFFSET))();
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

		static ::RPG::GameCore::ChallengeGroupType GetChallengeGroupTypeByBadgeChallengeType(::RPG::GameCore::BadgeChallengeType a1)
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::RPG::GameCore::BadgeChallengeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETCHALLENGEGROUPTYPEBYBADGECHALLENGETYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::BadgeChallengeType GetBadgeChallengeTypeByChallengeGroupType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::GameCore::BadgeChallengeType(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETBADGECHALLENGETYPEBYCHALLENGEGROUPTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::BadgeType GetBadgeTypeByChallengePeakRank(::RPG::Client::ChallengePeakRank a1)
		{
			return ((::RPG::GameCore::BadgeType(*)(::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETBADGETYPEBYCHALLENGEPEAKRANK_OFFSET))(a1);
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
