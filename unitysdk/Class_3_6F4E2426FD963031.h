#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class ST_Side_MuteAlertValueDecline; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6F4E2426FD963031_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11983830)
#define CLASS_3_6F4E2426FD963031_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x119838C0)
#define CLASS_3_6F4E2426FD963031__CTOR_OFFSET UNITYSDK_OFFSET(0x119837D0)

inline static constexpr unsigned int Class_3_6F4E2426FD963031_TypeDefinitionIndex = 48224;

class Class_3_6F4E2426FD963031 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_MuteAlertValueDecline*>
{
public:
	::RPG::GameCore::NPCComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*))((::PBYTE)hIl2Cpp + CLASS_3_6F4E2426FD963031__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F4E2426FD963031_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F4E2426FD963031_ONTASKRESET_OFFSET))(this);
	}
};
