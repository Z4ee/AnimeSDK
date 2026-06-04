#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }

#define RPG_CUSTOMRP_RPGPOLAROID__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0F090)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGPolaroid_TypeDefinitionIndex = 35511;

	class RPGPolaroid : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::FloatParameter* CenterX; // 0x38
		::UnityEngine::Rendering::FloatParameter* CenterY; // 0x40
		::UnityEngine::Rendering::FloatParameter* CenterYScale; // 0x48
		::UnityEngine::Rendering::FloatParameter* Width; // 0x50
		::UnityEngine::Rendering::FloatParameter* Height; // 0x58
		::UnityEngine::Rendering::FloatParameter* LengthRate; // 0x60
		::UnityEngine::Rendering::FloatParameter* LengthRateLerp; // 0x68
		::UnityEngine::Rendering::ColorParameter* PolaroidColor; // 0x70
		::UnityEngine::Rendering::FloatParameter* PolaroidScale; // 0x78
		::UnityEngine::Rendering::FloatParameter* Rotate; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPOLAROID__CTOR_OFFSET))(this);
		}
	};
}
