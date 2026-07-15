#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163177F0)
#define CLASS_2_71206B21D0A90B92_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163178C0)
#define CLASS_2_71206B21D0A90B92_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16317870)
#define CLASS_2_71206B21D0A90B92_1_TICK_OFFSET UNITYSDK_OFFSET(0x16317C10)
#define CLASS_2_71206B21D0A90B92_1__CTOR_OFFSET UNITYSDK_OFFSET(0x163177E0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_1_TypeDefinitionIndex = 50220;

class Class_2_71206B21D0A90B92_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_FA3DB7B30E78C0CA_1* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_1*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_1_TICK_OFFSET))(this, a1);
	}
};
