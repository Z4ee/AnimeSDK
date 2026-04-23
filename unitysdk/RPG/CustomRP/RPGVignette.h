#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }

#define RPG_CUSTOMRP_RPGVIGNETTE_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1816D690)
#define RPG_CUSTOMRP_RPGVIGNETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1816D6D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGVignette_TypeDefinitionIndex = 35223;

	class RPGVignette : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::ColorParameter* color; // 0x38
		::UnityEngine::Rendering::Vector2Parameter* center; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* smoothness; // 0x50
		::UnityEngine::Rendering::BoolParameter* rounded; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGVIGNETTE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGVIGNETTE_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
