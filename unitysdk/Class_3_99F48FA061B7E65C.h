#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_23D2CD7D9920A53A.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskC; }

#define CLASS_3_99F48FA061B7E65C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1711A500)
#define CLASS_3_99F48FA061B7E65C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1711A400)
#define CLASS_3_99F48FA061B7E65C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1711A4B0)
#define CLASS_3_99F48FA061B7E65C_TICK_OFFSET UNITYSDK_OFFSET(0x1711A450)
#define CLASS_3_99F48FA061B7E65C__CTOR_OFFSET UNITYSDK_OFFSET(0x1711A380)

inline static constexpr unsigned int Class_3_99F48FA061B7E65C_TypeDefinitionIndex = 55977;

class Class_3_99F48FA061B7E65C : public ::Class_2_23D2CD7D9920A53A
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskC*))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C_DISPOSE_OFFSET))(this);
	}
};
