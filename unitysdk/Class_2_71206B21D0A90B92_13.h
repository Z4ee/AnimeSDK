#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_13_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16869140)
#define CLASS_2_71206B21D0A90B92_13_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16869390)
#define CLASS_2_71206B21D0A90B92_13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16869210)
#define CLASS_2_71206B21D0A90B92_13_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x168691C0)
#define CLASS_2_71206B21D0A90B92_13_TICK_OFFSET UNITYSDK_OFFSET(0x16869330)
#define CLASS_2_71206B21D0A90B92_13__CTOR_OFFSET UNITYSDK_OFFSET(0x16869130)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_13_TypeDefinitionIndex = 53520;

class Class_2_71206B21D0A90B92_13 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_FA3DB7B30E78C0CA_3* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_3*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
