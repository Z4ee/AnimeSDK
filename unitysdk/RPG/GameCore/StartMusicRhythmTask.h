#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StartMusicRhythmTask_Phase.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class StartMusicRhythm; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEE8960)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONPUZZLEEVENT_OFFSET UNITYSDK_OFFSET(0xCEE9350)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCEE84E0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCEE8910)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_SHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xCEE9060)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_TICK_OFFSET UNITYSDK_OFFSET(0xCEE8B20)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xCEE8370)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONCHOOSELEVELPAGEEXIT_OFFSET UNITYSDK_OFFSET(0xCEE8830)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMAINPAGEENTER_OFFSET UNITYSDK_OFFSET(0xCEE94E0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMUSICREADYPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xCEE9480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMusicRhythmTask_TypeDefinitionIndex = 49807;

	class StartMusicRhythmTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::Class_3_07C3C4D2990C49EE* _TutorialFlow; // 0x18
		::Class_3_07C3C4D2990C49EE* _OnShowUi; // 0x20
		::RPG::GameCore::TaskContext* _Context; // 0x28
		::RPG::Client::MusicRhythmBoard* _MusicBoard; // 0x30
		::RPG::GameCore::StartMusicRhythm* _Config; // 0x38
		::Class_3_07C3C4D2990C49EE* _FormalFlow; // 0x40
		::RPG::Client::LuaUIController* _MainPage; // 0x48
		::RPG::GameCore::StartMusicRhythmTask_Phase _Phase; // 0x50
		::System::Single _TransitionTimer; // 0x54
		::System::Single _TransitionDuration; // 0x58
		::System::Boolean _AddListener; // 0x5C

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartMusicRhythm* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMusicRhythm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void ShowMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_SHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void OnPuzzleEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONPUZZLEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnMusicReadyPageClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMUSICREADYPAGECLOSE_OFFSET))(this, a1);
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
