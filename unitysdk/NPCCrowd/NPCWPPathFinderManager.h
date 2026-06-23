#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/AI/FNodeRuntime.h"
#include "unitysdk/NPCCrowd/AI/FPathRuntime.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd { class NPCWPPathFinderManager_FindPathOfNodesCache; }
namespace NPCCrowd::AI { class Node; }
namespace NPCCrowd::AI { class Path; }
namespace NPCCrowd::AI { class WPGraphDataAssetSO; }
namespace NPCCrowd::AI { class WPGraphDataStateAssetSO; }
namespace NPCCrowd::AI { class WPGraphDataStateAssetSO_WPGraphDataState; }
namespace NPCCrowd::AI { class WPGraphRuntime; }
namespace NPCCrowd::AI { class WPGraphSectionAssetSO; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NPCCROWD_NPCWPPATHFINDERMANAGER_DRAWRUNTIMEDEBUGGER_OFFSET UNITYSDK_OFFSET(0xD444E70)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_FINDPATH_OFFSET UNITYSDK_OFFSET(0xD445610)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETALLENTERNODE_OFFSET UNITYSDK_OFFSET(0xD445120)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETARANDOMNODEOFFSET_1_OFFSET UNITYSDK_OFFSET(0xD4452E0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETARANDOMNODEOFFSET_2_OFFSET UNITYSDK_OFFSET(0xD445480)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETARANDOMNODEOFFSET_OFFSET UNITYSDK_OFFSET(0xD4451B0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETARANDOMSTARTANDEXITPATH_OFFSET UNITYSDK_OFFSET(0xD445BC0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETISJOINTNODE_OFFSET UNITYSDK_OFFSET(0xD4450B0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETNODEPOS_OFFSET UNITYSDK_OFFSET(0xD445010)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETNODE_OFFSET UNITYSDK_OFFSET(0xD444ED0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETPATHSTATE_OFFSET UNITYSDK_OFFSET(0xD444CB0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GETPATH_OFFSET UNITYSDK_OFFSET(0xD444FA0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xD443B10)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_HASPATHSTATE_OFFSET UNITYSDK_OFFSET(0xD444D20)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD443C90)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD444AE0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD444160)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xD444010)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_SETPATHSTATE_OFFSET UNITYSDK_OFFSET(0xD444C50)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_SETWPGRAPHDATA_OFFSET UNITYSDK_OFFSET(0xD444A30)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD443F20)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_TRYGETNODECOPY_OFFSET UNITYSDK_OFFSET(0xD444F30)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_TRYLOADSECTIONPATHDATA_OFFSET UNITYSDK_OFFSET(0xD444580)
#define NPCCROWD_NPCWPPATHFINDERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD444DB0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD446280)
#define NPCCROWD_NPCWPPATHFINDERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD446270)
#define NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xD446370)
#define NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4463B0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD4463F0)
#define NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD446430)
#define NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD446470)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCWPPathFinderManager_TypeDefinitionIndex = 63775;

	class NPCWPPathFinderManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>** StaticGet_resultNodeTemp()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::AI::Node*>**)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderManager_TypeDefinitionIndex)->GetStaticField(0x456A0);
		}
		static ::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>** StaticGet_resultPathTemp()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::AI::Path*>**)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderManager_TypeDefinitionIndex)->GetStaticField(0x456A8);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_sectionAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderManager_TypeDefinitionIndex)->GetStaticField(0x456B0);
		}
		static ::UnityEngine::Vector3* StaticGet_Gravity()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderManager_TypeDefinitionIndex)->GetStaticField(0x10C70);
		}
		::NPCCrowd::AI::WPGraphRuntime* wpGraphRuntime; // 0x18
		::Foundation::AssetRequestHandle _graphHandle; // 0x20
		::System::Collections::Generic::List_1<::System::UInt16>* ushortCache; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::NPCWPPathFinderManager_FindPathOfNodesCache*>* pathCaches; // 0x48
		::System::Collections::Generic::Stack_1<::NPCCrowd::NPCWPPathFinderManager_FindPathOfNodesCache*>* pathResultCaches; // 0x50
		::Foundation::AssetRequestHandle _stateHandle; // 0x58
		::NPCCrowd::NPCIDGeneratorInt* randPathIDGen; // 0x78
		::NPCCrowd::AI::WPGraphSectionAssetSO* _sectionAssetSo; // 0x80
		::System::Int32 _graphSectionID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCWPPathFinderManager* Get()
		{
			return ((::NPCCrowd::NPCWPPathFinderManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void TryLoadSectionPathData(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_TRYLOADSECTIONPATHDATA_OFFSET))(this, sectionID);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetWPGraphData(::NPCCrowd::AI::WPGraphDataAssetSO* inGraphDataAssetSo, ::NPCCrowd::AI::WPGraphDataStateAssetSO* state)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::WPGraphDataAssetSO*, ::NPCCrowd::AI::WPGraphDataStateAssetSO*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_SETWPGRAPHDATA_OFFSET))(this, inGraphDataAssetSo, state);
		}

		::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* SetPathState(::System::Int32 stateID)
		{
			return ((::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_SETPATHSTATE_OFFSET))(this, stateID);
		}

		::System::Int32 GetPathState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETPATHSTATE_OFFSET))(this);
		}

		::System::Boolean HasPathState(::System::Int32 stateID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_HASPATHSTATE_OFFSET))(this, stateID);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::NPCCrowd::AI::FNodeRuntime& GetNode(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::FNodeRuntime&(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETNODE_OFFSET))(this, ID);
		}

		::System::Boolean TryGetNodeCopy(::System::UInt16 ID, ::NPCCrowd::AI::FNodeRuntime& node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::NPCCrowd::AI::FNodeRuntime&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_TRYGETNODECOPY_OFFSET))(this, ID, node);
		}

		::NPCCrowd::AI::Path* GetPath(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::Path*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETPATH_OFFSET))(this, ID);
		}

		::UnityEngine::Vector3 GetNodePos(::System::UInt16 ID)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETNODEPOS_OFFSET))(this, ID);
		}

		::System::Boolean GetIsJointNode(::System::UInt16 ID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETISJOINTNODE_OFFSET))(this, ID);
		}

		::System::Void GetAllEnterNode(::System::Collections::Generic::List_1<::NPCCrowd::AI::FNodeRuntime>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::FNodeRuntime>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETALLENTERNODE_OFFSET))(this, result);
		}

		::System::Void DrawRuntimeDebugger(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_DRAWRUNTIMEDEBUGGER_OFFSET))(this, deltaTime);
		}

		::System::SByte GetARandomNodeOffset(::System::Int32 randIdx, ::System::UInt16 nfrom, ::System::UInt16 n2, ::UnityEngine::Vector3& offset)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int32, ::System::UInt16, ::System::UInt16, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETARANDOMNODEOFFSET_OFFSET))(this, randIdx, nfrom, n2, offset);
		}

		::System::SByte GetARandomNodeOffset_1(::System::Int32 randIdx, ::NPCCrowd::AI::FNodeRuntime& nfrom, ::NPCCrowd::AI::FNodeRuntime& n2, ::UnityEngine::Vector3& offset)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::FNodeRuntime&, ::NPCCrowd::AI::FNodeRuntime&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETARANDOMNODEOFFSET_1_OFFSET))(this, randIdx, nfrom, n2, offset);
		}

		::System::SByte GetARandomNodeOffset_2(::System::Int32 randIdx, ::NPCCrowd::AI::FNodeRuntime& n, ::NPCCrowd::AI::FPathRuntime& p, ::UnityEngine::Vector3& offset)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::FNodeRuntime&, ::NPCCrowd::AI::FPathRuntime&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETARANDOMNODEOFFSET_2_OFFSET))(this, randIdx, n, p, offset);
		}

		::System::Boolean FindPath(::System::UInt16 startPointID, ::System::UInt16 exitPointID, ::System::Collections::Generic::List_1<::System::UInt16>*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::Collections::Generic::List_1<::System::UInt16>*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_FINDPATH_OFFSET))(this, startPointID, exitPointID, result);
		}

		::System::Collections::Generic::List_1<::System::UInt16>*& GetARandomStartAndExitPath()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt16>*&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_GETARANDOMSTARTANDEXITPATH_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
