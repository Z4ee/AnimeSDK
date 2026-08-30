#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifySkillPropertyBySlot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8875CF8A827738B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185F7A20)
#define CLASS_2_8875CF8A827738B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x185F7A60)
#define CLASS_2_8875CF8A827738B7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x185F7D40)
#define CLASS_2_8875CF8A827738B7_TICK_OFFSET UNITYSDK_OFFSET(0x185F7D90)
#define CLASS_2_8875CF8A827738B7__CTOR_OFFSET UNITYSDK_OFFSET(0x185F7A10)

inline static constexpr unsigned int Class_2_8875CF8A827738B7_TypeDefinitionIndex = 55416;

class Class_2_8875CF8A827738B7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ModifySkillPropertyBySlot* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySkillPropertyBySlot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySkillPropertyBySlot*))((::PBYTE)hIl2Cpp + CLASS_2_8875CF8A827738B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8875CF8A827738B7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8875CF8A827738B7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8875CF8A827738B7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8875CF8A827738B7_TICK_OFFSET))(this, a1);
	}
};
