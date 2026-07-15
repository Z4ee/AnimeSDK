#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ToneMappingMethod.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_TONEMAPPINGMETHODPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D135300)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ToneMappingMethodParameter_TypeDefinitionIndex = 36303;

	class ToneMappingMethodParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::ToneMappingMethod>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TONEMAPPINGMETHODPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
