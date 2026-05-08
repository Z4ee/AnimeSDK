#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig_ConfigCollider; }

#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175173F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_TriggerConfig_TypeDefinitionIndex = 46717;

	class CurveMoveComponent_TriggerConfig : public ::System::Object
	{
	public:
		::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* outCollider; // 0x10
		::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* midCollider; // 0x18
		::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* inCollider; // 0x20
		::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* entityAttachCollider; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
