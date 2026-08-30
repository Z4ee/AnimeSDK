#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetBattleEventUltraSkillCutin; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8CC5C2F91CBB10C5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163D50B0)
#define CLASS_2_8CC5C2F91CBB10C5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163D50F0)
#define CLASS_2_8CC5C2F91CBB10C5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163D5240)
#define CLASS_2_8CC5C2F91CBB10C5_TICK_OFFSET UNITYSDK_OFFSET(0x163D5290)
#define CLASS_2_8CC5C2F91CBB10C5__CTOR_OFFSET UNITYSDK_OFFSET(0x163D50A0)

inline static constexpr unsigned int Class_2_8CC5C2F91CBB10C5_TypeDefinitionIndex = 55552;

class Class_2_8CC5C2F91CBB10C5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetBattleEventUltraSkillCutin* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleEventUltraSkillCutin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleEventUltraSkillCutin*))((::PBYTE)hIl2Cpp + CLASS_2_8CC5C2F91CBB10C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CC5C2F91CBB10C5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CC5C2F91CBB10C5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CC5C2F91CBB10C5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8CC5C2F91CBB10C5_TICK_OFFSET))(this, a1);
	}
};
