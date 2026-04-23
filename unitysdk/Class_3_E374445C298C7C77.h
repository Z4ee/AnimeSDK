#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_F0FE5FDA9D10CD3E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC716720)
#define CLASS_3_E374445C298C7C77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7167B0)
#define CLASS_3_E374445C298C7C77__CTOR_OFFSET UNITYSDK_OFFSET(0xC7166F0)

inline static constexpr unsigned int Class_3_E374445C298C7C77_TypeDefinitionIndex = 49427;

class Class_3_E374445C298C7C77 : public ::RPG::GameCore::ST_Task_1<::Class_4_F0FE5FDA9D10CD3E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F0FE5FDA9D10CD3E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F0FE5FDA9D10CD3E*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_ONTASKRESET_OFFSET))(this);
	}
};
