#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_83665B095F1535B5_16;
class Class_2_E3332B678B8C5C07;
class Class_3_47866C0C90C73674;
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE49CB0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ENDLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE4A210)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_FINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xCE4A140)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_GET_DEFAULTAREANAME_OFFSET UNITYSDK_OFFSET(0xCE4A2B0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_GET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE4A2A0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xCE499E0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCE497C0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET UNITYSDK_OFFSET(0xCE49B40)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISLEVELGRAPHEXECUTING_OFFSET UNITYSDK_OFFSET(0xCE4A040)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISLEVELGRAPHFINISH_OFFSET UNITYSDK_OFFSET(0xCE4A0C0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE49AE0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_MARKLEVELGRAPHFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCE4A190)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xCE49C20)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCE49C70)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xCE49DF0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xCE4A2D0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_RESTARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE49E80)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_SETGRAPHENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCE49F30)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_SET_DEFAULTAREANAME_OFFSET UNITYSDK_OFFSET(0xCE4A2C0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCE49930)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE49E30)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_STARTSUBLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE47FF0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_STOPSUBLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE49050)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xCE49FD0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4A3F0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__DISPOSESUBGRAPHS_OFFSET UNITYSDK_OFFSET(0xCE49250)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__INITSUBGRAPHS_OFFSET UNITYSDK_OFFSET(0xCE49460)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__ONSUBLEVELGRAPHEND_OFFSET UNITYSDK_OFFSET(0xCE491C0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__REMOVEFINISHEDSUBGRAPHS_OFFSET UNITYSDK_OFFSET(0xCE495B0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT__RESETSUBGRAPHS_OFFSET UNITYSDK_OFFSET(0xCE492A0)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCE4A4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphComponent_TypeDefinitionIndex = 53845;

	class LevelGraphComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* _DefaultAreaName_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _FinishedSubGraphs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_E3332B678B8C5C07*>* _SubGraphs; // 0x28
		::RPG::GameCore::LevelGraph* _LevelGraph; // 0x30
		::System::Boolean _HasFinishedGraph; // 0x38
		::System::Int32 _NextSubGraphID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT__CTOR_OFFSET))(this);
		}

		::Class_2_E3332B678B8C5C07* StartSubLevelGraph(::RPG::GameCore::LevelGraphConfig* a1, ::System::String* a2, ::RPG::GameCore::LevelGraphValueSource* a3)
		{
			return ((::Class_2_E3332B678B8C5C07*(*)(::PVOID, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_STARTSUBLEVELGRAPH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopSubLevelGraph(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_STOPSUBLEVELGRAPH_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSubLevelGraphEnd(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT__ONSUBLEVELGRAPHEND_OFFSET))(this, a1);
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

		::System::Void InitComponent(::Class_3_47866C0C90C73674* a1, ::RPG::GameCore::LevelGraphConfig* a2, ::System::String* a3, ::RPG::GameCore::LevelGraphValueSource* a4, ::RPG::GameCore::LevelGraphValueSource* a5, ::Class_1_83665B095F1535B5_16* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_47866C0C90C73674*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*, ::RPG::GameCore::LevelGraphValueSource*, ::Class_1_83665B095F1535B5_16*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean IsPerformanceLevelGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISPERFORMANCELEVELGRAPH_OFFSET))(this);
		}

		::System::Boolean IsBelongToStandalonePerformanceEnv()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET))(this);
		}

		::System::Boolean ShouldBlockTaskByStandalonePerformance(::Class_1_83665B095F1535B5_16* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_83665B095F1535B5_16*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void InitComponent_1(::Class_3_47866C0C90C73674* a1, ::RPG::GameCore::LevelGraph* a2, ::RPG::GameCore::LevelGraphValueSource* a3, ::RPG::GameCore::LevelGraphValueSource* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_47866C0C90C73674*, ::RPG::GameCore::LevelGraph*, ::RPG::GameCore::LevelGraphValueSource*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_INITCOMPONENT_1_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void SetGraphEndCallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_SETGRAPHENDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_TICK_OFFSET))(this, a1);
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

		::System::Void set_DefaultAreaName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_SET_DEFAULTAREANAME_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
