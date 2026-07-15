#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_GRIDFIGHTUTILS_CANROLELEVELUPBYADDCOUNT_OFFSET UNITYSDK_OFFSET(0x18FB16F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0x18FAFF60)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_1_OFFSET UNITYSDK_OFFSET(0x18FB1350)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_OFFSET UNITYSDK_OFFSET(0x18FB1220)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPLACEMENTINDEXTOPOSINDEX_OFFSET UNITYSDK_OFFSET(0x18FB2060)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPOSINDEXTOPLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x18FB2190)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPROPERTYTOFIXPOINT_OFFSET UNITYSDK_OFFSET(0x18FB3580)
#define RPG_CLIENT_GRIDFIGHTUTILS_COVERTPLACEMENTTYPEFROMREGIN_OFFSET UNITYSDK_OFFSET(0x18FB3B50)
#define RPG_CLIENT_GRIDFIGHTUTILS_COVERTREGINFROMPLACEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18FB3BA0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETCOLORSTATE_OFFSET UNITYSDK_OFFSET(0x18FB3AD0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETCURSESSIONUID_OFFSET UNITYSDK_OFFSET(0x18FB52B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETDESCDETAILOBJECTS_OFFSET UNITYSDK_OFFSET(0x18FB55D0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETDIVISIONIDBYLEVELANDPROGRESS_OFFSET UNITYSDK_OFFSET(0x18FB0D50)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETEXPAMOUNT_OFFSET UNITYSDK_OFFSET(0x18FB3420)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETFATEEQUIPRANK_OFFSET UNITYSDK_OFFSET(0x18FB5010)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINIMGPATH_OFFSET UNITYSDK_OFFSET(0x18FB2BB0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINITEMID_OFFSET UNITYSDK_OFFSET(0x18FB1F70)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTGOLDSPRITEPATH_OFFSET UNITYSDK_OFFSET(0x18FB1DE0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETHACKEQUIPRANK_OFFSET UNITYSDK_OFFSET(0x18FB4EE0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETINTROH5URL_OFFSET UNITYSDK_OFFSET(0x18FB01D0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETLEVELUPNEEDROLECOUNT_OFFSET UNITYSDK_OFFSET(0x18FB13F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETMAXPROGRESSINLEVEL_OFFSET UNITYSDK_OFFSET(0x18FB0AE0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETMINPROGRESSINLEVEL_OFFSET UNITYSDK_OFFSET(0x18FB0710)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETPLACEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18FB2360)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETPLAYERLEVELEXPBYADDEXP_OFFSET UNITYSDK_OFFSET(0x18FB2D40)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYCOLORSTRING_OFFSET UNITYSDK_OFFSET(0x18FB19F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYFRAMEPATH_OFFSET UNITYSDK_OFFSET(0x18FB1A50)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLEBUYPRICE_OFFSET UNITYSDK_OFFSET(0x18FB24D0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLELEVELUPBYADDCOUNT_OFFSET UNITYSDK_OFFSET(0x18FB17C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLEMAXSTARBYID_OFFSET UNITYSDK_OFFSET(0x18FB1590)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLESELLPRICE_OFFSET UNITYSDK_OFFSET(0x18FB2830)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGCHAPTERID_OFFSET UNITYSDK_OFFSET(0x18FB0FE0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGSECTIONID_OFFSET UNITYSDK_OFFSET(0x18FB1040)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSEASONUID_OFFSET UNITYSDK_OFFSET(0x18FB4A40)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODEICON_OFFSET UNITYSDK_OFFSET(0x18FB1CE0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODENAME_OFFSET UNITYSDK_OFFSET(0x18FB1AB0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALEXTRASEASONEXP_OFFSET UNITYSDK_OFFSET(0x18FB3F90)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALSEASONEXP_OFFSET UNITYSDK_OFFSET(0x18FB3E60)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUIPOSITION_OFFSET UNITYSDK_OFFSET(0x18FB4A90)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONIDBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x18FB0990)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x18FB05C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINGAME_OFFSET UNITYSDK_OFFSET(0x18FB5580)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINPREPARATION_OFFSET UNITYSDK_OFFSET(0x18FB54C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET__CONTENT_ID_OFFSET UNITYSDK_OFFSET(0x18FB0040)
#define RPG_CLIENT_GRIDFIGHTUTILS_HASDESCDETAILINFO_OFFSET UNITYSDK_OFFSET(0x18FB6220)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCHBYLEVEL_OFFSET UNITYSDK_OFFSET(0x18FB0260)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCH_OFFSET UNITYSDK_OFFSET(0x18FB04D0)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISEQUIPCANTUSEDBYELATIONEFFECT_OFFSET UNITYSDK_OFFSET(0x18FB5150)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISOVERCHARGEMODEUNLOCK_OFFSET UNITYSDK_OFFSET(0x18FB00C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_OVERRIDENEXTTRANSITIONGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0x18FB4890)
#define RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETCONSUMABLEITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x18FB2B00)
#define RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETEQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x18FB2A50)
#define RPG_CLIENT_GRIDFIGHTUTILS_SORTTRAITIDSBYTEAM_OFFSET UNITYSDK_OFFSET(0x18FB3030)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0x18FAFD30)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRYSHOWNEWBIELOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x18FB4200)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRYTAKEALLTUTORIALSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x18FB3BF0)
#define RPG_CLIENT_GRIDFIGHTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FB6330)
#define RPG_CLIENT_GRIDFIGHTUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB6320)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils_TypeDefinitionIndex = 61960;

	class GridFightUtils : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__DescInfoRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(GridFightUtils_TypeDefinitionIndex)->GetStaticField(0x2F310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void TransferToLauncher()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean IsOverChargeModeUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISOVERCHARGEMODEUNLOCK_OFFSET))();
		}

		static ::System::String* GetIntroH5Url()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETINTROH5URL_OFFSET))();
		}

		static ::System::UInt32 get__CONTENT_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET__CONTENT_ID_OFFSET))();
		}

		static ::System::Boolean IsDivisionExistingPromotionMatchByLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCHBYLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean IsDivisionExistingPromotionMatch(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCH_OFFSET))(a1);
		}

		static ::System::UInt32 GetUpGradedDivisionID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONID_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetUpgradedDivisionIDByProgress(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONIDBYPROGRESS_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetMaxProgressInLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETMAXPROGRESSINLEVEL_OFFSET))(a1);
		}

		static ::System::UInt32 GetMinProgressInLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETMINPROGRESSINLEVEL_OFFSET))(a1);
		}

		static ::System::UInt32 GetDivisionIDByLevelAndProgress(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETDIVISIONIDBYLEVELANDPROGRESS_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetScoringChapterID(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGCHAPTERID_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetScoringSectionID(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGSECTIONID_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CompileGridFightText(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* CompileGridFightText_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_1_OFFSET))(a1);
		}

		static ::System::Int32 GetLevelUpNeedRoleCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETLEVELUPNEEDROLECOUNT_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetRoleMaxStarByID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLEMAXSTARBYID_OFFSET))(a1);
		}

		static ::System::Boolean CanRoleLevelUpByAddCount(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CANROLELEVELUPBYADDCOUNT_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetRoleLevelUpByAddCount(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLELEVELUPBYADDCOUNT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetRarityColorString(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYCOLORSTRING_OFFSET))(a1);
		}

		static ::System::String* GetRarityFramePath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYFRAMEPATH_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetStageNodeName(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODENAME_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetStageNodeIcon(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODEICON_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetGridFightGoldSpritePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTGOLDSPRITEPATH_OFFSET))();
		}

		static ::System::UInt32 GetGridFightCoinItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINITEMID_OFFSET))();
		}

		static ::System::UInt32 ConvertPlacementIndexToPosIndex(::RPG::Client::GridFightPlacementType a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightPlacementType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPLACEMENTINDEXTOPOSINDEX_OFFSET))(a1, a2);
		}

		static ::System::UInt32 ConvertPosIndexToPlacementIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPOSINDEXTOPLACEMENTINDEX_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPlacementType GetPlacementType(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETPLACEMENTTYPE_OFFSET))(a1);
		}

		static ::System::UInt32 GetRoleBuyPrice(::System::UInt32 a1, ::System::UInt32 a2, ::System::Nullable_1<::System::UInt32> a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLEBUYPRICE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetRoleSellPrice(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLESELLPRICE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightEquipItemConfig* SafeGetEquipItemConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETEQUIPITEMCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightConsumableItemConfig* SafeGetConsumableItemConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETCONSUMABLEITEMCONFIG_OFFSET))(a1);
		}

		static ::System::String* GetGridFightCoinImgPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINIMGPATH_OFFSET))();
		}

		static ::System::Void GetPlayerLevelExpByAddExp(::System::UInt32 a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETPLAYERLEVELEXPBYADDEXP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* SortTraitIDsByTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SORTTRAITIDSBYTEAM_OFFSET))(a1);
		}

		static ::System::UInt32 GetExpAmount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETEXPAMOUNT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* ConvertPropertyToFixPoint(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPROPERTYTOFIXPOINT_OFFSET))(a1);
		}

		static ::System::String* GetColorState(::RPG::GameCore::GridFightTrailLayerQuality a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GridFightTrailLayerQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETCOLORSTATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPlacementType CovertPlacementTypeFromRegin(::RPG::GameCore::GridFightRegion a1)
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::RPG::GameCore::GridFightRegion))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COVERTPLACEMENTTYPEFROMREGIN_OFFSET))(a1);
		}

		static ::RPG::GameCore::GridFightRegion CovertReginFromPlacementType(::RPG::Client::GridFightPlacementType a1)
		{
			return ((::RPG::GameCore::GridFightRegion(*)(::RPG::Client::GridFightPlacementType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COVERTREGINFROMPLACEMENTTYPE_OFFSET))(a1);
		}

		static ::System::Boolean TryTakeAllTutorialStageReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRYTAKEALLTUTORIALSTAGEREWARD_OFFSET))();
		}

		static ::System::UInt32 GetTheoreticalSeasonExp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALSEASONEXP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 GetTheoreticalExtraSeasonExp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALEXTRASEASONEXP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryShowNewBieLoseDialog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRYSHOWNEWBIELOSEDIALOG_OFFSET))();
		}

		static ::System::Void OverrideNextTransitionGridFight()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_OVERRIDENEXTTRANSITIONGRIDFIGHT_OFFSET))();
		}

		static ::System::UInt32 GetSeasonUID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSEASONUID_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetUIPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUIPOSITION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetHackEquipRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETHACKEQUIPRANK_OFFSET))(a1);
		}

		static ::System::String* GetFateEquipRank(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETFATEEQUIPRANK_OFFSET))(a1);
		}

		static ::System::Boolean IsEquipCantUsedByElationEffect(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISEQUIPCANTUSEDBYELATIONEFFECT_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurSessionUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETCURSESSIONUID_OFFSET))();
		}

		static ::System::Boolean get_IsInGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINGAME_OFFSET))();
		}

		static ::System::Boolean get_IsInPreparation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINPREPARATION_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObjects(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETDESCDETAILOBJECTS_OFFSET))(a1);
		}

		static ::System::Boolean HasDescDetailInfo(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_HASDESCDETAILINFO_OFFSET))(a1);
		}
	};
}
