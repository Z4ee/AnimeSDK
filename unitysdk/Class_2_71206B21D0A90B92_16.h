#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_46;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_16_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB7ED70)
#define CLASS_2_71206B21D0A90B92_16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7EDB0)
#define CLASS_2_71206B21D0A90B92_16_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB7EE00)
#define CLASS_2_71206B21D0A90B92_16_TICK_OFFSET UNITYSDK_OFFSET(0xEB7EE50)
#define CLASS_2_71206B21D0A90B92_16__CTOR_OFFSET UNITYSDK_OFFSET(0xEB7ED60)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_16_TypeDefinitionIndex = 53913;

class Class_2_71206B21D0A90B92_16 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_FA3DB7B30E78C0CA_46* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_46*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_TICK_OFFSET))(this, a1);
	}
};
