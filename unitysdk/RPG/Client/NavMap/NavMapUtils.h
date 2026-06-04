#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IChestIcon; }
namespace RPG::Client { class IMapIcon; }
namespace RPG::Client { class IMissionIcon; }
namespace RPG::Client { class ITeleportableIcon; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class ITab; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class LevelNavmapArea; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETAREAID_OFFSET UNITYSDK_OFFSET(0xC27B7D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETCHESTICONS_OFFSET UNITYSDK_OFFSET(0xC27CAF0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETDISTRICTDEF_OFFSET UNITYSDK_OFFSET(0xC27B9F0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETFIRSTTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0xC27AFE0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETICONS_OFFSET UNITYSDK_OFFSET(0xC27C7D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLAYER_OFFSET UNITYSDK_OFFSET(0xC27B650)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLEVELNAVMAPAREA_OFFSET UNITYSDK_OFFSET(0xC27BE00)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMAPPINGINFOICONS_OFFSET UNITYSDK_OFFSET(0xC27CC20)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMISSIONICONS_OFFSET UNITYSDK_OFFSET(0xC27C9C0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETNPCDEF_OFFSET UNITYSDK_OFFSET(0xC27B940)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPDEF_OFFSET UNITYSDK_OFFSET(0xC27B890)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPINITIALWORLDPOSITIONSHOWINMAP_OFFSET UNITYSDK_OFFSET(0xC27C480)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETRESOLVEDPROMISE_OFFSET UNITYSDK_OFFSET(0xC27C270)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONID_OFFSET UNITYSDK_OFFSET(0xC27B710)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONSBYAREAID_OFFSET UNITYSDK_OFFSET(0xC27BD10)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSPACETYPESORTID_OFFSET UNITYSDK_OFFSET(0xC27AF70)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSUBMAPLINKICONLAYER_OFFSET UNITYSDK_OFFSET(0xC27B4B0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETTELEPORTABLEICONS_OFFSET UNITYSDK_OFFSET(0xC27C930)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_1_OFFSET UNITYSDK_OFFSET(0xC27BF70)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_OFFSET UNITYSDK_OFFSET(0xC27BE90)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_1_OFFSET UNITYSDK_OFFSET(0xC27AD10)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xC27AC80)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISRAIDMAP_OFFSET UNITYSDK_OFFSET(0xC27C2E0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTELEPORTMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xC27C1D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTRAINTAB_OFFSET UNITYSDK_OFFSET(0xC27AD60)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISUNLOCKAFTERENTERFLOOR_OFFSET UNITYSDK_OFFSET(0xC27AAF0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_MERGEMAINTABS_OFFSET UNITYSDK_OFFSET(0xC27AE50)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETDISTRICTDEF_OFFSET UNITYSDK_OFFSET(0xC27BC40)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETNPCDEF_OFFSET UNITYSDK_OFFSET(0xC27BB70)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETPROPDEF_OFFSET UNITYSDK_OFFSET(0xC27BAA0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMapUtils_TypeDefinitionIndex = 69674;

	class NavMapUtils : public ::System::Object
	{
	public:
		// static const ::System::Int32 InvalidLayerNum = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 TrainWorldID = 0x64; // 0x0

		static ::System::Boolean IsUnlockAfterEnterFloor(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISUNLOCKAFTERENTERFLOOR_OFFSET))(a1);
		}

		static ::System::Boolean IsInCurrentScene(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsInCurrentScene_1(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_1_OFFSET))(a1);
		}

		static ::System::Boolean IsTrainTab(::RPG::Client::NavMap::ITab* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::ITab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTRAINTAB_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::IMainTab*>* MergeMainTabs(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::IMainTab*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_MERGEMAINTABS_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetSpaceTypeSortID(::RPG::GameCore::MapSpaceType a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::MapSpaceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSPACETYPESORTID_OFFSET))(a1);
		}

		static ::RPG::Client::SubMissionData* GetFirstTrackingSubMissionForShow(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ITab*>* a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ITab*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETFIRSTTRACKINGSUBMISSIONFORSHOW_OFFSET))(a1);
		}

		static ::System::Int32 GetSubMapLinkIconLayer(::RPG::Client::NavMap::ICartography* a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::RPG::Client::NavMap::ICartography*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSUBMAPLINKICONLAYER_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetLayer(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLAYER_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetSectionID(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONID_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetAreaID(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETAREAID_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::MapPropDef* GetPropDef(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::MapPropDef*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPDEF_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::MapNpcDef* GetNpcDef(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETNPCDEF_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::MapDistrictDef* GetDistrictDef(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETDISTRICTDEF_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryGetPropDef(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::MapPropDef*& a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapPropDef*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETPROPDEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryGetNpcDef(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::MapNpcDef*& a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETNPCDEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryGetDistrictDef(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::MapDistrictDef*& a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapDistrictDef*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETDISTRICTDEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::RPG::GameCore::LevelMinimapSection*>* GetSectionsByAreaID(::RPG::GameCore::LevelNavmapConfig* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelMinimapSection*>*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONSBYAREAID_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LevelNavmapArea* GetLevelNavmapArea(::RPG::GameCore::LevelNavmapConfig* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLEVELNAVMAPAREA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsFloorUnlockInTargetVerse(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsFloorUnlockInTargetVerse_1(::System::UInt32 a1, ::RPG::Client::VerseParam a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsTeleportMappingInfo(::RPG::GameCore::MappingInfoRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTELEPORTMAPPINGINFO_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>* GetResolvedPromise(::RPG::Client::NavMap::ICartographer* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>*(*)(::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETRESOLVEDPROMISE_OFFSET))(a1);
		}

		static ::System::Boolean IsRaidMap(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISRAIDMAP_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetPropInitialWorldPositionShowInMap(::RPG::Client::MapPropDef* a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPINITIALWORLDPOSITIONSHOWINMAP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMapIcon*>* GetIcons(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMapIcon*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETICONS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>* GetTeleportableIcons(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETTELEPORTABLEICONS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMissionIcon*>* GetMissionIcons(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMissionIcon*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMISSIONICONS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IChestIcon*>* GetChestIcons(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IChestIcon*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETCHESTICONS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* GetMappingInfoIcons(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMAPPINGINFOICONS_OFFSET))(a1);
		}
	};
}
