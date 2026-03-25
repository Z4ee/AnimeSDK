#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/SubmissionLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class MissionUtils_MainMissionPerformanceInfo; }
namespace RPG::Client { class MissionUtils_SubMissionSortItem; }
namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class MainMissionPerformanceConfig; }
namespace RPG::GameCore { class PerformanceSortedItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONUTILS_CHECKISCONTROLHINTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x9BF8CD0)
#define RPG_CLIENT_MISSIONUTILS_CHECKISWORLDMISSION_OFFSET UNITYSDK_OFFSET(0x9BF8D30)
#define RPG_CLIENT_MISSIONUTILS_GETDISPLAYREWARDID_OFFSET UNITYSDK_OFFSET(0x9BF8970)
#define RPG_CLIENT_MISSIONUTILS_GETHINTMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x9BF8E60)
#define RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BFB3A0)
#define RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONSORTEDITEMS_OFFSET UNITYSDK_OFFSET(0x9BF3250)
#define RPG_CLIENT_MISSIONUTILS_GETPERFORMANCESORTEDITEM_OFFSET UNITYSDK_OFFSET(0x9BFBD60)
#define RPG_CLIENT_MISSIONUTILS_GETPREMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x9BF8A90)
#define RPG_CLIENT_MISSIONUTILS_GETREALMAINMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BFBA30)
#define RPG_CLIENT_MISSIONUTILS_GETSUBMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BFBBE0)
#define RPG_CLIENT_MISSIONUTILS_GETWAYPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x9BF8F60)
#define RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTACTIVEONECLICKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9BF9B00)
#define RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTHASONECLICKCOMPLETECONFIG_OFFSET UNITYSDK_OFFSET(0x9BF9A20)
#define RPG_CLIENT_MISSIONUTILS_ISPLAYERCLOSETOSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9BF9480)
#define RPG_CLIENT_MISSIONUTILS_PREPARESUBMISSIONMAPDATA_OFFSET UNITYSDK_OFFSET(0x9BF9270)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSEARCHALLSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9BFCFD0)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLMAINMISSION_OFFSET UNITYSDK_OFFSET(0x9BFA420)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9BFBEE0)
#define RPG_CLIENT_MISSIONUTILS_TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_OFFSET UNITYSDK_OFFSET(0x9BF9C10)
#define RPG_CLIENT_MISSIONUTILS__ADDTOSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0x9BFE210)
#define RPG_CLIENT_MISSIONUTILS__CALCULATESUBMISSIONINDENT_OFFSET UNITYSDK_OFFSET(0x9BFD5E0)
#define RPG_CLIENT_MISSIONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BFE990)
#define RPG_CLIENT_MISSIONUTILS__CLEARMAINMISSIONSORTITEM_OFFSET UNITYSDK_OFFSET(0x9BFAF10)
#define RPG_CLIENT_MISSIONUTILS__CLEARSUBMISSIONSORTITEM_OFFSET UNITYSDK_OFFSET(0x9BFC250)
#define RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0x9BFC6D0)
#define RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONMAP_OFFSET UNITYSDK_OFFSET(0x9BFC500)
#define RPG_CLIENT_MISSIONUTILS__ISPERFORMANCEINFOVALID_OFFSET UNITYSDK_OFFSET(0x9BFADB0)
#define RPG_CLIENT_MISSIONUTILS__SAMEPARENTSUBMISSIONSORT_OFFSET UNITYSDK_OFFSET(0x9BFE870)
#define RPG_CLIENT_MISSIONUTILS__SEARCHNEXTMAINMISSIONBYDFS_OFFSET UNITYSDK_OFFSET(0x9BFB100)
#define RPG_CLIENT_MISSIONUTILS__SEARCHNEXTSUBMISSIONBYDFS_OFFSET UNITYSDK_OFFSET(0x9BFDDF0)
#define RPG_CLIENT_MISSIONUTILS__SORTSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0x9BFD3C0)
#define RPG_CLIENT_MISSIONUTILS__TRYLOADMISSIONTOPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0x9BF9F00)
#define RPG_CLIENT_MISSIONUTILS__TRYLOADPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x9BFB520)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils_TypeDefinitionIndex = 53802;

	class MissionUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__subMissionVisited()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34510);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__topoStartMainMissionResult()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34518);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__topoMainMissionChildToParentMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34520);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>, ::RPG::Client::MissionUtils_MainMissionPerformanceInfo*>** StaticGet__performanceInfoMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>, ::RPG::Client::MissionUtils_MainMissionPerformanceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34528);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*>** StaticGet__subMissionParentToChildGraph()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34530);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__mainMissionVisited()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34538);
		}
		static ::RPG::GameCore::MainMissionPerformanceConfig** StaticGet__mainMissionPerformanceConfig()
		{
			return (::RPG::GameCore::MainMissionPerformanceConfig**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34540);
		}
		static ::System::String** StaticGet__mainMissionPerformanceConfigRootPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34548);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionUtils_SubMissionSortItem*>** StaticGet__subMissionMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionUtils_SubMissionSortItem*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34550);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__topoMainMissionParentToChildMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34558);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>** StaticGet__startSubMissionList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34560);
		}
		static ::System::String** StaticGet__mainMissionPerformanceIndexConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34568);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>** StaticGet__subMissionTopologicalSortResult()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34570);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*>** StaticGet__subMissionChildToParentGraph()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x34578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CCTOR_OFFSET))();
		}

		static ::System::UInt32 GetDisplayRewardID(::System::UInt32 mainMissionID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETDISPLAYREWARDID_OFFSET))(mainMissionID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPreMissionIDList(::System::UInt32 mainMissionID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETPREMISSIONIDLIST_OFFSET))(mainMissionID);
		}

		static ::System::Boolean CheckIsControlHintByDistance(::System::UInt32 submissionID, ::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_CHECKISCONTROLHINTBYDISTANCE_OFFSET))(submissionID, mainMissionID);
		}

		static ::System::Boolean CheckIsWorldMission(::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_CHECKISWORLDMISSION_OFFSET))(mainMissionID);
		}

		static ::System::Single GetHintMaxDistance(::System::Single overrideMaxDistance)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETHINTMAXDISTANCE_OFFSET))(overrideMaxDistance);
		}

		static ::System::UInt32 GetWayPointType(::System::UInt32 mainMissionID, ::System::Boolean isForceMapHint, ::RPG::GameCore::SubmissionLogicType logicType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Boolean, ::RPG::GameCore::SubmissionLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETWAYPOINTTYPE_OFFSET))(mainMissionID, isForceMapHint, logicType);
		}

		static ::System::Void PrepareSubmissionMapData(::System::UInt32 submissionID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_PREPARESUBMISSIONMAPDATA_OFFSET))(submissionID);
		}

		static ::System::Boolean IsPlayerCloseToSubMissionWaypoint(::System::UInt32 submissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISPLAYERCLOSETOSUBMISSIONWAYPOINT_OFFSET))(submissionID);
		}

		static ::System::Boolean IsAssistWayPointHasOneClickCompleteConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTHASONECLICKCOMPLETECONFIG_OFFSET))();
		}

		static ::System::Boolean IsAssistWayPointActiveOneClickComplete()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTACTIVEONECLICKCOMPLETE_OFFSET))();
		}

		static ::System::Boolean TryAssistWayPointOneClickCompleteTransfer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_MainMissionPerformanceInfo*>* GetMainMissionSortedItems(::System::UInt32 startMainMissionID, ::System::Collections::Generic::List_1<::System::UInt32>* mainMissionList)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_MainMissionPerformanceInfo*>*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONSORTEDITEMS_OFFSET))(startMainMissionID, mainMissionList);
		}

		static ::System::Void TopologicalSortAllMainMission(::System::Collections::Generic::List_1<::System::UInt32>* mainMissionList, ::System::Collections::Generic::List_1<::System::UInt32>* resultList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLMAINMISSION_OFFSET))(mainMissionList, resultList);
		}

		static ::System::UInt32 GetMainMissionIDByPerformance(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONIDBYPERFORMANCE_OFFSET))(performanceID, performanceType);
		}

		static ::System::UInt32 GetRealMainMissionIDByPerformance(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETREALMAINMISSIONIDBYPERFORMANCE_OFFSET))(performanceID, performanceType);
		}

		static ::System::UInt32 GetSubMissionIDByPerformance(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETSUBMISSIONIDBYPERFORMANCE_OFFSET))(performanceID, performanceType);
		}

		static ::RPG::GameCore::PerformanceSortedItem* GetPerformanceSortedItem(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::RPG::GameCore::PerformanceSortedItem*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETPERFORMANCESORTEDITEM_OFFSET))(performanceID, performanceType);
		}

		static ::System::Void _ClearMainMissionSortItem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CLEARMAINMISSIONSORTITEM_OFFSET))();
		}

		static ::System::Void _TryLoadPerformanceInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__TRYLOADPERFORMANCEINFO_OFFSET))();
		}

		static ::RPG::GameCore::MainMissionPerformanceConfig* _TryLoadMissionToPerformanceConfig()
		{
			return ((::RPG::GameCore::MainMissionPerformanceConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__TRYLOADMISSIONTOPERFORMANCECONFIG_OFFSET))();
		}

		static ::System::Boolean _IsPerformanceInfoValid(::System::UInt32 mainMissionID, ::System::UInt32 subMissionID, ::RPG::GameCore::PerformanceSortedItem* performanceSortedItem)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PerformanceSortedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__ISPERFORMANCEINFOVALID_OFFSET))(mainMissionID, subMissionID, performanceSortedItem);
		}

		static ::System::Void _SearchNextMainMissionByDfs(::System::UInt32 mainMissionID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SEARCHNEXTMAINMISSIONBYDFS_OFFSET))(mainMissionID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>* TopologicalSortAllSubMission(::System::UInt32 mainMissionID, ::System::Int32 indent)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLSUBMISSION_OFFSET))(mainMissionID, indent);
		}

		static ::System::Void TopologicalSearchAllSubMission(::RPG::GameCore::MainMissionInfoConfig* mainMissionInfo)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSEARCHALLSUBMISSION_OFFSET))(mainMissionInfo);
		}

		static ::System::Void _CalculateSubMissionIndent(::System::Int32 indent)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CALCULATESUBMISSIONINDENT_OFFSET))(indent);
		}

		static ::System::Boolean _SearchNextSubMissionByDfs(::RPG::Client::MissionUtils_SubMissionSortItem* sortItem)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SEARCHNEXTSUBMISSIONBYDFS_OFFSET))(sortItem);
		}

		static ::System::Void _ClearSubMissionSortItem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CLEARSUBMISSIONSORTITEM_OFFSET))();
		}

		static ::System::Void _InitSubMissionMap(::RPG::GameCore::MainMissionInfoConfig* mainMissionInfo)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONMAP_OFFSET))(mainMissionInfo);
		}

		static ::System::Void _InitSubMissionConnectGraph(::RPG::GameCore::MainMissionInfoConfig* mainMissionInfo)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONCONNECTGRAPH_OFFSET))(mainMissionInfo);
		}

		static ::System::Void _SortSubMissionConnectGraph()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SORTSUBMISSIONCONNECTGRAPH_OFFSET))();
		}

		static ::System::Int32 _SameParentSubMissionSort(::RPG::Client::MissionUtils_SubMissionSortItem* first, ::RPG::Client::MissionUtils_SubMissionSortItem* second)
		{
			return ((::System::Int32(*)(::RPG::Client::MissionUtils_SubMissionSortItem*, ::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SAMEPARENTSUBMISSIONSORT_OFFSET))(first, second);
		}

		static ::System::Void _AddToSubMissionConnectGraph(::System::UInt32 parentSubMissionID, ::System::UInt32 childSubMissionID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__ADDTOSUBMISSIONCONNECTGRAPH_OFFSET))(parentSubMissionID, childSubMissionID);
		}
	};
}
