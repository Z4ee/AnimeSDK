#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/TrackballAttribute_Mode.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_TRACKBALLATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16ADC790)
#define RPG_CUSTOMRP_TRACKBALLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ADC770)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TrackballAttribute_TypeDefinitionIndex = 29371;

	class TrackballAttribute : public ::System::Attribute
	{
	public:
		::System::Single SliderMin; // 0x10
		::RPG::CustomRP::TrackballAttribute_Mode mode; // 0x14
		::UnityEngine::Vector4 DefaultValue; // 0x18
		::System::Single SliderMax; // 0x28

		::System::Void _ctor(::RPG::CustomRP::TrackballAttribute_Mode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::TrackballAttribute_Mode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TRACKBALLATTRIBUTE__CTOR_OFFSET))(this, mode);
		}

		::System::Void _ctor_1(::RPG::CustomRP::TrackballAttribute_Mode mode, ::System::Single defaultX, ::System::Single defaultY, ::System::Single defaultZ, ::System::Single defaultW, ::System::Single sliderMin, ::System::Single sliderMax)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::TrackballAttribute_Mode, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TRACKBALLATTRIBUTE__CTOR_1_OFFSET))(this, mode, defaultX, defaultY, defaultZ, defaultW, sliderMin, sliderMax);
		}
	};
}
