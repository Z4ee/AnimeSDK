#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define ROOTMOTION_FINALIK_ROTATIONLIMIT_APPLY_OFFSET UNITYSDK_OFFSET(0x196AF7F0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x196AF7A0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_DISABLE_OFFSET UNITYSDK_OFFSET(0x196AC0E0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GETLIMITEDLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x196AF510)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GETORTHOGONALANGLE_OFFSET UNITYSDK_OFFSET(0x196B0000)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_CROSSAXIS_OFFSET UNITYSDK_OFFSET(0x196AF8A0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_SECONDARYAXIS_OFFSET UNITYSDK_OFFSET(0x196AF880)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x196AF8F0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_LIMIT1DOF_OFFSET UNITYSDK_OFFSET(0x196AF9B0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_LIMITTWIST_OFFSET UNITYSDK_OFFSET(0x196AFBB0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x196AF980)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_SETDEFAULTLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x196AF4C0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x196B0140)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimit_TypeDefinitionIndex = 44886;

	class RotationLimit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 axis; // 0x18
		::UnityEngine::Quaternion defaultLocalRotation; // 0x24
		::System::Boolean initiated; // 0x34
		::System::Boolean applicationQuit; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT__CTOR_OFFSET))(this);
		}

		::System::Void SetDefaultLocalRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_SETDEFAULTLOCALROTATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetLimitedLocalRotation(::UnityEngine::Quaternion a1, ::System::Boolean& a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GETLIMITEDLOCALROTATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean Apply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_APPLY_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_DISABLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_secondaryAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_SECONDARYAXIS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_crossAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_CROSSAXIS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_LOGWARNING_OFFSET))(this, a1);
		}

		static ::UnityEngine::Quaternion Limit1DOF(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_LIMIT1DOF_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion LimitTwist(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_LIMITTWIST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetOrthogonalAngle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GETORTHOGONALANGLE_OFFSET))(a1, a2, a3);
		}
	};
}
