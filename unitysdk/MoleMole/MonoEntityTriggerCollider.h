#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x129B2DC0)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x129B3000)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x129B2DB0)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_METHOD_5_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x129B3050)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x129B2DA0)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x129B3480)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityTriggerCollider_TypeDefinitionIndex = 41693;

	class MonoEntityTriggerCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* triggerCollider; // 0x18
		::MoleMole::Battle::Entity* Field_5_1; // 0x20
		::UnityEngine::RaycastHit Field_5_0; // 0x28

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

		::System::Void Method_5_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_METHOD_5_F79D5EC57FBF426E_OFFSET))(this);
		}
	};
}
