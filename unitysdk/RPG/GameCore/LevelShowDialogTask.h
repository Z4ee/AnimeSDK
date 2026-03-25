#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelShowDialog; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9912B0)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9912F0)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA991370)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_TICK_OFFSET UNITYSDK_OFFSET(0xA9913C0)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA9912A0)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK__ONDIALOGUECLOSED_OFFSET UNITYSDK_OFFSET(0xA991420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelShowDialogTask_TypeDefinitionIndex = 46940;

	class LevelShowDialogTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::LevelShowDialog* _ConfigRef; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* pContext, ::RPG::GameCore::LevelShowDialog* pConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelShowDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK__CTOR_OFFSET))(this, pContext, pConfig);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnDialogueClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK__ONDIALOGUECLOSED_OFFSET))(this);
		}
	};
}
