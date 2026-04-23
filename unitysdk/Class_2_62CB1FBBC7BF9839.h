#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MoveTeamRootPosByTargetDistance; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_62CB1FBBC7BF9839_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99CD960)
#define CLASS_2_62CB1FBBC7BF9839_METHOD_2_F240EFA7A704696B_OFFSET UNITYSDK_OFFSET(0x99CE0A0)
#define CLASS_2_62CB1FBBC7BF9839_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99CD9A0)
#define CLASS_2_62CB1FBBC7BF9839_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99CE160)
#define CLASS_2_62CB1FBBC7BF9839_TICK_OFFSET UNITYSDK_OFFSET(0x99CE1B0)
#define CLASS_2_62CB1FBBC7BF9839__CTOR_OFFSET UNITYSDK_OFFSET(0x99CD8E0)

inline static constexpr unsigned int Class_2_62CB1FBBC7BF9839_TypeDefinitionIndex = 50915;

class Class_2_62CB1FBBC7BF9839 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TargetEvaluator* Field_2_2; // 0x18
	::RPG::GameCore::MoveTeamRootPosByTargetDistance* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveTeamRootPosByTargetDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveTeamRootPosByTargetDistance*))((::PBYTE)hIl2Cpp + CLASS_2_62CB1FBBC7BF9839__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62CB1FBBC7BF9839_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62CB1FBBC7BF9839_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62CB1FBBC7BF9839_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_62CB1FBBC7BF9839_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_2_F240EFA7A704696B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_62CB1FBBC7BF9839_METHOD_2_F240EFA7A704696B_OFFSET))(this, a1);
	}
};
