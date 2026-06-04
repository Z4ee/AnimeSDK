#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_13C1105688678353;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13AB72E0)
#define CLASS_3_E374445C298C7C77_3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13AB7370)
#define CLASS_3_E374445C298C7C77_3__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB72B0)

inline static constexpr unsigned int Class_3_E374445C298C7C77_3_TypeDefinitionIndex = 50096;

class Class_3_E374445C298C7C77_3 : public ::RPG::GameCore::ST_Task_1<::Class_4_13C1105688678353*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_13C1105688678353* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_13C1105688678353*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_3_ONTASKRESET_OFFSET))(this);
	}
};
