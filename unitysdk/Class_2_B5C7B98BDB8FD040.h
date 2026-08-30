#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBossInfoBar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B5C7B98BDB8FD040_DISPOSE_OFFSET UNITYSDK_OFFSET(0x121EF400)
#define CLASS_2_B5C7B98BDB8FD040_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x121EF440)
#define CLASS_2_B5C7B98BDB8FD040_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x121EF530)
#define CLASS_2_B5C7B98BDB8FD040_TICK_OFFSET UNITYSDK_OFFSET(0x121EF580)
#define CLASS_2_B5C7B98BDB8FD040__CTOR_OFFSET UNITYSDK_OFFSET(0x121EF3F0)

inline static constexpr unsigned int Class_2_B5C7B98BDB8FD040_TypeDefinitionIndex = 56636;

class Class_2_B5C7B98BDB8FD040 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowBossInfoBar* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBossInfoBar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBossInfoBar*))((::PBYTE)hIl2Cpp + CLASS_2_B5C7B98BDB8FD040__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5C7B98BDB8FD040_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5C7B98BDB8FD040_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5C7B98BDB8FD040_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5C7B98BDB8FD040_TICK_OFFSET))(this, a1);
	}
};
