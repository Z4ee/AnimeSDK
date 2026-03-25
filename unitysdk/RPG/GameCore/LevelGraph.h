#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphState.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_19;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELGRAPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA98B2F0)
#define RPG_GAMECORE_LEVELGRAPH_FINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA98BCB0)
#define RPG_GAMECORE_LEVELGRAPH_GETTASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xA98BDE0)
#define RPG_GAMECORE_LEVELGRAPH_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA98BE30)
#define RPG_GAMECORE_LEVELGRAPH_GET_GRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xA98BE20)
#define RPG_GAMECORE_LEVELGRAPH_GET_LEVELGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0xA98BE40)
#define RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHEXECUTING_OFFSET UNITYSDK_OFFSET(0xA98B800)
#define RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHFINISH_OFFSET UNITYSDK_OFFSET(0xA98B850)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHEND_OFFSET UNITYSDK_OFFSET(0xA98B7A0)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHINIT_OFFSET UNITYSDK_OFFSET(0xA98B9E0)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA98BB20)
#define RPG_GAMECORE_LEVELGRAPH_MARKLEVELGRAPHFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA98BD80)
#define RPG_GAMECORE_LEVELGRAPH_SETDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xA98B910)
#define RPG_GAMECORE_LEVELGRAPH_SETENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA98B8A0)
#define RPG_GAMECORE_LEVELGRAPH_TICK_OFFSET UNITYSDK_OFFSET(0xA98B430)
#define RPG_GAMECORE_LEVELGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0xA98AF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraph_TypeDefinitionIndex = 46631;

	class LevelGraph : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* _InitSequeceList; // 0x10
		::RPG::GameCore::LevelGraphConfig* _GraphConfig; // 0x18
		::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* _StartSequeceList; // 0x20
		::System::Action* _DisposeCallBack; // 0x28
		::RPG::GameCore::TaskContext* _TaskContext; // 0x30
		::System::Action* _endCallBack; // 0x38
		::System::String* _ConfigPath; // 0x40
		::RPG::GameCore::LevelGraphState _LevelGraphState; // 0x48

		::System::Void _ctor(::RPG::GameCore::GameEntity* pLevelEntity, ::RPG::GameCore::LevelGraphConfig* Config, ::System::String* sConfigPath, ::Class_1_83665B095F1535B5_19* flags)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::Class_1_83665B095F1535B5_19*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH__CTOR_OFFSET))(this, pLevelEntity, Config, sConfigPath, flags);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean IsLevelGraphExecuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHEXECUTING_OFFSET))(this);
		}

		::System::Boolean IsLevelGraphFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHFINISH_OFFSET))(this);
		}

		::System::Void SetEndCallBack(::System::Action* endCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_SETENDCALLBACK_OFFSET))(this, endCallBack);
		}

		::System::Void SetDisposeCallback(::System::Action* cb, ::System::Boolean repeat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_SETDISPOSECALLBACK_OFFSET))(this, cb, repeat);
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
