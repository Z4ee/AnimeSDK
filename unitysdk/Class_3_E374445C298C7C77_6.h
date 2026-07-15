#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_3EBB4202ADC83FC3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F92300)
#define CLASS_3_E374445C298C7C77_6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F92470)
#define CLASS_3_E374445C298C7C77_6__CTOR_OFFSET UNITYSDK_OFFSET(0x18F922D0)

inline static constexpr unsigned int Class_3_E374445C298C7C77_6_TypeDefinitionIndex = 51181;

class Class_3_E374445C298C7C77_6 : public ::RPG::GameCore::ST_Task_1<::Class_4_3EBB4202ADC83FC3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3EBB4202ADC83FC3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3EBB4202ADC83FC3*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_6_ONTASKRESET_OFFSET))(this);
	}
};
