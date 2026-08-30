#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowSkillTextDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_38ADFABEBD5FDAAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5C67D0)
#define CLASS_2_38ADFABEBD5FDAAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5C6810)
#define CLASS_2_38ADFABEBD5FDAAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5C68B0)
#define CLASS_2_38ADFABEBD5FDAAC_TICK_OFFSET UNITYSDK_OFFSET(0xB5C6900)
#define CLASS_2_38ADFABEBD5FDAAC__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C67C0)

inline static constexpr unsigned int Class_2_38ADFABEBD5FDAAC_TypeDefinitionIndex = 56643;

class Class_2_38ADFABEBD5FDAAC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowSkillTextDialog* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSkillTextDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSkillTextDialog*))((::PBYTE)hIl2Cpp + CLASS_2_38ADFABEBD5FDAAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38ADFABEBD5FDAAC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38ADFABEBD5FDAAC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38ADFABEBD5FDAAC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_38ADFABEBD5FDAAC_TICK_OFFSET))(this, a1);
	}
};
