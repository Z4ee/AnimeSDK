#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_83665B095F1535B5_19;
class Class_2_E3332B678B8C5C07;
class Class_3_C1B871875244D398;
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA98DA30)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ENDLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA98DEE0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_FINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA98DE10)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_GET_DEFAULTAREANAME_OFFSET UNITYSDK_OFFSET(0xA98DF70)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_GET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA98DF60)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xA98D760)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA98D540)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET UNITYSDK_OFFSET(0xA98D8C0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISLEVELGRAPHEXECUTING_OFFSET UNITYSDK_OFFSET(0xA98DD10)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISLEVELGRAPHFINISH_OFFSET UNITYSDK_OFFSET(0xA98DD90)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA98D860)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_MARKLEVELGRAPHFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA98DE60)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xA98D9A0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA98D9F0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xA98DAC0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_RESTARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA98DB50)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_SETGRAPHENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA98DC00)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_SET_DEFAULTAREANAME_OFFSET UNITYSDK_OFFSET(0xA98DF80)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA98D6B0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA98DB00)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_STARTSUBLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA98BE50)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_STOPSUBLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA98CD20)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xA98DCA0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA98DF90)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__DISPOSESUBGRAPHS_OFFSET UNITYSDK_OFFSET(0xA98CF00)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__INITSUBGRAPHS_OFFSET UNITYSDK_OFFSET(0xA98D170)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__ONSUBLEVELGRAPHEND_OFFSET UNITYSDK_OFFSET(0xA98CEA0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__REMOVEFINISHEDSUBGRAPHS_OFFSET UNITYSDK_OFFSET(0xA98D290)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__RESETSUBGRAPHS_OFFSET UNITYSDK_OFFSET(0xA98CF50)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA98E060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphComponent_TypeDefinitionIndex = 46447;

	class LevelGraphComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::LevelGraph* _LevelGraph; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_E3332B678B8C5C07*>* _SubGraphs; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _FinishedSubGraphs; // 0x28
		::System::String* _DefaultAreaName_k__BackingField; // 0x30
		::System::Boolean _HasFinishedGraph; // 0x38
		::System::Int32 _NextSubGraphID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT__CTOR_OFFSET))(this);
		}

		::Class_2_E3332B678B8C5C07* StartSubLevelGraph(::RPG::GameCore::LevelGraphConfig* pLevelGraphConfig, ::System::String* sLevelGraphPath, ::RPG::GameCore::LevelGraphValueSource* pValueSource)
		{
			return ((::Class_2_E3332B678B8C5C07*(*)(::PVOID, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_STARTSUBLEVELGRAPH_OFFSET))(this, pLevelGraphConfig, sLevelGraphPath, pValueSource);
		}

		::System::Void StopSubLevelGraph(::System::Int32 subGraphID, ::System::Boolean dispose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_STOPSUBLEVELGRAPH_OFFSET))(this, subGraphID, dispose);
		}

		::System::Void _OnSubLevelGraphEnd(::System::Int32 subGraphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT__ONSUBLEVELGRAPHEND_OFFSET))(this, subGraphID);
		}

		::System::Void _DisposeSubGraphs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT__DISPOSESUBGRAPHS_OFFSET))(this);
		}

		::System::Void _ResetSubGraphs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT__RESETSUBGRAPHS_OFFSET))(this);
		}

		::System::Void _InitSubGraphs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT__INITSUBGRAPHS_OFFSET))(this);
		}

		::System::Void _RemoveFinishedSubGraphs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT__REMOVEFINISHEDSUBGRAPHS_OFFSET))(this);
		}

		::System::Void InitComponent(::Class_3_C1B871875244D398* pCustomData, ::RPG::GameCore::LevelGraphConfig* graphConfig, ::System::String* sConfigPath, ::RPG::GameCore::LevelGraphValueSource* overwriteValueSource, ::RPG::GameCore::LevelGraphValueSource* extraOverrideValueSource, ::Class_1_83665B095F1535B5_19* flags)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C1B871875244D398*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*, ::RPG::GameCore::LevelGraphValueSource*, ::Class_1_83665B095F1535B5_19*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_INITCOMPONENT_OFFSET))(this, pCustomData, graphConfig, sConfigPath, overwriteValueSource, extraOverrideValueSource, flags);
		}

		::System::Boolean IsPerformanceLevelGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISPERFORMANCELEVELGRAPH_OFFSET))(this);
		}

		::System::Boolean IsBelongToStandalonePerformanceEnv()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET))(this);
		}

		::System::Boolean ShouldBlockTaskByStandalonePerformance(::Class_1_83665B095F1535B5_19* flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_83665B095F1535B5_19*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET))(this, flags);
		}

		::System::Void InitComponent_1(::Class_3_C1B871875244D398* pCustomData, ::RPG::GameCore::LevelGraph* graph, ::RPG::GameCore::LevelGraphValueSource* overwriteValueSource, ::RPG::GameCore::LevelGraphValueSource* extraOverrideValueSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C1B871875244D398*, ::RPG::GameCore::LevelGraph*, ::RPG::GameCore::LevelGraphValueSource*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_INITCOMPONENT_1_OFFSET))(this, pCustomData, graph, overwriteValueSource, extraOverrideValueSource);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnWillBeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONWILLBEDESTROY_OFFSET))(this);
		}

		::System::Void StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void ReStartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_RESTARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void SetGraphEndCallBack(::System::Action* onGraphEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_SETGRAPHENDCALLBACK_OFFSET))(this, onGraphEnd);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean IsLevelGraphExecuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISLEVELGRAPHEXECUTING_OFFSET))(this);
		}

		::System::Boolean IsLevelGraphFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISLEVELGRAPHFINISH_OFFSET))(this);
		}

		::System::Void FinishImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_FINISHIMMEDIATELY_OFFSET))(this);
		}

		::System::Void MarkLevelGraphFinishImmediatelyInPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_MARKLEVELGRAPHFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this);
		}

		::System::Void EndLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ENDLEVELGRAPH_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraph* get_LevelGraph()
		{
			return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_GET_LEVELGRAPH_OFFSET))(this);
		}

		::System::String* get_DefaultAreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_GET_DEFAULTAREANAME_OFFSET))(this);
		}

		::System::Void set_DefaultAreaName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_SET_DEFAULTAREANAME_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
