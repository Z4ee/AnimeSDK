#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_VCAMEXTRASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x119AF430)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFollowZoom_VcamExtraState_TypeDefinitionIndex = 30779;

	class CinemachineFollowZoom_VcamExtraState : public ::System::Object
	{
	public:
		::System::Single m_previousFrameZoom; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_VCAMEXTRASTATE__CTOR_OFFSET))(this);
		}
	};
}
