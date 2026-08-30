#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetModifierEffectVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C760992606791253_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A1F990)
#define CLASS_3_C760992606791253__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1F960)

inline static constexpr unsigned int Class_3_C760992606791253_TypeDefinitionIndex = 55727;

class Class_3_C760992606791253 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetModifierEffectVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierEffectVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierEffectVisible*))((::PBYTE)hIl2Cpp + CLASS_3_C760992606791253__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C760992606791253_ONTASKBEGIN_OFFSET))(this);
	}
};
