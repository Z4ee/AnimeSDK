#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveBehaviorFlagForModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_6BDAC284CE046A4E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109C0B30)
#define CLASS_3_6BDAC284CE046A4E__CTOR_OFFSET UNITYSDK_OFFSET(0x109C0B00)

inline static constexpr unsigned int Class_3_6BDAC284CE046A4E_TypeDefinitionIndex = 44165;

class Class_3_6BDAC284CE046A4E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveBehaviorFlagForModifier*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::RPG::GameCore::TurnBasedModifierInstance*> Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveBehaviorFlagForModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + CLASS_3_6BDAC284CE046A4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BDAC284CE046A4E_ONTASKBEGIN_OFFSET))(this);
	}
};
