#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_A406659BC3B2A585_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17FE23A0)
#define CLASS_2_71206B21D0A90B92_8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17FE2220)
#define CLASS_2_71206B21D0A90B92_8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17FE22F0)
#define CLASS_2_71206B21D0A90B92_8_TICK_OFFSET UNITYSDK_OFFSET(0x17FE2340)
#define CLASS_2_71206B21D0A90B92_8__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE2210)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_8_TypeDefinitionIndex = 53075;

class Class_2_71206B21D0A90B92_8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_A406659BC3B2A585_5* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_5*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_8_DISPOSE_OFFSET))(this);
	}
};
