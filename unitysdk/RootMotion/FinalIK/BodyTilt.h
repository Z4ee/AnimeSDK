#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class OffsetPose; }

#define ROOTMOTION_FINALIK_BODYTILT_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1BD15900)
#define ROOTMOTION_FINALIK_BODYTILT_START_OFFSET UNITYSDK_OFFSET(0x1BD15790)
#define ROOTMOTION_FINALIK_BODYTILT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD15D50)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int BodyTilt_TypeDefinitionIndex = 36692;

	class BodyTilt : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::System::Single tiltSpeed; // 0x30
		::System::Single tiltSensitivity; // 0x34
		::RootMotion::FinalIK::OffsetPose* poseLeft; // 0x38
		::RootMotion::FinalIK::OffsetPose* poseRight; // 0x40
		::System::Single tiltAngle; // 0x48
		::UnityEngine::Vector3 lastForward; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BODYTILT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BODYTILT_START_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BODYTILT_ONMODIFYOFFSET_OFFSET))(this);
		}
	};
}
