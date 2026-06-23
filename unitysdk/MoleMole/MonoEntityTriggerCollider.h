#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15830320)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15830560)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x15830310)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x158305B0)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x15830300)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x15830A20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityTriggerCollider_TypeDefinitionIndex = 78961;

	class MonoEntityTriggerCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* triggerCollider; // 0x18
		::MoleMole::Battle::Entity* Field_5_1; // 0x20
		::UnityEngine::RaycastHit Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void set_Entity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_SET_ENTITY_OFFSET))(this, a1);
		}

		::MoleMole::Battle::Entity* get_Entity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_GET_ENTITY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_METHOD_5_10054BB010E03EDD_OFFSET))(this);
		}
	};
}
