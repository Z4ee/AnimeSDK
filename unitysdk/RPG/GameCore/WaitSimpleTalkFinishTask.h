#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSimpleTalkFinish; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAFC5A0)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAAFC6A0)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAAFCA90)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAAFC930)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAFC6B0)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAAFC880)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xAAFCB40)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_TICK_OFFSET UNITYSDK_OFFSET(0xAAFC8D0)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFC590)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK__ONSIMPLETALKFINISH_OFFSET UNITYSDK_OFFSET(0xAAFCAF0)
#define RPG_GAMECORE_WAITSIMPLETALKFINISHTASK__REMOVENOTIFY_OFFSET UNITYSDK_OFFSET(0xAAFC5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSimpleTalkFinishTask_TypeDefinitionIndex = 47595;

	class WaitSimpleTalkFinishTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::WaitSimpleTalkFinish* _ConfigRef; // 0x18
		::Class_1_5F51D4049EA87B7B* _NextTask; // 0x20
		::RPG::GameCore::TaskContext* _TaskContext; // 0x28
		::System::Boolean _NotifyFlag; // 0x30

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitSimpleTalkFinish* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _RemoveNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK__REMOVENOTIFY_OFFSET))(this);
		}

		::System::Void _OnSimpleTalkFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK__ONSIMPLETALKFINISH_OFFSET))(this, arg);
		}

		::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* next)
		{
			return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISHTASK_SETNEXTTASK_OFFSET))(this, next);
		}
	};
}
