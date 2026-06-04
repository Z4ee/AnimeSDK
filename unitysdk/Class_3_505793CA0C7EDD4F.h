#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtSkillPauseTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_505793CA0C7EDD4F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF51B90)
#define CLASS_3_505793CA0C7EDD4F__CTOR_OFFSET UNITYSDK_OFFSET(0xBF51B60)

inline static constexpr unsigned int Class_3_505793CA0C7EDD4F_TypeDefinitionIndex = 50382;

class Class_3_505793CA0C7EDD4F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSkillPauseTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillPauseTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillPauseTarget*))((::PBYTE)hIl2Cpp + CLASS_3_505793CA0C7EDD4F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_505793CA0C7EDD4F_ONTASKBEGIN_OFFSET))(this);
	}
};
