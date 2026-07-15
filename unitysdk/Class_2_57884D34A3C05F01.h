#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddFinishMissionData_ResultValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_57884D34A3C05F01_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B68490)
#define CLASS_2_57884D34A3C05F01_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B684D0)
#define CLASS_2_57884D34A3C05F01_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16B68580)
#define CLASS_2_57884D34A3C05F01_TICK_OFFSET UNITYSDK_OFFSET(0x16B685D0)
#define CLASS_2_57884D34A3C05F01__CTOR_OFFSET UNITYSDK_OFFSET(0x16B68480)

inline static constexpr unsigned int Class_2_57884D34A3C05F01_TypeDefinitionIndex = 49934;

class Class_2_57884D34A3C05F01 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AddFinishMissionData_ResultValue* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
