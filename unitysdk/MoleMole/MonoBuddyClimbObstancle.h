#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1542FF90)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15430C60)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_METHOD_5_9D3E788D6AA8892A_OFFSET UNITYSDK_OFFSET(0x15430D40)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_METHOD_5_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x15430F90)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_METHOD_5_FA61D402EDC76748_OFFSET UNITYSDK_OFFSET(0x15430750)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_START_OFFSET UNITYSDK_OFFSET(0x1542FE20)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x154310B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuddyClimbObstancle_TypeDefinitionIndex = 55425;

	class MonoBuddyClimbObstancle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single rayLength; // 0x18
		::System::Single stepHeight; // 0x1C
		::System::Single stepLow; // 0x20
		::System::Single stepSpeed; // 0x24
		::System::Single climbTimer; // 0x28
		::UnityEngine::LayerMask Field_5_5; // 0x2C
		::Il2CppArray<::UnityEngine::RaycastHit>* Field_5_6; // 0x30
		::System::Boolean Field_5_7; // 0x38
		::MoleMole::Battle::Entity* Field_5_8; // 0x40
		::System::Single Field_5_9; // 0x48
		::System::Single Field_5_10; // 0x4C
		::System::Single Field_5_11; // 0x50
		::System::Boolean isOpen; // 0x54
		::UnityEngine::Rigidbody* Field_5_13; // 0x58
		::System::Single Field_5_14; // 0x60
		::System::Single Field_5_15; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_METHOD_5_F4ADC37B63F4E9EF_OFFSET))(this);
		}

		::System::Void Method_5_FA61D402EDC76748(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single& a3, ::UnityEngine::BoxCollider*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::BoxCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_METHOD_5_FA61D402EDC76748_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_9D3E788D6AA8892A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_METHOD_5_9D3E788D6AA8892A_OFFSET))(this, a1);
		}
	};
}
