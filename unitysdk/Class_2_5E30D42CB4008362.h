#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MoveTeamRootPosByTargetDistance; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5E30D42CB4008362_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15937C40)
#define CLASS_2_5E30D42CB4008362_METHOD_2_F240EFA7A704696B_OFFSET UNITYSDK_OFFSET(0x159384B0)
#define CLASS_2_5E30D42CB4008362_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15937C80)
#define CLASS_2_5E30D42CB4008362_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15938570)
#define CLASS_2_5E30D42CB4008362_TICK_OFFSET UNITYSDK_OFFSET(0x159385C0)
#define CLASS_2_5E30D42CB4008362__CTOR_OFFSET UNITYSDK_OFFSET(0x15937C00)

inline static constexpr unsigned int Class_2_5E30D42CB4008362_TypeDefinitionIndex = 55427;

class Class_2_5E30D42CB4008362 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TargetEvaluator* FAKOBONILAK; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::MoveTeamRootPosByTargetDistance* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveTeamRootPosByTargetDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveTeamRootPosByTargetDistance*))((::PBYTE)hIl2Cpp + CLASS_2_5E30D42CB4008362__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E30D42CB4008362_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E30D42CB4008362_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E30D42CB4008362_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5E30D42CB4008362_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_2_F240EFA7A704696B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5E30D42CB4008362_METHOD_2_F240EFA7A704696B_OFFSET))(this, a1);
	}
};
