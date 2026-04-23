#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_071A4770D673A34D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA55E830)
#define CLASS_2_71206B21D0A90B92_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA55E900)
#define CLASS_2_71206B21D0A90B92_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA55E8B0)
#define CLASS_2_71206B21D0A90B92_2_TICK_OFFSET UNITYSDK_OFFSET(0xA55E9A0)
#define CLASS_2_71206B21D0A90B92_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA55E820)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_2_TypeDefinitionIndex = 48581;

class Class_2_71206B21D0A90B92_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_071A4770D673A34D* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_071A4770D673A34D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_071A4770D673A34D*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_2_TICK_OFFSET))(this, a1);
	}
};
