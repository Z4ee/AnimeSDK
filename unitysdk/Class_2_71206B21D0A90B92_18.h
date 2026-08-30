#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_6BA10DC46C47290E_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_18_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BCE7D0)
#define CLASS_2_71206B21D0A90B92_18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BCE810)
#define CLASS_2_71206B21D0A90B92_18_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BCE780)
#define CLASS_2_71206B21D0A90B92_18_TICK_OFFSET UNITYSDK_OFFSET(0x18BCE720)
#define CLASS_2_71206B21D0A90B92_18__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCE710)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_18_TypeDefinitionIndex = 58633;

class Class_2_71206B21D0A90B92_18 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_6BA10DC46C47290E_5* JKJPFJALGKO; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6BA10DC46C47290E_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6BA10DC46C47290E_5*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_18_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_18_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_18_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_18_ONTASKBEGIN_OFFSET))(this);
	}
};
