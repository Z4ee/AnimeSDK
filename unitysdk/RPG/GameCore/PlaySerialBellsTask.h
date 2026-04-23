#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class AkCallbackInfo;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class MonoEffectSerialBellControl; }
namespace RPG::GameCore { class PlaySerialBells; }
namespace RPG::GameCore { class SerialBellsNoteConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define RPG_GAMECORE_PLAYSERIALBELLSTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6FF360)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6FF490)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6FF880)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_TICK_OFFSET UNITYSDK_OFFSET(0xB6FF8D0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xB6FF2D0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__DOPLAYSERIALBELLS_OFFSET UNITYSDK_OFFSET(0xB6FF6D0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__ONFINISH_OFFSET UNITYSDK_OFFSET(0xB6FFD40)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__ONSTOPSERIALBELLS_OFFSET UNITYSDK_OFFSET(0xB7001E0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__SERIALBELLSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6FF930)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xB6FFEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySerialBellsTask_TypeDefinitionIndex = 53753;

	class PlaySerialBellsTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::Client::MonoEffectSerialBellControl* _SerialBellController; // 0x20
		::RPG::GameCore::PlaySerialBells* _ConfigRef; // 0x28
		::RPG::Client::MonoEffectManager* _MonoEffectManager; // 0x30
		::Class_3_E21F6DE9B7FA4D05* _FinishSequence; // 0x38
		::RPG::Client::AttachPointMapping* _AttachPoint; // 0x40
		::System::Int32 _LoopCount; // 0x48
		::System::UInt32 _PlayingEventID; // 0x4C

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::PlaySerialBells* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlaySerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _DoPlaySerialBells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__DOPLAYSERIALBELLS_OFFSET))(this);
		}

		::System::Void _SerialBellsCallback(::System::UInt32 playingID, ::AkCallbackType cbType, ::AkCallbackInfo* cbInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__SERIALBELLSCALLBACK_OFFSET))(this, playingID, cbType, cbInfo);
		}

		::System::Void _OnStopSerialBells(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__ONSTOPSERIALBELLS_OFFSET))(this, arg);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__ONFINISH_OFFSET))(this);
		}

		::System::Void _TriggerEffect(::RPG::GameCore::SerialBellsNoteConfig* noteConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SerialBellsNoteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__TRIGGEREFFECT_OFFSET))(this, noteConfig);
		}
	};
}
