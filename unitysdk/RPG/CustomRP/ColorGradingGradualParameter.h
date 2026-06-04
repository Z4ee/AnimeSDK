#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_COLORGRADINGGRADUALPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED0E40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ColorGradingGradualParameter_TypeDefinitionIndex = 35470;

	class ColorGradingGradualParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::ColorGradingGradual>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGGRADUALPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
