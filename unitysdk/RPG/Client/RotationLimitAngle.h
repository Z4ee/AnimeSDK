#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/RotationLimit.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define RPG_CLIENT_ROTATIONLIMITANGLE_LIMITROTATION_OFFSET UNITYSDK_OFFSET(0xA2359C0)
#define RPG_CLIENT_ROTATIONLIMITANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA235F80)
#define RPG_CLIENT_ROTATIONLIMITANGLE__SWINGLIMITANGLE_OFFSET UNITYSDK_OFFSET(0xA235A50)

namespace RPG::Client
{
	inline static constexpr unsigned int RotationLimitAngle_TypeDefinitionIndex = 44363;

	class RotationLimitAngle : public ::RootMotion::FinalIK::RotationLimit
	{
	public:
		::System::Single LimitAngle; // 0x38
		::System::Single TwistLimitAngle; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROTATIONLIMITANGLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROTATIONLIMITANGLE_LIMITROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion _SwingLimitAngle(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROTATIONLIMITANGLE__SWINGLIMITANGLE_OFFSET))(this, a1);
		}
	};
}
