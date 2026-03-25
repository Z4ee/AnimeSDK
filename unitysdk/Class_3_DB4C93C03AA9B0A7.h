#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideSkillTargetInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DB4C93C03AA9B0A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x88FFA40)
#define CLASS_3_DB4C93C03AA9B0A7__CTOR_OFFSET UNITYSDK_OFFSET(0x88FFA10)

inline static constexpr unsigned int Class_3_DB4C93C03AA9B0A7_TypeDefinitionIndex = 44225;

class Class_3_DB4C93C03AA9B0A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideSkillTargetInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideSkillTargetInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideSkillTargetInfo*))((::PBYTE)hIl2Cpp + CLASS_3_DB4C93C03AA9B0A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB4C93C03AA9B0A7_ONTASKBEGIN_OFFSET))(this);
	}
};
