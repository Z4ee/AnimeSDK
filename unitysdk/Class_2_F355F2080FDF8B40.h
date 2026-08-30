#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_9CAA42EF32347EE5_2;
namespace RPG::GameCore { class SetTargetCrossHairVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F355F2080FDF8B40_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12852EC0)
#define CLASS_2_F355F2080FDF8B40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12852F00)
#define CLASS_2_F355F2080FDF8B40_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x128530A0)
#define CLASS_2_F355F2080FDF8B40_TICK_OFFSET UNITYSDK_OFFSET(0x128530F0)
#define CLASS_2_F355F2080FDF8B40__CTOR_OFFSET UNITYSDK_OFFSET(0x12852E70)

inline static constexpr unsigned int Class_2_F355F2080FDF8B40_TypeDefinitionIndex = 56613;

class Class_2_F355F2080FDF8B40 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetTargetCrossHairVisible* OFKGLJOAMLD; // 0x18
	::Class_1_9CAA42EF32347EE5_2* AGAPPFLLEBA; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetCrossHairVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetCrossHairVisible*))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40_TICK_OFFSET))(this, a1);
	}
};
