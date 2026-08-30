#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_60EE39D30B4B7A36;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1679CB00)
#define CLASS_3_E374445C298C7C77_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1679CB90)
#define CLASS_3_E374445C298C7C77_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1679CAD0)

inline static constexpr unsigned int Class_3_E374445C298C7C77_1_TypeDefinitionIndex = 53860;

class Class_3_E374445C298C7C77_1 : public ::RPG::GameCore::ST_Task_1<::Class_4_60EE39D30B4B7A36*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_60EE39D30B4B7A36* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_60EE39D30B4B7A36*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_1__CTOR_OFFSET))(this, a1, a2);
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
