#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPreUseSkillLevelGraphOPApplyTiming; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6DF86E1308B373A0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4716A0)
#define CLASS_3_6DF86E1308B373A0__CTOR_OFFSET UNITYSDK_OFFSET(0xE471670)

inline static constexpr unsigned int Class_3_6DF86E1308B373A0_TypeDefinitionIndex = 47260;

class Class_3_6DF86E1308B373A0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming*))((::PBYTE)hIl2Cpp + CLASS_3_6DF86E1308B373A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DF86E1308B373A0_ONTASKBEGIN_OFFSET))(this);
	}
};
