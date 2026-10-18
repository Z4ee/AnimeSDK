#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BBD058BB94436C40_7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163027E0)
#define CLASS_2_71206B21D0A90B92_19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16302820)
#define CLASS_2_71206B21D0A90B92_19_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16302880)
#define CLASS_2_71206B21D0A90B92_19_TICK_OFFSET UNITYSDK_OFFSET(0x163028D0)
#define CLASS_2_71206B21D0A90B92_19__CTOR_OFFSET UNITYSDK_OFFSET(0x163027D0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_19_TypeDefinitionIndex = 58081;

class Class_2_71206B21D0A90B92_19 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_BBD058BB94436C40_7* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BBD058BB94436C40_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BBD058BB94436C40_7*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19_TICK_OFFSET))(this, a1);
	}
};
