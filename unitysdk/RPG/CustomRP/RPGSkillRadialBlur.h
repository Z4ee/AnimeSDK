#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }

#define RPG_CUSTOMRP_RPGSKILLRADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1A8B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGSkillRadialBlur_TypeDefinitionIndex = 36296;

	class RPGSkillRadialBlur : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::FloatParameter* BlurRadius; // 0x38
		::UnityEngine::Rendering::FloatParameter* Angle; // 0x40
		::UnityEngine::Rendering::FloatParameter* Bias; // 0x48
		::UnityEngine::Rendering::FloatParameter* Falloff; // 0x50
		::UnityEngine::Rendering::BoolParameter* UseRadial; // 0x58
		::UnityEngine::Rendering::Vector2Parameter* RadialCenter; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSKILLRADIALBLUR__CTOR_OFFSET))(this);
		}
	};
}
