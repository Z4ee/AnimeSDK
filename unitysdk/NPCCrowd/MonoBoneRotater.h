#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/MonoBoneRotater_RotateAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define NPCCROWD_MONOBONEROTATER_CACHEINITIALROTATION_OFFSET UNITYSDK_OFFSET(0xF9C0B00)
#define NPCCROWD_MONOBONEROTATER_GETAXISVECTOR_OFFSET UNITYSDK_OFFSET(0xF9C1160)
#define NPCCROWD_MONOBONEROTATER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF9C0CF0)
#define NPCCROWD_MONOBONEROTATER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF9C0AB0)
#define NPCCROWD_MONOBONEROTATER_REBINDBASEROTATION_OFFSET UNITYSDK_OFFSET(0xF9C1210)
#define NPCCROWD_MONOBONEROTATER_RESOLVEBONE_OFFSET UNITYSDK_OFFSET(0xF9C1120)
#define NPCCROWD_MONOBONEROTATER__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C1260)

namespace NPCCrowd
{
	inline static constexpr unsigned int MonoBoneRotater_TypeDefinitionIndex = 45591;

	class MonoBoneRotater : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _targetBone; // 0x18
		::NPCCrowd::MonoBoneRotater_RotateAxis _rotateAxis; // 0x20
		::System::Single _angularSpeed; // 0x24
		::System::Boolean _clockwise; // 0x28
		::System::Boolean _useUnscaledTime; // 0x29
		::UnityEngine::Transform* _runtimeBone; // 0x30
		::UnityEngine::Quaternion _initialLocalRotation; // 0x38
		::System::Single _accumulatedAngle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_MONOBONEROTATER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_MONOBONEROTATER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_MONOBONEROTATER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RebindBaseRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_MONOBONEROTATER_REBINDBASEROTATION_OFFSET))(this);
		}

		::UnityEngine::Transform* ResolveBone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_MONOBONEROTATER_RESOLVEBONE_OFFSET))(this);
		}

		::System::Void CacheInitialRotation(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_MONOBONEROTATER_CACHEINITIALROTATION_OFFSET))(this, force);
		}

		static ::UnityEngine::Vector3 GetAxisVector(::NPCCrowd::MonoBoneRotater_RotateAxis axis)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::MonoBoneRotater_RotateAxis))((::PBYTE)hIl2Cpp + NPCCROWD_MONOBONEROTATER_GETAXISVECTOR_OFFSET))(axis);
		}
	};
}
