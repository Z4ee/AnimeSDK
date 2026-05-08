#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONX_OFFSET UNITYSDK_OFFSET(0x13867590)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONY_OFFSET UNITYSDK_OFFSET(0x13867640)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x138676F0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONX_OFFSET UNITYSDK_OFFSET(0x138677A0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONY_OFFSET UNITYSDK_OFFSET(0x13867850)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONZ_OFFSET UNITYSDK_OFFSET(0x13867900)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_METHOD_1_FD6126B880E7D032_OFFSET UNITYSDK_OFFSET(0x138679C0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONX_OFFSET UNITYSDK_OFFSET(0x138675E0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONY_OFFSET UNITYSDK_OFFSET(0x13867690)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x13867740)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONX_OFFSET UNITYSDK_OFFSET(0x138677F0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONY_OFFSET UNITYSDK_OFFSET(0x138678A0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONZ_OFFSET UNITYSDK_OFFSET(0x13867950)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x138679B0)

namespace MoleMole
{
	inline static constexpr unsigned int NpcPrototypeRigidbodyData_TypeDefinitionIndex = 38920;

	class NpcPrototypeRigidbodyData : public ::System::Object
	{
	public:
		::System::Single Mass; // 0x10
		::System::Boolean IsKinematic; // 0x14
		::UnityEngine::RigidbodyConstraints _rigidbodyConstraints; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_FreezePositionX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONX_OFFSET))(this);
		}

		::System::Void set_FreezePositionX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONX_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezePositionY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONY_OFFSET))(this);
		}

		::System::Void set_FreezePositionY(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONY_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezePositionZ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONZ_OFFSET))(this);
		}

		::System::Void set_FreezePositionZ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONZ_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezeRotationX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONX_OFFSET))(this);
		}

		::System::Void set_FreezeRotationX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONX_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezeRotationY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONY_OFFSET))(this);
		}

		::System::Void set_FreezeRotationY(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONY_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezeRotationZ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONZ_OFFSET))(this);
		}

		::System::Void set_FreezeRotationZ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONZ_OFFSET))(this, a1);
		}

		::System::Void Method_1_FD6126B880E7D032(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_METHOD_1_FD6126B880E7D032_OFFSET))(this, a1);
		}
	};
}
