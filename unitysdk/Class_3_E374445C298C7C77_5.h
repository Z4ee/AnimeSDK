#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_13C1105688678353_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143B2920)
#define CLASS_3_E374445C298C7C77_5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143B29B0)
#define CLASS_3_E374445C298C7C77_5__CTOR_OFFSET UNITYSDK_OFFSET(0x143B28F0)

inline static constexpr unsigned int Class_3_E374445C298C7C77_5_TypeDefinitionIndex = 50098;

class Class_3_E374445C298C7C77_5 : public ::RPG::GameCore::ST_Task_1<::Class_4_13C1105688678353_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_13C1105688678353_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_13C1105688678353_1*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_5_ONTASKRESET_OFFSET))(this);
	}
};
