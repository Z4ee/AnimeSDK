#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_248DACE3BB3053DD;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_MONOLOGICMOVEMENT_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1909B050)
#define MOLEMOLE_MONOLOGICMOVEMENT_METHOD_5_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1909AF50)
#define MOLEMOLE_MONOLOGICMOVEMENT_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1909B060)
#define MOLEMOLE_MONOLOGICMOVEMENT_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1909AF00)
#define MOLEMOLE_MONOLOGICMOVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1909B150)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLogicMovement_TypeDefinitionIndex = 46300;

	class MonoLogicMovement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Battle::Entity* Field_5_0; // 0x18
		::Class_3_248DACE3BB3053DD* Field_5_7; // 0x20

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

		::System::Void Method_5_E693A0026D178D8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_METHOD_5_E693A0026D178D8E_OFFSET))(this);
		}
	};
}
