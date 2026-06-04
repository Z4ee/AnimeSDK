#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_F0FE5FDA9D10CD3E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139F7540)
#define CLASS_3_E374445C298C7C77_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139F75D0)
#define CLASS_3_E374445C298C7C77_1__CTOR_OFFSET UNITYSDK_OFFSET(0x139F7510)

inline static constexpr unsigned int Class_3_E374445C298C7C77_1_TypeDefinitionIndex = 50094;

class Class_3_E374445C298C7C77_1 : public ::RPG::GameCore::ST_Task_1<::Class_4_F0FE5FDA9D10CD3E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F0FE5FDA9D10CD3E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F0FE5FDA9D10CD3E*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_1_ONTASKRESET_OFFSET))(this);
	}
};
