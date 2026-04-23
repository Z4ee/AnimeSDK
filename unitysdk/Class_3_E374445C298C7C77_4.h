#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_13C1105688678353_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1181F060)
#define CLASS_3_E374445C298C7C77_4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1181F0F0)
#define CLASS_3_E374445C298C7C77_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1181F030)

inline static constexpr unsigned int Class_3_E374445C298C7C77_4_TypeDefinitionIndex = 49431;

class Class_3_E374445C298C7C77_4 : public ::RPG::GameCore::ST_Task_1<::Class_4_13C1105688678353_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_13C1105688678353_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_13C1105688678353_1*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_4_ONTASKRESET_OFFSET))(this);
	}
};
