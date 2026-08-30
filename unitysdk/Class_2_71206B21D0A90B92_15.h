#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_86C17FB6003C20E6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_15_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB90F20)
#define CLASS_2_71206B21D0A90B92_15_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AB90F60)
#define CLASS_2_71206B21D0A90B92_15_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AB91240)
#define CLASS_2_71206B21D0A90B92_15_TICK_OFFSET UNITYSDK_OFFSET(0x1AB91290)
#define CLASS_2_71206B21D0A90B92_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB90F10)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_15_TypeDefinitionIndex = 55506;

class Class_2_71206B21D0A90B92_15 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_86C17FB6003C20E6* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_86C17FB6003C20E6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_86C17FB6003C20E6*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_15_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_15_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_15_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_15_TICK_OFFSET))(this, a1);
	}
};
