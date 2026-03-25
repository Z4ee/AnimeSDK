#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityMusicCue; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITENTITYMUSICCUETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAFB1A0)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAAFB2B0)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK_ONMUSICCUE_OFFSET UNITYSDK_OFFSET(0xAAFB580)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAAFB530)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAFB2C0)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAAFB3B0)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK_TICK_OFFSET UNITYSDK_OFFSET(0xAAFB440)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFB110)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK__REGIST_OFFSET UNITYSDK_OFFSET(0xAAFB310)
#define RPG_GAMECORE_WAITENTITYMUSICCUETASK__UNREGIST_OFFSET UNITYSDK_OFFSET(0xAAFB210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitEntityMusicCueTask_TypeDefinitionIndex = 47557;

	class WaitEntityMusicCueTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::WaitEntityMusicCue* _ConfigRef; // 0x20
		::Class_3_5775A4FEC79026BC* _OnCueHitSeq; // 0x28
		::System::Boolean _IsRegisted; // 0x30

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitEntityMusicCue* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityMusicCue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK_ONSKIP_OFFSET))(this);
		}

		::System::Void _Regist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK__REGIST_OFFSET))(this);
		}

		::System::Void _UnRegist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK__UNREGIST_OFFSET))(this);
		}

		::System::Void OnMusicCue(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUETASK_ONMUSICCUE_OFFSET))(this, arg);
		}
	};
}
