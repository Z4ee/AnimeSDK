#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveEntityFromTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_67D90C18CB092682_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B75530)
#define CLASS_2_67D90C18CB092682_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B75570)
#define CLASS_2_67D90C18CB092682_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8B757B0)
#define CLASS_2_67D90C18CB092682_TICK_OFFSET UNITYSDK_OFFSET(0x8B75800)
#define CLASS_2_67D90C18CB092682__CTOR_OFFSET UNITYSDK_OFFSET(0x8B75520)

inline static constexpr unsigned int Class_2_67D90C18CB092682_TypeDefinitionIndex = 44275;

class Class_2_67D90C18CB092682 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::RemoveEntityFromTeamFormation* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveEntityFromTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveEntityFromTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_2_67D90C18CB092682__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67D90C18CB092682_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67D90C18CB092682_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67D90C18CB092682_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67D90C18CB092682_TICK_OFFSET))(this, a1);
	}
};
