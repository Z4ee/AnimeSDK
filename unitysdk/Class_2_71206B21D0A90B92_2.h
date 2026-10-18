#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_901920CBD21546A6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C26D0)
#define CLASS_2_71206B21D0A90B92_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C27A0)
#define CLASS_2_71206B21D0A90B92_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155C2750)
#define CLASS_2_71206B21D0A90B92_2_TICK_OFFSET UNITYSDK_OFFSET(0x155C2850)
#define CLASS_2_71206B21D0A90B92_2__CTOR_OFFSET UNITYSDK_OFFSET(0x155C26C0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_2_TypeDefinitionIndex = 52612;

class Class_2_71206B21D0A90B92_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_901920CBD21546A6* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_901920CBD21546A6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_901920CBD21546A6*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2_TICK_OFFSET))(this, a1);
	}
};
