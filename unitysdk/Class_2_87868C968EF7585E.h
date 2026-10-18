#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMissionCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_87868C968EF7585E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC941E0)
#define CLASS_2_87868C968EF7585E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC94220)
#define CLASS_2_87868C968EF7585E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC94370)
#define CLASS_2_87868C968EF7585E_TICK_OFFSET UNITYSDK_OFFSET(0xBC943C0)
#define CLASS_2_87868C968EF7585E__CTOR_OFFSET UNITYSDK_OFFSET(0xBC941D0)

inline static constexpr unsigned int Class_2_87868C968EF7585E_TypeDefinitionIndex = 53244;

class Class_2_87868C968EF7585E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetMissionCustomValue* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMissionCustomValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMissionCustomValue*))((::PBYTE)hIl2Cpp + CLASS_2_87868C968EF7585E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87868C968EF7585E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87868C968EF7585E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87868C968EF7585E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87868C968EF7585E_TICK_OFFSET))(this, a1);
	}
};
