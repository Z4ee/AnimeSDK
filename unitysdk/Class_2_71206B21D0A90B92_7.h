#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_35944BE2BFE96447_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4FA780)
#define CLASS_2_71206B21D0A90B92_7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4FA580)
#define CLASS_2_71206B21D0A90B92_7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4FA6D0)
#define CLASS_2_71206B21D0A90B92_7_TICK_OFFSET UNITYSDK_OFFSET(0xC4FA720)
#define CLASS_2_71206B21D0A90B92_7__CTOR_OFFSET UNITYSDK_OFFSET(0xC4FA570)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_7_TypeDefinitionIndex = 53074;

class Class_2_71206B21D0A90B92_7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_35944BE2BFE96447_1* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_35944BE2BFE96447_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_35944BE2BFE96447_1*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_7_DISPOSE_OFFSET))(this);
	}
};
