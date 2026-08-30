#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddFinishMissionData_ResultValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_57884D34A3C05F01_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184CE6E0)
#define CLASS_2_57884D34A3C05F01_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184CE720)
#define CLASS_2_57884D34A3C05F01_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x184CE7D0)
#define CLASS_2_57884D34A3C05F01_TICK_OFFSET UNITYSDK_OFFSET(0x184CE820)
#define CLASS_2_57884D34A3C05F01__CTOR_OFFSET UNITYSDK_OFFSET(0x184CE6D0)

inline static constexpr unsigned int Class_2_57884D34A3C05F01_TypeDefinitionIndex = 52595;

class Class_2_57884D34A3C05F01 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::AddFinishMissionData_ResultValue* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_ResultValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_ResultValue*))((::PBYTE)hIl2Cpp + CLASS_2_57884D34A3C05F01__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57884D34A3C05F01_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57884D34A3C05F01_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57884D34A3C05F01_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57884D34A3C05F01_TICK_OFFSET))(this, a1);
	}
};
