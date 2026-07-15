#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AbortTargetSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_25743BACB8B7EAE6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179883C0)
#define CLASS_3_25743BACB8B7EAE6__CTOR_OFFSET UNITYSDK_OFFSET(0x17988390)

inline static constexpr unsigned int Class_3_25743BACB8B7EAE6_TypeDefinitionIndex = 49886;

class Class_3_25743BACB8B7EAE6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AbortTargetSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AbortTargetSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AbortTargetSkill*))((::PBYTE)hIl2Cpp + CLASS_3_25743BACB8B7EAE6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25743BACB8B7EAE6_ONTASKBEGIN_OFFSET))(this);
	}
};
