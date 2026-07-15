#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphState.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_17;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELGRAPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDFD480)
#define RPG_GAMECORE_LEVELGRAPH_FINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1BDFE030)
#define RPG_GAMECORE_LEVELGRAPH_GETTASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1BDFE190)
#define RPG_GAMECORE_LEVELGRAPH_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1BDFE1E0)
#define RPG_GAMECORE_LEVELGRAPH_GET_GRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x1BDFE1D0)
#define RPG_GAMECORE_LEVELGRAPH_GET_LEVELGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0x1BDFE1F0)
#define RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHEXECUTING_OFFSET UNITYSDK_OFFSET(0x1BDFDB20)
#define RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHFINISH_OFFSET UNITYSDK_OFFSET(0x1BDFDB70)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHEND_OFFSET UNITYSDK_OFFSET(0x1BDFDAC0)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHINIT_OFFSET UNITYSDK_OFFSET(0x1BDFDD00)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1BDFDE70)
#define RPG_GAMECORE_LEVELGRAPH_MARKLEVELGRAPHFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1BDFE130)
#define RPG_GAMECORE_LEVELGRAPH_SETDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BDFDC30)
#define RPG_GAMECORE_LEVELGRAPH_SETENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BDFDBC0)
#define RPG_GAMECORE_LEVELGRAPH_TICK_OFFSET UNITYSDK_OFFSET(0x1BDFD700)
#define RPG_GAMECORE_LEVELGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFCF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraph_TypeDefinitionIndex = 55275;

	class LevelGraph : public ::System::Object
	{
	public:
		::System::String* _ConfigPath; // 0x10
		::System::Action* _endCallBack; // 0x18
		::RPG::GameCore::LevelGraphConfig* _GraphConfig; // 0x20
		::RPG::GameCore::TaskContext* _TaskContext; // 0x28
		::System::Action* _DisposeCallBack; // 0x30
		::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* _InitSequeceList; // 0x38
		::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* _StartSequeceList; // 0x40
		::RPG::GameCore::LevelGraphState _LevelGraphState; // 0x48

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelGraphConfig* a2, ::System::String* a3, ::Class_1_83665B095F1535B5_17* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::Class_1_83665B095F1535B5_17*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_TICK_OFFSET))(this, a1);
		}

		::System::Boolean IsLevelGraphExecuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHEXECUTING_OFFSET))(this);
		}

		::System::Boolean IsLevelGraphFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHFINISH_OFFSET))(this);
		}

		::System::Void SetEndCallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_SETENDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetDisposeCallback(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_SETDISPOSECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void LevelGraphInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHINIT_OFFSET))(this);
		}

		::System::Void LevelGraphStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHSTART_OFFSET))(this);
		}

		::System::Void FinishImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_FINISHIMMEDIATELY_OFFSET))(this);
		}

		::System::Void MarkLevelGraphFinishImmediatelyInPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_MARKLEVELGRAPHFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this);
		}

		::System::Void LevelGraphEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHEND_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* GetTaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_GETTASKCONTEXT_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphConfig* get_GraphConfig()
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_GET_GRAPHCONFIG_OFFSET))(this);
		}

		::System::String* get_ConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_GET_CONFIGPATH_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphState get_LevelGraphState()
		{
			return ((::RPG::GameCore::LevelGraphState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_GET_LEVELGRAPHSTATE_OFFSET))(this);
		}
	};
}
