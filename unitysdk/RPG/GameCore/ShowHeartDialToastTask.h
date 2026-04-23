#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowHeartDialToast; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB732C10)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB732C50)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB732DD0)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_TICK_OFFSET UNITYSDK_OFFSET(0xB732E20)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xB732C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHeartDialToastTask_TypeDefinitionIndex = 49125;

	class ShowHeartDialToastTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		// static const ::System::String* _FADE_OUT_ANIM_PARAM; // 0x0
		::RPG::GameCore::ShowHeartDialToast* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::ShowHeartDialToast* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHeartDialToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}
	};
}
