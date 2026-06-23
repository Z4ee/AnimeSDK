#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_248DACE3BB3053DD;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_MONOLOGICMOVEMENT_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x17DD6880)
#define MOLEMOLE_MONOLOGICMOVEMENT_METHOD_5_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x17DD6780)
#define MOLEMOLE_MONOLOGICMOVEMENT_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x17DD6890)
#define MOLEMOLE_MONOLOGICMOVEMENT_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x17DD6730)
#define MOLEMOLE_MONOLOGICMOVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD6970)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLogicMovement_TypeDefinitionIndex = 41663;

	class MonoLogicMovement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Battle::Entity* Field_5_0; // 0x18
		::Class_3_248DACE3BB3053DD* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT__CTOR_OFFSET))(this);
		}

		::System::Void set_Owner(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_SET_OWNER_OFFSET))(this, a1);
		}

		::MoleMole::Battle::Entity* get_Owner()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_GET_OWNER_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void Method_5_D9EF75A2D048B8A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_METHOD_5_D9EF75A2D048B8A1_OFFSET))(this);
		}
	};
}
