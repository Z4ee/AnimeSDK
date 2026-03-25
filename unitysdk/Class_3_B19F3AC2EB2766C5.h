#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_ElfWaiterCarrayFood; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B19F3AC2EB2766C5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113D4CA0)
#define CLASS_3_B19F3AC2EB2766C5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x113D5700)
#define CLASS_3_B19F3AC2EB2766C5__CTOR_OFFSET UNITYSDK_OFFSET(0x113D4C70)

inline static constexpr unsigned int Class_3_B19F3AC2EB2766C5_TypeDefinitionIndex = 42184;

class Class_3_B19F3AC2EB2766C5 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*))((::PBYTE)hIl2Cpp + CLASS_3_B19F3AC2EB2766C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B19F3AC2EB2766C5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B19F3AC2EB2766C5_ONTASKRESET_OFFSET))(this);
	}
};
