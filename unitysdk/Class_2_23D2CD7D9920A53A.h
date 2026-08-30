#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_C33B8A52813B25A2;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBaseTask; }
namespace System { class Object; }

#define CLASS_2_23D2CD7D9920A53A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158D03F0)
#define CLASS_2_23D2CD7D9920A53A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158D0430)
#define CLASS_2_23D2CD7D9920A53A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158D04B0)
#define CLASS_2_23D2CD7D9920A53A_TICK_OFFSET UNITYSDK_OFFSET(0x158D0500)
#define CLASS_2_23D2CD7D9920A53A__CTOR_OFFSET UNITYSDK_OFFSET(0x158D0370)

inline static constexpr unsigned int Class_2_23D2CD7D9920A53A_TypeDefinitionIndex = 55973;

class Class_2_23D2CD7D9920A53A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Object* FFMHIBPLNDN; // 0x18
	::RPG::GameCore::UniversalHotFixBaseTask* OPCCJDHNKEC; // 0x20
	::System::Object* IIOFACHKJGP; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::Class_1_C33B8A52813B25A2* CDMOKNNGKCC; // 0x38
	::System::Object* PGLHDMEECHP; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixBaseTask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixBaseTask*))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23D2CD7D9920A53A_TICK_OFFSET))(this, a1);
	}
};
