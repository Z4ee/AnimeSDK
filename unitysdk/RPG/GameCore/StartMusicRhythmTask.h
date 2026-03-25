#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StartMusicRhythmTask_Phase.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class StartMusicRhythm; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA3EA40)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONPUZZLEEVENT_OFFSET UNITYSDK_OFFSET(0xAA3F460)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA3E5C0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA3E9F0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_SHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xAA3F110)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_TICK_OFFSET UNITYSDK_OFFSET(0xAA3EBD0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3E450)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONCHOOSELEVELPAGEEXIT_OFFSET UNITYSDK_OFFSET(0xAA3E910)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMAINPAGEENTER_OFFSET UNITYSDK_OFFSET(0xAA3F5F0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMUSICREADYPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xAA3F590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMusicRhythmTask_TypeDefinitionIndex = 43149;

	class StartMusicRhythmTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::Class_3_5775A4FEC79026BC* _FormalFlow; // 0x18
		::RPG::Client::MusicRhythmBoard* _MusicBoard; // 0x20
		::RPG::GameCore::StartMusicRhythm* _Config; // 0x28
		::RPG::GameCore::TaskContext* _Context; // 0x30
		::Class_3_5775A4FEC79026BC* _OnShowUi; // 0x38
		::RPG::Client::LuaUIController* _MainPage; // 0x40
		::Class_3_5775A4FEC79026BC* _TutorialFlow; // 0x48
		::System::Single _TransitionTimer; // 0x50
		::System::Boolean _AddListener; // 0x54
		::System::Single _TransitionDuration; // 0x58
		::RPG::GameCore::StartMusicRhythmTask_Phase _Phase; // 0x5C

		::System::Void _ctor(::RPG::GameCore::TaskContext* pContext, ::RPG::GameCore::StartMusicRhythm* pConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMusicRhythm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__CTOR_OFFSET))(this, pContext, pConfig);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ShowMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_SHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void OnPuzzleEvent(::Class_0_16E4307DCC419505_375* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONPUZZLEEVENT_OFFSET))(this, evt);
		}

		::System::Void _OnMusicReadyPageClose(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMUSICREADYPAGECLOSE_OFFSET))(this, arg);
		}

		::System::Void _OnMainPageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMAINPAGEENTER_OFFSET))(this);
		}

		::System::Void _OnChooseLevelPageExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONCHOOSELEVELPAGEEXIT_OFFSET))(this);
		}
	};
}
