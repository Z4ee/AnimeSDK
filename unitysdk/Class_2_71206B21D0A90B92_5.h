#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_553167590F8409E8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18175E70)
#define CLASS_2_71206B21D0A90B92_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181758C0)
#define CLASS_2_71206B21D0A90B92_5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18175E20)
#define CLASS_2_71206B21D0A90B92_5_TICK_OFFSET UNITYSDK_OFFSET(0x18175EC0)
#define CLASS_2_71206B21D0A90B92_5__CTOR_OFFSET UNITYSDK_OFFSET(0x181758B0)
#define CLASS_2_71206B21D0A90B92_5__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x18175F20)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_5_TypeDefinitionIndex = 53025;

class Class_2_71206B21D0A90B92_5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_553167590F8409E8* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_553167590F8409E8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_553167590F8409E8*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_5_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_5_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_5__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
