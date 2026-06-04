#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32_30;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_10_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4560D0)
#define CLASS_2_71206B21D0A90B92_10_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE456110)
#define CLASS_2_71206B21D0A90B92_10_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE456160)
#define CLASS_2_71206B21D0A90B92_10_TICK_OFFSET UNITYSDK_OFFSET(0xE4561B0)
#define CLASS_2_71206B21D0A90B92_10__CTOR_OFFSET UNITYSDK_OFFSET(0xE4560C0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_10_TypeDefinitionIndex = 50361;

class Class_2_71206B21D0A90B92_10 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_06CA57680E115A32_30* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_30* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_30*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_10_TICK_OFFSET))(this, a1);
	}
};
