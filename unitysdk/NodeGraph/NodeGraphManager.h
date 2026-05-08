#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

namespace NodeGraph { class NodeGraphBase; }
namespace NodeGraph { class NodeGraphGlobalVariables; }
namespace NodeGraph { class NodeGraphNormal; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_NODEGRAPHMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x161485B0)
#define NODEGRAPH_NODEGRAPHMANAGER_CLEARSPECIALNODECOUNT_OFFSET UNITYSDK_OFFSET(0x16148BD0)
#define NODEGRAPH_NODEGRAPHMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16148770)
#define NODEGRAPH_NODEGRAPHMANAGER_GETFORCERUN_OFFSET UNITYSDK_OFFSET(0x161490E0)
#define NODEGRAPH_NODEGRAPHMANAGER_GETSPECIALNODECOUNT_OFFSET UNITYSDK_OFFSET(0x161462E0)
#define NODEGRAPH_NODEGRAPHMANAGER_GET_GLOBALVARIABLES_OFFSET UNITYSDK_OFFSET(0x16146FC0)
#define NODEGRAPH_NODEGRAPHMANAGER_GET_NODEGRAPHMAP_OFFSET UNITYSDK_OFFSET(0x16146FE0)
#define NODEGRAPH_NODEGRAPHMANAGER_ISLOCK_OFFSET UNITYSDK_OFFSET(0x16148A80)
#define NODEGRAPH_NODEGRAPHMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x161488C0)
#define NODEGRAPH_NODEGRAPHMANAGER_SETFORCERUN_OFFSET UNITYSDK_OFFSET(0x16149070)
#define NODEGRAPH_NODEGRAPHMANAGER_SETLOCK_OFFSET UNITYSDK_OFFSET(0x16148B00)
#define NODEGRAPH_NODEGRAPHMANAGER_SETSPECIALNODECOUNT_OFFSET UNITYSDK_OFFSET(0x16146830)
#define NODEGRAPH_NODEGRAPHMANAGER_SET_GLOBALVARIABLES_OFFSET UNITYSDK_OFFSET(0x16146FD0)
#define NODEGRAPH_NODEGRAPHMANAGER_STARTGRAPH_OFFSET UNITYSDK_OFFSET(0x16146FF0)
#define NODEGRAPH_NODEGRAPHMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16148900)
#define NODEGRAPH_NODEGRAPHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16149180)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphManager_TypeDefinitionIndex = 50400;

	class NodeGraphManager : public ::Foundation::SingletonDisposable_1<::NodeGraph::NodeGraphManager*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* nodeRepeatCount; // 0x10
		::NodeGraph::NodeGraphGlobalVariables* _GlobalVariables_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ShowFairyBlocking; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NpcReadyState; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NodeGraph::NodeGraphNormal*>* _nodeGraphMap; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LoadingLock; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ForceRunState; // 0x40
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _handles; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER__CTOR_OFFSET))(this);
		}

		::NodeGraph::NodeGraphGlobalVariables* get_GlobalVariables()
		{
			return ((::NodeGraph::NodeGraphGlobalVariables*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_GET_GLOBALVARIABLES_OFFSET))(this);
		}

		::System::Void set_GlobalVariables(::NodeGraph::NodeGraphGlobalVariables* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphGlobalVariables*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_SET_GLOBALVARIABLES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NodeGraph::NodeGraphNormal*>* get_NodeGraphMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NodeGraph::NodeGraphNormal*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_GET_NODEGRAPHMAP_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* StartGraph(::System::Int32 configId)
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_STARTGRAPH_OFFSET))(this, configId);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_CLEARALL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_ONCREATE_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean IsLock(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_ISLOCK_OFFSET))(this, id);
		}

		::System::Void SetLock(::System::Int32 id, ::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_SETLOCK_OFFSET))(this, id, isLock);
		}

		::System::Void ClearSpecialNodeCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_CLEARSPECIALNODECOUNT_OFFSET))(this);
		}

		::System::Void SetSpecialNodeCount(::System::Int32 graphId, ::System::Int32 nodeId, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_SETSPECIALNODECOUNT_OFFSET))(this, graphId, nodeId, count);
		}

		::System::Int32 GetSpecialNodeCount(::System::Int32 graphId, ::System::Int32 nodeId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_GETSPECIALNODECOUNT_OFFSET))(this, graphId, nodeId);
		}

		::System::Void SetForceRun(::System::Int32 tag, ::System::Boolean forceRun)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_SETFORCERUN_OFFSET))(this, tag, forceRun);
		}

		::System::Boolean GetForceRun(::System::Int32 tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMANAGER_GETFORCERUN_OFFSET))(this, tag);
		}
	};
}
