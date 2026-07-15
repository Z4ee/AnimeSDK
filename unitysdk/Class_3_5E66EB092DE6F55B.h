#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSkipDeadHandler; }

#define CLASS_3_5E66EB092DE6F55B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14ACB810)
#define CLASS_3_5E66EB092DE6F55B__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACB7E0)

inline static constexpr unsigned int Class_3_5E66EB092DE6F55B_TypeDefinitionIndex = 53932;

class Class_3_5E66EB092DE6F55B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerSkipDeadHandler*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSkipDeadHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSkipDeadHandler*))((::PBYTE)hIl2Cpp + CLASS_3_5E66EB092DE6F55B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E66EB092DE6F55B_ONTASKBEGIN_OFFSET))(this);
	}
};
