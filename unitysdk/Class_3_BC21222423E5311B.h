#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AttachSkillTypeDisable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC21222423E5311B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13D1AA80)
#define CLASS_3_BC21222423E5311B__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1AA50)

inline static constexpr unsigned int Class_3_BC21222423E5311B_TypeDefinitionIndex = 51276;

class Class_3_BC21222423E5311B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachSkillTypeDisable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachSkillTypeDisable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachSkillTypeDisable*))((::PBYTE)hIl2Cpp + CLASS_3_BC21222423E5311B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC21222423E5311B_ONTASKBEGIN_OFFSET))(this);
	}
};
