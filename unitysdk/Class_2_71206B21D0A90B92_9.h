#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_35944BE2BFE96447;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11663AF0)
#define CLASS_2_71206B21D0A90B92_9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x116638E0)
#define CLASS_2_71206B21D0A90B92_9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11663A40)
#define CLASS_2_71206B21D0A90B92_9_TICK_OFFSET UNITYSDK_OFFSET(0x11663A90)
#define CLASS_2_71206B21D0A90B92_9__CTOR_OFFSET UNITYSDK_OFFSET(0x116638D0)
#define CLASS_2_71206B21D0A90B92_9__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x11663B70)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_9_TypeDefinitionIndex = 50423;

class Class_2_71206B21D0A90B92_9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_35944BE2BFE96447* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_35944BE2BFE96447* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_35944BE2BFE96447*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_DISPOSE_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9__ONTASKBEGIN_B__3_0_OFFSET))(this);
	}
};
