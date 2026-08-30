#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152DF9A0)
#define CLASS_2_71206B21D0A90B92_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152DFA70)
#define CLASS_2_71206B21D0A90B92_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152DFA20)
#define CLASS_2_71206B21D0A90B92_2_TICK_OFFSET UNITYSDK_OFFSET(0x152DFB10)
#define CLASS_2_71206B21D0A90B92_2__CTOR_OFFSET UNITYSDK_OFFSET(0x152DF990)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_2_TypeDefinitionIndex = 52886;

class Class_2_71206B21D0A90B92_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_FA3DB7B30E78C0CA* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2__CTOR_OFFSET))(this, a1, a2);
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
