#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/GaussianBlurGradual.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_GAUSSIANBLURGRADUALPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE6C40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GaussianBlurGradualParameter_TypeDefinitionIndex = 35487;

	class GaussianBlurGradualParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::GaussianBlurGradual>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANBLURGRADUALPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
