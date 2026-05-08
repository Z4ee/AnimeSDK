#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAS_VCAMERAOVERRIDELAYOUTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xFE997E0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCameraOverrideLayoutParam_TypeDefinitionIndex = 82301;

	class VCameraOverrideLayoutParam : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* elvAngleCurve; // 0x10
		::System::Single radius; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAOVERRIDELAYOUTPARAM__CTOR_OFFSET))(this);
		}
	};
}
