#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEnterSafeUI; }

#define CLASS_2_EC921BDB521EAFF6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA0FC20)
#define CLASS_2_EC921BDB521EAFF6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA0FDB0)
#define CLASS_2_EC921BDB521EAFF6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA0FE30)
#define CLASS_2_EC921BDB521EAFF6_TICK_OFFSET UNITYSDK_OFFSET(0xBA0FEC0)
#define CLASS_2_EC921BDB521EAFF6__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0FC10)

inline static constexpr unsigned int Class_2_EC921BDB521EAFF6_TypeDefinitionIndex = 53446;

class Class_2_EC921BDB521EAFF6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerEnterSafeUI* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEnterSafeUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEnterSafeUI*))((::PBYTE)hIl2Cpp + CLASS_2_EC921BDB521EAFF6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC921BDB521EAFF6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC921BDB521EAFF6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC921BDB521EAFF6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC921BDB521EAFF6_TICK_OFFSET))(this, a1);
	}
};
