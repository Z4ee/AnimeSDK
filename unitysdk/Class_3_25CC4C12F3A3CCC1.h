#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeTargetModifierEffectState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_25CC4C12F3A3CCC1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1062C620)
#define CLASS_3_25CC4C12F3A3CCC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1062C5F0)

inline static constexpr unsigned int Class_3_25CC4C12F3A3CCC1_TypeDefinitionIndex = 43967;

class Class_3_25CC4C12F3A3CCC1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeTargetModifierEffectState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeTargetModifierEffectState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeTargetModifierEffectState*))((::PBYTE)hIl2Cpp + CLASS_3_25CC4C12F3A3CCC1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25CC4C12F3A3CCC1_ONTASKBEGIN_OFFSET))(this);
	}
};
