#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_LOCKGAMEOBJROTATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1162C3F0)
#define MOLEMOLE_LOCKGAMEOBJROTATION_DISABLELOCK_OFFSET UNITYSDK_OFFSET(0x1162C7A0)
#define MOLEMOLE_LOCKGAMEOBJROTATION_ENBALELOCK_OFFSET UNITYSDK_OFFSET(0x1162C600)
#define MOLEMOLE_LOCKGAMEOBJROTATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1162C470)
#define MOLEMOLE_LOCKGAMEOBJROTATION_RESET_OFFSET UNITYSDK_OFFSET(0x1162C7F0)
#define MOLEMOLE_LOCKGAMEOBJROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1162C970)

namespace MoleMole
{
	inline static constexpr unsigned int LockGameObjRotation_TypeDefinitionIndex = 60484;

	class LockGameObjRotation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Quaternion Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x28
		::UnityEngine::Quaternion Field_5_2; // 0x30
		::System::Boolean Field_5_3; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_LATEUPDATE_OFFSET))(this);
		}

		::System::Void EnbaleLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_ENBALELOCK_OFFSET))(this);
		}

		::System::Void DisableLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_DISABLELOCK_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_RESET_OFFSET))(this);
		}
	};
}
