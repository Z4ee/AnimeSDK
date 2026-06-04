#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_326AB3CF86F66189;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1456F400)
#define CLASS_2_71206B21D0A90B92_6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1456F450)
#define CLASS_2_71206B21D0A90B92_6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1456FB80)
#define CLASS_2_71206B21D0A90B92_6_TICK_OFFSET UNITYSDK_OFFSET(0x1456FBD0)
#define CLASS_2_71206B21D0A90B92_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1456F3F0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_6_TypeDefinitionIndex = 49430;

class Class_2_71206B21D0A90B92_6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_326AB3CF86F66189* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_326AB3CF86F66189* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_326AB3CF86F66189*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_6_DISPOSE_OFFSET))(this);
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
};
