#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphConnectorConfig; }
namespace NPCCrowd::AI { class PathGraphNodeConfig; }
namespace NPCCrowd::AI { class PathGraphSplineConfig; }

#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x114F5ED0)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_CONNECTORCONFIG_OFFSET UNITYSDK_OFFSET(0x114F6000)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_HEURISTICPOSITION_OFFSET UNITYSDK_OFFSET(0x114F60B0)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_ISCONNECTORNODE_OFFSET UNITYSDK_OFFSET(0x114F5FE0)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_ISSPLINENODE_OFFSET UNITYSDK_OFFSET(0x114F5F10)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_SPLINECONFIG_OFFSET UNITYSDK_OFFSET(0x114F5F30)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0x114F5E90)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_RANDRANGE_1_OFFSET UNITYSDK_OFFSET(0x114F6140)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME_RANDRANGE_OFFSET UNITYSDK_OFFSET(0x114F60D0)
#define NPCCROWD_AI_PATHGRAPHNODERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x114F6190)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphNodeRuntime_TypeDefinitionIndex = 71765;

	class PathGraphNodeRuntime : public ::System::Object
	{
	public:
		::NPCCrowd::AI::PathGraphNodeConfig* Config; // 0x10
		::System::Boolean enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Boolean get_IsSplineNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_ISSPLINENODE_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphSplineConfig* get_SplineConfig()
		{
			return ((::NPCCrowd::AI::PathGraphSplineConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_SPLINECONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsConnectorNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_ISCONNECTORNODE_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphConnectorConfig* get_ConnectorConfig()
		{
			return ((::NPCCrowd::AI::PathGraphConnectorConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_CONNECTORCONFIG_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_HeuristicPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_GET_HEURISTICPOSITION_OFFSET))(this);
		}

		static ::System::Single RandRange(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_RANDRANGE_OFFSET))(min, max);
		}

		static ::System::Int32 RandRange_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODERUNTIME_RANDRANGE_1_OFFSET))(min, max);
		}
	};
}
