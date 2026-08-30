#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertAssistantAbility; }

#define CLASS_2_DD920B5AD06A34C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A3F680)
#define CLASS_2_DD920B5AD06A34C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A3F6C0)
#define CLASS_2_DD920B5AD06A34C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A3F710)
#define CLASS_2_DD920B5AD06A34C8_TICK_OFFSET UNITYSDK_OFFSET(0x15A3F760)
#define CLASS_2_DD920B5AD06A34C8__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3F670)

inline static constexpr unsigned int Class_2_DD920B5AD06A34C8_TypeDefinitionIndex = 55967;

class Class_2_DD920B5AD06A34C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TurnInsertAssistantAbility* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TurnInsertAssistantAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TurnInsertAssistantAbility*))((::PBYTE)hIl2Cpp + CLASS_2_DD920B5AD06A34C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD920B5AD06A34C8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD920B5AD06A34C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD920B5AD06A34C8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD920B5AD06A34C8_TICK_OFFSET))(this, a1);
	}
};
