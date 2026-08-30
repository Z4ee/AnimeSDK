#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_03EFB37613466871;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F71450)
#define CLASS_3_E374445C298C7C77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17F714A0)
#define CLASS_3_E374445C298C7C77_TICK_OFFSET UNITYSDK_OFFSET(0x17F714F0)
#define CLASS_3_E374445C298C7C77__CTOR_OFFSET UNITYSDK_OFFSET(0x17F71420)

inline static constexpr unsigned int Class_3_E374445C298C7C77_TypeDefinitionIndex = 52428;

class Class_3_E374445C298C7C77 : public ::RPG::GameCore::ST_Task_1<::Class_4_03EFB37613466871*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_03EFB37613466871* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_03EFB37613466871*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_TICK_OFFSET))(this, a1);
	}
};
