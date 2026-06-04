#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }

#define RPG_CUSTOMRP_RPGCHROMATICABERRATION_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x18EF6F70)
#define RPG_CUSTOMRP_RPGCHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF6FB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGChromaticAberration_TypeDefinitionIndex = 35467;

	class RPGChromaticAberration : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::ColorParameter* FilterA; // 0x38
		::UnityEngine::Rendering::ColorParameter* FilterB; // 0x40
		::UnityEngine::Rendering::ColorParameter* FilterC; // 0x48
		::UnityEngine::Rendering::BoolParameter* CombineWithRadialBlur; // 0x50
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGCHROMATICABERRATION__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGCHROMATICABERRATION_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
