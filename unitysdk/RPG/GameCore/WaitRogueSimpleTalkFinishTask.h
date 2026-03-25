#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueSimpleTalkFinish; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAFC0F0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAAFC1F0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAAFC460)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAFC200)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAAFC3B0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xAAFC540)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_TICK_OFFSET UNITYSDK_OFFSET(0xAAFC400)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFC0E0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__ONSIMPLETALKFINISH_OFFSET UNITYSDK_OFFSET(0xAAFC4B0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__REMOVENOTIFY_OFFSET UNITYSDK_OFFSET(0xAAFC140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSimpleTalkFinishTask_TypeDefinitionIndex = 47589;

	class WaitRogueSimpleTalkFinishTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::WaitRogueSimpleTalkFinish* _ConfigRef; // 0x18
		::Class_1_5F51D4049EA87B7B* _NextTask; // 0x20
		::RPG::GameCore::TaskContext* _TaskContext; // 0x28
		::System::Boolean _NotifyFlag; // 0x30

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitRogueSimpleTalkFinish* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONSKIP_OFFSET))(this);
		}

		::System::Void _RemoveNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__REMOVENOTIFY_OFFSET))(this);
		}

		::System::Void _OnSimpleTalkFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__ONSIMPLETALKFINISH_OFFSET))(this, arg);
		}

		::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* next)
		{
			return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_SETNEXTTASK_OFFSET))(this, next);
		}
	};
}
