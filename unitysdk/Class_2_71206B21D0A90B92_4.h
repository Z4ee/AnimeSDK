#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BBD058BB94436C40;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FC31C0)
#define CLASS_2_71206B21D0A90B92_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FC3290)
#define CLASS_2_71206B21D0A90B92_4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15FC3240)
#define CLASS_2_71206B21D0A90B92_4_TICK_OFFSET UNITYSDK_OFFSET(0x15FC33F0)
#define CLASS_2_71206B21D0A90B92_4__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC31B0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_4_TypeDefinitionIndex = 50226;

class Class_2_71206B21D0A90B92_4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_BBD058BB94436C40* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BBD058BB94436C40* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BBD058BB94436C40*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_4_TICK_OFFSET))(this, a1);
	}
};
