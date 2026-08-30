#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowHeartDialToast; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11997A70)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11997AB0)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11997C30)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_TICK_OFFSET UNITYSDK_OFFSET(0x11997C80)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x11997A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHeartDialToastTask_TypeDefinitionIndex = 53530;

	class ShowHeartDialToastTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		// static const ::System::String* _FADE_OUT_ANIM_PARAM; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::ShowHeartDialToast* _ConfigRef; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHeartDialToast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHeartDialToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_TICK_OFFSET))(this, a1);
		}
	};
}
