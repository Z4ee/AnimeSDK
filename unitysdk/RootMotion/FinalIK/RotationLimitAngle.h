#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/RotationLimit.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1E66EDB0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_LIMITROTATION_OFFSET UNITYSDK_OFFSET(0x1E66EE00)
#define ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_LIMITSWING_OFFSET UNITYSDK_OFFSET(0x1E66EE90)
#define ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E66ED10)
#define ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1E66ECC0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1E66ED60)
#define ROOTMOTION_FINALIK_ROTATIONLIMITANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66F3C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimitAngle_TypeDefinitionIndex = 38254;

	class RotationLimitAngle : public ::RootMotion::FinalIK::RotationLimit
	{
	public:
		::System::Single limit; // 0x38
		::System::Single twistLimit; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITANGLE__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_ASTHREAD_OFFSET))(this);
		}

		::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_LIMITROTATION_OFFSET))(this, rotation);
		}

		::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITANGLE_LIMITSWING_OFFSET))(this, rotation);
		}
	};
}
