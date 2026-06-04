#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LockStepStatus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C3B0D41544DB2379_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C86550)
#define CLASS_2_C3B0D41544DB2379_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C86590)
#define CLASS_2_C3B0D41544DB2379_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C86690)
#define CLASS_2_C3B0D41544DB2379_TICK_OFFSET UNITYSDK_OFFSET(0x10C866E0)
#define CLASS_2_C3B0D41544DB2379__CTOR_OFFSET UNITYSDK_OFFSET(0x10C86540)

inline static constexpr unsigned int Class_2_C3B0D41544DB2379_TypeDefinitionIndex = 51512;

class Class_2_C3B0D41544DB2379 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::LockStepStatus* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockStepStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockStepStatus*))((::PBYTE)hIl2Cpp + CLASS_2_C3B0D41544DB2379__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B0D41544DB2379_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B0D41544DB2379_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B0D41544DB2379_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3B0D41544DB2379_TICK_OFFSET))(this, a1);
	}
};
