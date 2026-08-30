#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_F80170BE4C142494;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F4B260)
#define CLASS_2_71206B21D0A90B92_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F4B330)
#define CLASS_2_71206B21D0A90B92_3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17F4B2E0)
#define CLASS_2_71206B21D0A90B92_3_TICK_OFFSET UNITYSDK_OFFSET(0x17F4B490)
#define CLASS_2_71206B21D0A90B92_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4B250)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_3_TypeDefinitionIndex = 52888;

class Class_2_71206B21D0A90B92_3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_F80170BE4C142494* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F80170BE4C142494* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F80170BE4C142494*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_3_TICK_OFFSET))(this, a1);
	}
};
