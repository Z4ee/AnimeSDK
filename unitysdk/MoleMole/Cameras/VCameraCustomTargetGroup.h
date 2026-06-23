#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup.h"

#define MOLEMOLE_CAMERAS_VCAMERACUSTOMTARGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x144C6000)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCameraCustomTargetGroup_TypeDefinitionIndex = 68279;

	class VCameraCustomTargetGroup : public ::MoleMole::Cameras::VCameraTargetGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERACUSTOMTARGETGROUP__CTOR_OFFSET))(this);
		}
	};
}
