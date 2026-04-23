#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AmbientOcclusioMethod.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_AMIBENTOCCLUSIOMETHODPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x180FEF50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AmibentOcclusioMethodParameter_TypeDefinitionIndex = 35158;

	class AmibentOcclusioMethodParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::AmbientOcclusioMethod>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AMIBENTOCCLUSIOMETHODPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
