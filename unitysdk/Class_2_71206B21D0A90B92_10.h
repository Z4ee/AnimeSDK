#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_326AB3CF86F66189_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_10_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D2EC10)
#define CLASS_2_71206B21D0A90B92_10_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18D2EC60)
#define CLASS_2_71206B21D0A90B92_10_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18D2F3A0)
#define CLASS_2_71206B21D0A90B92_10_TICK_OFFSET UNITYSDK_OFFSET(0x18D2F3F0)
#define CLASS_2_71206B21D0A90B92_10__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2EC00)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_10_TypeDefinitionIndex = 53147;

class Class_2_71206B21D0A90B92_10 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_326AB3CF86F66189_1* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_326AB3CF86F66189_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_326AB3CF86F66189_1*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_TICK_OFFSET))(this, a1);
	}
};
