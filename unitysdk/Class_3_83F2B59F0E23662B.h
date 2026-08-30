#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_ResetForceExitCombat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_83F2B59F0E23662B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1676CA80)
#define CLASS_3_83F2B59F0E23662B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1676CAD0)
#define CLASS_3_83F2B59F0E23662B__CTOR_OFFSET UNITYSDK_OFFSET(0x1676CA50)

inline static constexpr unsigned int Class_3_83F2B59F0E23662B_TypeDefinitionIndex = 52533;

class Class_3_83F2B59F0E23662B : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ResetForceExitCombat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ResetForceExitCombat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ResetForceExitCombat*))((::PBYTE)hIl2Cpp + CLASS_3_83F2B59F0E23662B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83F2B59F0E23662B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83F2B59F0E23662B_ONTASKRESET_OFFSET))(this);
	}
};
