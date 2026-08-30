#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_6BA10DC46C47290E_4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159C1360)
#define CLASS_2_71206B21D0A90B92_19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159C13A0)
#define CLASS_2_71206B21D0A90B92_19_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159C1310)
#define CLASS_2_71206B21D0A90B92_19_TICK_OFFSET UNITYSDK_OFFSET(0x159C12B0)
#define CLASS_2_71206B21D0A90B92_19__CTOR_OFFSET UNITYSDK_OFFSET(0x159C12A0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_19_TypeDefinitionIndex = 58634;

class Class_2_71206B21D0A90B92_19 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_6BA10DC46C47290E_4* JKJPFJALGKO; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6BA10DC46C47290E_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6BA10DC46C47290E_4*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_19_ONTASKBEGIN_OFFSET))(this);
	}
};
