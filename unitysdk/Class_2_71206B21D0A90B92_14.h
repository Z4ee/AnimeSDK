#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_D3276F1532033C48;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_14_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB365AB0)
#define CLASS_2_71206B21D0A90B92_14_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB365A70)
#define CLASS_2_71206B21D0A90B92_14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB365B00)
#define CLASS_2_71206B21D0A90B92_14_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB365D20)
#define CLASS_2_71206B21D0A90B92_14_TICK_OFFSET UNITYSDK_OFFSET(0xB365D70)
#define CLASS_2_71206B21D0A90B92_14__CTOR_OFFSET UNITYSDK_OFFSET(0xB365A60)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_14_TypeDefinitionIndex = 53091;

class Class_2_71206B21D0A90B92_14 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_D3276F1532033C48* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D3276F1532033C48* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D3276F1532033C48*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_14__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_14_GETCONFIG_OFFSET))(this);
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
