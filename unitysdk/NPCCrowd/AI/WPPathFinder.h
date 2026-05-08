#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathLineType.h"
#include "unitysdk/NPCCrowd/AI/WPPathFinder_SearchMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class Node; }
namespace NPCCrowd::AI { class Path; }
namespace NPCCrowd::AI { class WPGraphDataAssetSO; }
namespace NPCCrowd::AI { class WPGraphRuntime; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_WPPATHFINDER_COMPUTECATMULLROM_OFFSET UNITYSDK_OFFSET(0xF3E8590)
#define NPCCROWD_AI_WPPATHFINDER_COMPUTECLOSESTPOINTFROMPOINTTOLINE_OFFSET UNITYSDK_OFFSET(0xF3E8800)
#define NPCCROWD_AI_WPPATHFINDER_FINDNEARESTNODE_1_OFFSET UNITYSDK_OFFSET(0xF3E7690)
#define NPCCROWD_AI_WPPATHFINDER_FINDNEARESTNODE_OFFSET UNITYSDK_OFFSET(0xF3E74B0)
#define NPCCROWD_AI_WPPATHFINDER_FINDSHORTEDPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xF3E5510)
#define NPCCROWD_AI_WPPATHFINDER_FINDSHORTESTPATHOFNODES_OFFSET UNITYSDK_OFFSET(0xF3E53F0)
#define NPCCROWD_AI_WPPATHFINDER_FINDSHORTESTPATHOFPOINTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xF3E6740)
#define NPCCROWD_AI_WPPATHFINDER_FINDSHORTESTPATHOFPOINTS_OFFSET UNITYSDK_OFFSET(0xF3E65D0)
#define NPCCROWD_AI_WPPATHFINDER_GETCATMULLROMCURVEPATHPOINTS_OFFSET UNITYSDK_OFFSET(0xF3E7CF0)
#define NPCCROWD_AI_WPPATHFINDER_GETCLOSESTPOINTONANYPATH_OFFSET UNITYSDK_OFFSET(0xF3E7910)
#define NPCCROWD_AI_WPPATHFINDER_GETSTRAIGHTPATHPOINTS_OFFSET UNITYSDK_OFFSET(0xF3E8430)
#define NPCCROWD_AI_WPPATHFINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3E89E0)
#define NPCCROWD_AI_WPPATHFINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E89D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPPathFinder_TypeDefinitionIndex = 53059;

	class WPPathFinder : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>** StaticGet_PathList()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>**)Il2CppClass::FromTypeDefinitionIndex(WPPathFinder_TypeDefinitionIndex)->GetStaticField(0x2F4F0);
		}
		static ::System::Func_3<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::NPCCrowd::AI::Node*>** StaticGet_GetNodeFromNodeOrVector()
		{
			return (::System::Func_3<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::NPCCrowd::AI::Node*>**)Il2CppClass::FromTypeDefinitionIndex(WPPathFinder_TypeDefinitionIndex)->GetStaticField(0x2F4F8);
		}
		static ::System::Func_3<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::UnityEngine::Vector3>** StaticGet_GetPositionFromNodeOrVector()
		{
			return (::System::Func_3<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(WPPathFinder_TypeDefinitionIndex)->GetStaticField(0x2F500);
		}
		static ::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>** StaticGet_NodeList()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>**)Il2CppClass::FromTypeDefinitionIndex(WPPathFinder_TypeDefinitionIndex)->GetStaticField(0x2F508);
		}
		static ::System::Boolean* StaticGet_DrawDebugLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WPPathFinder_TypeDefinitionIndex)->GetStaticField(0xAD40);
		}
		static ::System::Single* StaticGet_DrawDebugLineDuration()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WPPathFinder_TypeDefinitionIndex)->GetStaticField(0xAD44);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER__CCTOR_OFFSET))();
		}

		static ::System::Boolean FindShortestPathOfNodes(::NPCCrowd::AI::WPGraphRuntime*& wpGraphDataAssetSo, ::System::UInt16 fromNodeID, ::System::UInt16 toNodeID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>*& result, ::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>*& resultP)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::WPGraphRuntime*&, ::System::UInt16, ::System::UInt16, ::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>*&, ::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_FINDSHORTESTPATHOFNODES_OFFSET))(wpGraphDataAssetSo, fromNodeID, toNodeID, result, resultP);
		}

		static ::System::Void FindShortestPathOfPoints(::NPCCrowd::AI::WPGraphRuntime*& wpGraphDataAssetSo, ::UnityEngine::Vector3 startPoint, ::UnityEngine::Vector3 endPoint, ::NPCCrowd::AI::PathLineType pathType, ::NPCCrowd::AI::WPPathFinder_SearchMode searchMode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& path)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::WPGraphRuntime*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NPCCrowd::AI::PathLineType, ::NPCCrowd::AI::WPPathFinder_SearchMode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_FINDSHORTESTPATHOFPOINTS_OFFSET))(wpGraphDataAssetSo, startPoint, endPoint, pathType, searchMode, path);
		}

		static ::System::UInt16 FindNearestNode(::NPCCrowd::AI::WPGraphRuntime*& wpGraphDataAssetSo, ::UnityEngine::Vector3 point)
		{
			return ((::System::UInt16(*)(::NPCCrowd::AI::WPGraphRuntime*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_FINDNEARESTNODE_OFFSET))(wpGraphDataAssetSo, point);
		}

		static ::System::UInt16 FindNearestNode_1(::NPCCrowd::AI::WPGraphDataAssetSO* wpGraphDataAssetSo, ::UnityEngine::Vector3 point)
		{
			return ((::System::UInt16(*)(::NPCCrowd::AI::WPGraphDataAssetSO*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_FINDNEARESTNODE_1_OFFSET))(wpGraphDataAssetSo, point);
		}

		static ::System::Boolean FindShortestPathOfPoints_Internal(::NPCCrowd::AI::WPGraphRuntime*& wpGraphDataAssetSo, ::UnityEngine::Vector3 startPoint, ::UnityEngine::Vector3 endPoint, ::NPCCrowd::AI::PathLineType pathType, ::NPCCrowd::AI::WPPathFinder_SearchMode searchMode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& path)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::WPGraphRuntime*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NPCCrowd::AI::PathLineType, ::NPCCrowd::AI::WPPathFinder_SearchMode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_FINDSHORTESTPATHOFPOINTS_INTERNAL_OFFSET))(wpGraphDataAssetSo, startPoint, endPoint, pathType, searchMode, path);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetStraightPathPoints(::System::Collections::Generic::List_1<::System::Object*>* nodePoints)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_GETSTRAIGHTPATHPOINTS_OFFSET))(nodePoints);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetCatmullRomCurvePathPoints(::System::Collections::Generic::List_1<::System::Object*>* nodePoints)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_GETCATMULLROMCURVEPATHPOINTS_OFFSET))(nodePoints);
		}

		static ::UnityEngine::Vector3 ComputeCatmullRom(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_COMPUTECATMULLROM_OFFSET))(p0, p1, p2, p3, t);
		}

		static ::UnityEngine::Vector3 GetClosestPointOnAnyPath(::NPCCrowd::AI::WPGraphRuntime*& wpGraphDataAssetSo, ::System::UInt16 nodeID, ::UnityEngine::Vector3 pos, ::System::UInt16& pathID)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::WPGraphRuntime*&, ::System::UInt16, ::UnityEngine::Vector3, ::System::UInt16&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_GETCLOSESTPOINTONANYPATH_OFFSET))(wpGraphDataAssetSo, nodeID, pos, pathID);
		}

		static ::UnityEngine::Vector3 ComputeClosestPointFromPointToLine(::UnityEngine::Vector3 vPt, ::UnityEngine::Vector3 vLinePt0, ::UnityEngine::Vector3 vLinePt1, ::System::Boolean& isOnExtremities)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_COMPUTECLOSESTPOINTFROMPOINTTOLINE_OFFSET))(vPt, vLinePt0, vLinePt1, isOnExtremities);
		}

		static ::System::Boolean FindShortedPathInternal(::NPCCrowd::AI::WPGraphRuntime*& wpGraphDataAssetSo, ::System::UInt16 fromNodeID, ::System::UInt16 toNodeID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>*& finalPath, ::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>*& finalPathP)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::WPGraphRuntime*&, ::System::UInt16, ::System::UInt16, ::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>*&, ::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER_FINDSHORTEDPATHINTERNAL_OFFSET))(wpGraphDataAssetSo, fromNodeID, toNodeID, finalPath, finalPathP);
		}
	};
}
