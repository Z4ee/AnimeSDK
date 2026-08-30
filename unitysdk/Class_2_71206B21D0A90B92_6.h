#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_70ED0D5D94C4D7FF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15785B80)
#define CLASS_2_71206B21D0A90B92_6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15785940)
#define CLASS_2_71206B21D0A90B92_6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15785AD0)
#define CLASS_2_71206B21D0A90B92_6_TICK_OFFSET UNITYSDK_OFFSET(0x15785B20)
#define CLASS_2_71206B21D0A90B92_6__CTOR_OFFSET UNITYSDK_OFFSET(0x15785930)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_6_TypeDefinitionIndex = 53059;

class Class_2_71206B21D0A90B92_6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_70ED0D5D94C4D7FF* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_70ED0D5D94C4D7FF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_70ED0D5D94C4D7FF*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_6_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_6_DISPOSE_OFFSET))(this);
	}
};
