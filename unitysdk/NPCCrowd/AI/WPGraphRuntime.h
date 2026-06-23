#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/FNodeRuntime.h"
#include "unitysdk/NPCCrowd/AI/FPathRuntime.h"
#include "unitysdk/NPCCrowd/AI/PathLineType.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class Node; }
namespace NPCCrowd::AI { class NodeCaluateMemory; }
namespace NPCCrowd::AI { class Path; }
namespace NPCCrowd::AI { class WPGraphDataAssetSO; }
namespace NPCCrowd::AI { class WPGraphDataStateAssetSO; }
namespace NPCCrowd::AI { class WPGraphDataStateAssetSO_WPGraphDataState; }
namespace NPCCrowd::AI { class WPPathSetting; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_WPGRAPHRUNTIME_GETALLENTERNODE_OFFSET UNITYSDK_OFFSET(0xD926130)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETNODEBYIDX_OFFSET UNITYSDK_OFFSET(0xD925DA0)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETNODECALMEMORYBYIDX_OFFSET UNITYSDK_OFFSET(0xD925E20)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETNODECALMEMORY_OFFSET UNITYSDK_OFFSET(0xD925E90)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETNODECFG_OFFSET UNITYSDK_OFFSET(0xD926030)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETNODEINDEX_OFFSET UNITYSDK_OFFSET(0xD925F70)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETNODE_OFFSET UNITYSDK_OFFSET(0xD9259A0)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETPATHBETWEEN_1_OFFSET UNITYSDK_OFFSET(0xD9265B0)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETPATHBETWEEN_OFFSET UNITYSDK_OFFSET(0xD926490)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETPATHCFG_OFFSET UNITYSDK_OFFSET(0xD9263A0)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETPATH_OFFSET UNITYSDK_OFFSET(0xD925AA0)
#define NPCCROWD_AI_WPGRAPHRUNTIME_GETSTATEID_OFFSET UNITYSDK_OFFSET(0xD925BD0)
#define NPCCROWD_AI_WPGRAPHRUNTIME_HASSTATE_OFFSET UNITYSDK_OFFSET(0xD925C20)
#define NPCCROWD_AI_WPGRAPHRUNTIME_SETSTATEID_OFFSET UNITYSDK_OFFSET(0xD9254D0)
#define NPCCROWD_AI_WPGRAPHRUNTIME_TRYGETNODECOPY_OFFSET UNITYSDK_OFFSET(0xD925C80)
#define NPCCROWD_AI_WPGRAPHRUNTIME_TRYGETPATH_OFFSET UNITYSDK_OFFSET(0xD926280)
#define NPCCROWD_AI_WPGRAPHRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xD925090)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphRuntime_TypeDefinitionIndex = 68875;

	class WPGraphRuntime : public ::System::Object
	{
	public:
		::NPCCrowd::AI::WPGraphDataAssetSO* wpGraphCfg; // 0x10
		::Il2CppArray<::NPCCrowd::AI::FNodeRuntime>* nodes; // 0x18
		::NPCCrowd::AI::WPGraphDataStateAssetSO* wpGraphStateCfg; // 0x20
		::Il2CppArray<::NPCCrowd::AI::NodeCaluateMemory*>* nodeCalMemory; // 0x28
		::Il2CppArray<::System::UInt16>* pathIds; // 0x30
		::NPCCrowd::AI::WPPathSetting* graphPathSetting; // 0x38
		::Il2CppArray<::System::UInt16>* nodeIds; // 0x40
		::Il2CppArray<::NPCCrowd::AI::FPathRuntime>* paths; // 0x48
		::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* currentState; // 0x50
		::NPCCrowd::AI::PathLineType lineType; // 0x58

		::System::Void _ctor(::NPCCrowd::AI::WPGraphDataAssetSO* graphSo, ::NPCCrowd::AI::WPGraphDataStateAssetSO* stateCfg)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::WPGraphDataAssetSO*, ::NPCCrowd::AI::WPGraphDataStateAssetSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME__CTOR_OFFSET))(this, graphSo, stateCfg);
		}

		::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* SetStateID(::System::Int32 stateID)
		{
			return ((::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_SETSTATEID_OFFSET))(this, stateID);
		}

		::System::Int32 GetStateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETSTATEID_OFFSET))(this);
		}

		::System::Boolean HasState(::System::Int32 stateID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_HASSTATE_OFFSET))(this, stateID);
		}

		::System::Boolean TryGetNodeCopy(::System::UInt16 ID, ::NPCCrowd::AI::FNodeRuntime& node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::NPCCrowd::AI::FNodeRuntime&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_TRYGETNODECOPY_OFFSET))(this, ID, node);
		}

		::NPCCrowd::AI::FNodeRuntime& GetNode(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::FNodeRuntime&(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETNODE_OFFSET))(this, ID);
		}

		::NPCCrowd::AI::FNodeRuntime& GetNodeByIdx(::System::Int32 idx)
		{
			return ((::NPCCrowd::AI::FNodeRuntime&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETNODEBYIDX_OFFSET))(this, idx);
		}

		::NPCCrowd::AI::NodeCaluateMemory* GetNodeCalMemoryByIdx(::System::Int32 idx)
		{
			return ((::NPCCrowd::AI::NodeCaluateMemory*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETNODECALMEMORYBYIDX_OFFSET))(this, idx);
		}

		::NPCCrowd::AI::NodeCaluateMemory* GetNodeCalMemory(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::NodeCaluateMemory*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETNODECALMEMORY_OFFSET))(this, ID);
		}

		::System::Int32 GetNodeIndex(::System::UInt16 ID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETNODEINDEX_OFFSET))(this, ID);
		}

		::NPCCrowd::AI::Node* GetNodeCfg(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::Node*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETNODECFG_OFFSET))(this, ID);
		}

		::System::Void GetAllEnterNode(::System::Collections::Generic::List_1<::NPCCrowd::AI::FNodeRuntime>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::FNodeRuntime>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETALLENTERNODE_OFFSET))(this, result);
		}

		::System::Boolean TryGetPath(::System::UInt16 ID, ::NPCCrowd::AI::FPathRuntime& path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::NPCCrowd::AI::FPathRuntime&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_TRYGETPATH_OFFSET))(this, ID, path);
		}

		::NPCCrowd::AI::FPathRuntime GetPath(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::FPathRuntime(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETPATH_OFFSET))(this, ID);
		}

		::NPCCrowd::AI::Path* GetPathCfg(::System::UInt16 ID)
		{
			return ((::NPCCrowd::AI::Path*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETPATHCFG_OFFSET))(this, ID);
		}

		::NPCCrowd::AI::FPathRuntime GetPathBetween(::System::UInt16 from, ::System::UInt16 to)
		{
			return ((::NPCCrowd::AI::FPathRuntime(*)(::PVOID, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETPATHBETWEEN_OFFSET))(this, from, to);
		}

		::NPCCrowd::AI::FPathRuntime GetPathBetween_1(::NPCCrowd::AI::Node* from, ::NPCCrowd::AI::Node* to)
		{
			return ((::NPCCrowd::AI::FPathRuntime(*)(::PVOID, ::NPCCrowd::AI::Node*, ::NPCCrowd::AI::Node*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHRUNTIME_GETPATHBETWEEN_1_OFFSET))(this, from, to);
		}
	};
}
