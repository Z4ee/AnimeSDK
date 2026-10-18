#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_A5D6745347AC5FC1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155B5390)
#define CLASS_2_71206B21D0A90B92_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155B51C0)
#define CLASS_2_71206B21D0A90B92_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155B5340)
#define CLASS_2_71206B21D0A90B92_TICK_OFFSET UNITYSDK_OFFSET(0x155B53D0)
#define CLASS_2_71206B21D0A90B92__CTOR_OFFSET UNITYSDK_OFFSET(0x155B51B0)
#define CLASS_2_71206B21D0A90B92__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x155B5430)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_TypeDefinitionIndex = 47100;

class Class_2_71206B21D0A90B92 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_A5D6745347AC5FC1* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A5D6745347AC5FC1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A5D6745347AC5FC1*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
