#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class MotionBlurMethodParameter; }
namespace RPG::CustomRP { class MotionBlurQualityParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class IntParameter; }

#define RPG_CUSTOMRP_RPGMOTIONBLUR_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x16C14D20)
#define RPG_CUSTOMRP_RPGMOTIONBLUR_ONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x16C14C00)
#define RPG_CUSTOMRP_RPGMOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C14DB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGMotionBlur_TypeDefinitionIndex = 36287;

	class RPGMotionBlur : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		static ::System::Boolean* StaticGet_IsMotionBlurEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGMotionBlur_TypeDefinitionIndex)->GetStaticField(0x12920);
		}
		// static const ::System::Int32 kMotionBlurTileSize = 0x10; // 0x0
		::RPG::CustomRP::MotionBlurMethodParameter* MotionBlurMethod; // 0x38
		::RPG::CustomRP::MotionBlurQualityParameter* MotionBlurQuality; // 0x40
		::UnityEngine::Rendering::FloatParameter* MotionBlurAmount; // 0x48
		::UnityEngine::Rendering::IntParameter* MotionBlurMax; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGMOTIONBLUR__CTOR_OFFSET))(this);
		}

		::System::Void OnOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGMOTIONBLUR_ONOVERRIDE_OFFSET))(this, a1);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGMOTIONBLUR_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
