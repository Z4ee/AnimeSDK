#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvTriggerSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_98F17792EE833590_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1790B9F0)
#define CLASS_3_98F17792EE833590__CTOR_OFFSET UNITYSDK_OFFSET(0x1790B9C0)

inline static constexpr unsigned int Class_3_98F17792EE833590_TypeDefinitionIndex = 58047;

class Class_3_98F17792EE833590 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvTriggerSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerSkill*))((::PBYTE)hIl2Cpp + CLASS_3_98F17792EE833590__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98F17792EE833590_ONTASKBEGIN_OFFSET))(this);
	}
};
