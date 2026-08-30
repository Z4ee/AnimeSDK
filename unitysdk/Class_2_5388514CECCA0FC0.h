#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/Guid.h"

namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5388514CECCA0FC0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7EDD90)
#define CLASS_2_5388514CECCA0FC0_METHOD_2_6E371F7870BE8E38_OFFSET UNITYSDK_OFFSET(0x1A7EE0E0)
#define CLASS_2_5388514CECCA0FC0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7EDE40)
#define CLASS_2_5388514CECCA0FC0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A7EE010)
#define CLASS_2_5388514CECCA0FC0_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x1A7EDDF0)
#define CLASS_2_5388514CECCA0FC0_TICK_OFFSET UNITYSDK_OFFSET(0x1A7EE080)
#define CLASS_2_5388514CECCA0FC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EDD70)

inline static constexpr unsigned int Class_2_5388514CECCA0FC0_TypeDefinitionIndex = 58336;

class Class_2_5388514CECCA0FC0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::PerformanceManager* CFHLPMAFJLH; // 0x20
	::Class_1_5F51D4049EA87B7B* CJHJNLGOJLA; // 0x28
	::RPG::GameCore::LevelPerformanceInitialize* OFKGLJOAMLD; // 0x30
	::System::Guid HAMICAAHNAM; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelPerformanceInitialize*))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E371F7870BE8E38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_METHOD_2_6E371F7870BE8E38_OFFSET))(this, a1);
	}
};
