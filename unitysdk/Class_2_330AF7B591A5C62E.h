#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifyCoolDown; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_330AF7B591A5C62E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CC6310)
#define CLASS_2_330AF7B591A5C62E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CC6350)
#define CLASS_2_330AF7B591A5C62E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CC6850)
#define CLASS_2_330AF7B591A5C62E_TICK_OFFSET UNITYSDK_OFFSET(0x15CC68A0)
#define CLASS_2_330AF7B591A5C62E__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC6300)

inline static constexpr unsigned int Class_2_330AF7B591A5C62E_TypeDefinitionIndex = 55393;

class Class_2_330AF7B591A5C62E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ModifyCoolDown* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCoolDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCoolDown*))((::PBYTE)hIl2Cpp + CLASS_2_330AF7B591A5C62E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_330AF7B591A5C62E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_330AF7B591A5C62E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_330AF7B591A5C62E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_330AF7B591A5C62E_TICK_OFFSET))(this, a1);
	}
};
