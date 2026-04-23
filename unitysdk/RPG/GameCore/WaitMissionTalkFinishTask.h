#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMissionTalkFinish; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB867170)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB866F50)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB867060)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB866F60)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB866CC0)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8670C0)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_TICK_OFFSET UNITYSDK_OFFSET(0xB867110)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xB866CB0)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__ONBACKGROUNDTALKFINISH_OFFSET UNITYSDK_OFFSET(0xB867220)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__ONMISSIONTALKFINISH_OFFSET UNITYSDK_OFFSET(0xB8671C0)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__REMOVENOTIFY_OFFSET UNITYSDK_OFFSET(0xB866FB0)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__WAITBACKGROUNDTALKFINISH_OFFSET UNITYSDK_OFFSET(0xB866E70)
#define RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__WAITMISSIONTALKFINISH_OFFSET UNITYSDK_OFFSET(0xB866EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMissionTalkFinishTask_TypeDefinitionIndex = 54309;

	class WaitMissionTalkFinishTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitMissionTalkFinish* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void _WaitMissionTalkFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__WAITMISSIONTALKFINISH_OFFSET))(this);
		}

		::System::Void _OnMissionTalkFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__ONMISSIONTALKFINISH_OFFSET))(this, arg);
		}

		::System::Void _WaitBackgroundTalkFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__WAITBACKGROUNDTALKFINISH_OFFSET))(this);
		}

		::System::Void _OnBackgroundTalkFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__ONBACKGROUNDTALKFINISH_OFFSET))(this, arg);
		}

		::System::Void _RemoveNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISHTASK__REMOVENOTIFY_OFFSET))(this);
		}
	};
}
