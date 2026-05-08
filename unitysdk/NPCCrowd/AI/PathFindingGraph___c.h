#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphConnectorConfig_PathGraphConnection; }
namespace NPCCrowd::AI { class PathGraphNodeConfig; }
namespace NPCCrowd::AI { class PathGraphSplineConfig_PathGraphLane; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_AI_PATHFINDINGGRAPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF84BEB0)
#define NPCCROWD_AI_PATHFINDINGGRAPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF84BEF0)
#define NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_0_OFFSET UNITYSDK_OFFSET(0xF84BF00)
#define NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_2_OFFSET UNITYSDK_OFFSET(0xF84BF20)
#define NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_3_OFFSET UNITYSDK_OFFSET(0xF84BF40)
#define NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_4_OFFSET UNITYSDK_OFFSET(0xF84BF60)
#define NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_5_OFFSET UNITYSDK_OFFSET(0xF84BF80)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFindingGraph___c_TypeDefinitionIndex = 47988;

	class PathFindingGraph___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::AI::PathFindingGraph___c** StaticGet___9()
		{
			return (::NPCCrowd::AI::PathFindingGraph___c**)Il2CppClass::FromTypeDefinitionIndex(PathFindingGraph___c_TypeDefinitionIndex)->GetStaticField(0x43AB0);
		}
		static ::System::Func_2<::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane*, ::System::Boolean>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PathFindingGraph___c_TypeDefinitionIndex)->GetStaticField(0x43AB8);
		}
		static ::System::Func_2<::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection*, ::System::Int32>** StaticGet___9__3_5()
		{
			return (::System::Func_2<::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PathFindingGraph___c_TypeDefinitionIndex)->GetStaticField(0x43AC0);
		}
		static ::System::Func_2<::NPCCrowd::AI::PathGraphNodeConfig*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::NPCCrowd::AI::PathGraphNodeConfig*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PathFindingGraph___c_TypeDefinitionIndex)->GetStaticField(0x43AC8);
		}
		static ::System::Func_2<::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PathFindingGraph___c_TypeDefinitionIndex)->GetStaticField(0x43AD0);
		}
		static ::System::Func_2<::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection*, ::System::Int32>** StaticGet___9__3_4()
		{
			return (::System::Func_2<::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PathFindingGraph___c_TypeDefinitionIndex)->GetStaticField(0x43AD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitPathFindingNodes_b__3_0(::NPCCrowd::AI::PathGraphNodeConfig* t)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::PathGraphNodeConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_0_OFFSET))(this, t);
		}

		::System::Boolean _InitPathFindingNodes_b__3_2(::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane* laneConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_2_OFFSET))(this, laneConfig);
		}

		::System::Boolean _InitPathFindingNodes_b__3_3(::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane* laneConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_3_OFFSET))(this, laneConfig);
		}

		::System::Int32 _InitPathFindingNodes_b__3_4(::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection* connection)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_4_OFFSET))(this, connection);
		}

		::System::Int32 _InitPathFindingNodes_b__3_5(::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection* connection)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH___C__INITPATHFINDINGNODES_B__3_5_OFFSET))(this, connection);
		}
	};
}
