#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MotionBlurQuality.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_MOTIONBLURQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF1AA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurQualityParameter_TypeDefinitionIndex = 36286;

	class MotionBlurQualityParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::MotionBlurQuality>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURQUALITYPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
