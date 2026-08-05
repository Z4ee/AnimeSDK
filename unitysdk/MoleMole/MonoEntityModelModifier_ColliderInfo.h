#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEntityModelModifier_ColliderInfo_Enum_3_F972BF442CE4ECDB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOENTITYMODELMODIFIER_COLLIDERINFO_METHOD_1_E789FF67ABF2058D_OFFSET UNITYSDK_OFFSET(0x19959EC0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_COLLIDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19959EB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityModelModifier_ColliderInfo_TypeDefinitionIndex = 60627;

	class MonoEntityModelModifier_ColliderInfo : public ::System::Object
	{
	public:
		::MoleMole::MonoEntityModelModifier_ColliderInfo_Enum_3_F972BF442CE4ECDB Type; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_COLLIDERINFO__CTOR_OFFSET))(this);
		}

		::UnityEngine::Collider* Method_1_E789FF67ABF2058D(::MoleMole::Battle::Entity* a1)
		{
			return ((::UnityEngine::Collider*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_COLLIDERINFO_METHOD_1_E789FF67ABF2058D_OFFSET))(this, a1);
		}
	};
}
