#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSubMission; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITSUBMISSIONTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE7DC9A0)
#define RPG_GAMECORE_WAITSUBMISSIONTASK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE7DCAA0)
#define RPG_GAMECORE_WAITSUBMISSIONTASK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE7DCC70)
#define RPG_GAMECORE_WAITSUBMISSIONTASK_ONSUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xE7DCCC0)
#define RPG_GAMECORE_WAITSUBMISSIONTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE7DCAB0)
#define RPG_GAMECORE_WAITSUBMISSIONTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE7DCBC0)
#define RPG_GAMECORE_WAITSUBMISSIONTASK_REGIST_OFFSET UNITYSDK_OFFSET(0xE7DCB00)
#define RPG_GAMECORE_WAITSUBMISSIONTASK_TICK_OFFSET UNITYSDK_OFFSET(0xE7DCC10)
#define RPG_GAMECORE_WAITSUBMISSIONTASK_UNREGIST_OFFSET UNITYSDK_OFFSET(0xE7DC9F0)
#define RPG_GAMECORE_WAITSUBMISSIONTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xE7DC980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSubMissionTask_TypeDefinitionIndex = 59078;

	class WaitSubMissionTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::WaitSubMission* _ConfigRef; // 0x20
		::System::Boolean _IsRegisted; // 0x28

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSubMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSubMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_ONSKIP_OFFSET))(this);
		}

		::System::Void Regist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_REGIST_OFFSET))(this);
		}

		::System::Void Unregist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_UNREGIST_OFFSET))(this);
		}

		::System::Void OnSubmissionFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONTASK_ONSUBMISSIONFINISH_OFFSET))(this, a1);
		}
	};
}
