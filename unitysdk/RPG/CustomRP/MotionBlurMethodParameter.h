#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MotionBlurMethod.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_MOTIONBLURMETHODPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18581300)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurMethodParameter_TypeDefinitionIndex = 37144;

	class MotionBlurMethodParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::MotionBlurMethod>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURMETHODPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
