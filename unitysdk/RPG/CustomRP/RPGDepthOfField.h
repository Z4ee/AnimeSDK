#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class RPGDepthOfField_CoCMethodParameter; }
namespace RPG::CustomRP { class RPGDepthOfField_DepthOfFieldDebugMethodParameter; }
namespace RPG::CustomRP { class RPGDepthOfField_DepthOfFieldMethodParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x18EF79A0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF7A00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_TypeDefinitionIndex = 35472;

	class RPGDepthOfField : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::RPG::CustomRP::RPGDepthOfField_DepthOfFieldMethodParameter* Method; // 0x38
		::UnityEngine::Rendering::FloatParameter* FocusDistance; // 0x40
		::RPG::CustomRP::RPGDepthOfField_CoCMethodParameter* CocMethodType; // 0x48
		::UnityEngine::Rendering::FloatParameter* NearFocalRegion; // 0x50
		::UnityEngine::Rendering::FloatParameter* FarFocalRegion; // 0x58
		::UnityEngine::Rendering::FloatParameter* NearTransitionRegion; // 0x60
		::UnityEngine::Rendering::FloatParameter* FarTransitionRegion; // 0x68
		::UnityEngine::Rendering::FloatParameter* CocBlurUnit; // 0x70
		::RPG::CustomRP::RPGDepthOfField_DepthOfFieldDebugMethodParameter* DOFDebug; // 0x78
		::UnityEngine::Rendering::FloatParameter* fStop; // 0x80
		::UnityEngine::Rendering::FloatParameter* SensorWidth; // 0x88
		::UnityEngine::Rendering::FloatParameter* DepthBlurRadius; // 0x90
		::UnityEngine::Rendering::FloatParameter* DepthBlurAmount; // 0x98
		::UnityEngine::Rendering::FloatParameter* maxForegroundRadius; // 0xA0
		::UnityEngine::Rendering::FloatParameter* maxBackgroundRadius; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
