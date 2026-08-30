#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_50;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_14_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18926DF0)
#define CLASS_2_71206B21D0A90B92_14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18926E30)
#define CLASS_2_71206B21D0A90B92_14_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18926E80)
#define CLASS_2_71206B21D0A90B92_14_TICK_OFFSET UNITYSDK_OFFSET(0x18926ED0)
#define CLASS_2_71206B21D0A90B92_14__CTOR_OFFSET UNITYSDK_OFFSET(0x18926DE0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_14_TypeDefinitionIndex = 54127;

class Class_2_71206B21D0A90B92_14 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_FA3DB7B30E78C0CA_50* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_50* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_50*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_14_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_14_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_14_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_14_TICK_OFFSET))(this, a1);
	}
};
