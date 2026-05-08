#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG_CONFIGCOLLIDER_METHOD_1_88ADECB5899D6E5A_OFFSET UNITYSDK_OFFSET(0x159BD100)
#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG_CONFIGCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x159BD0F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_TriggerConfig_ConfigCollider_TypeDefinitionIndex = 46718;

	class CurveMoveComponent_TriggerConfig_ConfigCollider : public ::System::Object
	{
	public:
		::MoleMole::Battle::ColliderEventDispatcher* colliderEventDispatcher; // 0x10
		::Il2CppArray<::MoleMole::Battle::ColliderEventDispatcher*>* mutilColliderEventDispatchers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG_CONFIGCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_88ADECB5899D6E5A(::System::Action_1<::MoleMole::Battle::ColliderEventDispatcher*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::ColliderEventDispatcher*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG_CONFIGCOLLIDER_METHOD_1_88ADECB5899D6E5A_OFFSET))(this, a1);
		}
	};
}
