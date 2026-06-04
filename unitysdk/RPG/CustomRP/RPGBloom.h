#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class AllBloomStageParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class Vector4Parameter; }

#define RPG_CUSTOMRP_RPGBLOOM_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x18EF0BD0)
#define RPG_CUSTOMRP_RPGBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF0CB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGBloom_TypeDefinitionIndex = 35464;

	class RPGBloom : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::FloatParameter* BloomThreshold; // 0x38
		::UnityEngine::Rendering::FloatParameter* BloomIntensity; // 0x40
		::RPG::CustomRP::AllBloomStageParameter* AllBloomStageParam; // 0x48
		::UnityEngine::Rendering::FloatParameter* BloomR; // 0x50
		::UnityEngine::Rendering::FloatParameter* BloomG; // 0x58
		::UnityEngine::Rendering::FloatParameter* BloomB; // 0x60
		::UnityEngine::Rendering::Vector4Parameter* QualityScale; // 0x68
		::UnityEngine::Rendering::Vector4Parameter* FixedRTHeight; // 0x70
		::UnityEngine::Rendering::BoolParameter* UseFixedRTHeight; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOM_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
