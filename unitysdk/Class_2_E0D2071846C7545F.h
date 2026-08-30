#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_FE960BFE71661018;
namespace RPG::GameCore { class StackAdditionalTeamBoostPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E0D2071846C7545F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FA4970)
#define CLASS_2_E0D2071846C7545F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FA4A10)
#define CLASS_2_E0D2071846C7545F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FA4E20)
#define CLASS_2_E0D2071846C7545F_TICK_OFFSET UNITYSDK_OFFSET(0x18FA4E70)
#define CLASS_2_E0D2071846C7545F__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA48B0)

inline static constexpr unsigned int Class_2_E0D2071846C7545F_TypeDefinitionIndex = 55828;

class Class_2_E0D2071846C7545F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StackAdditionalTeamBoostPoint* OFKGLJOAMLD; // 0x18
	::Class_1_FE960BFE71661018* MFFNFOHJGGL; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackAdditionalTeamBoostPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackAdditionalTeamBoostPoint*))((::PBYTE)hIl2Cpp + CLASS_2_E0D2071846C7545F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0D2071846C7545F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0D2071846C7545F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0D2071846C7545F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0D2071846C7545F_TICK_OFFSET))(this, a1);
	}
};
