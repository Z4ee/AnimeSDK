#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x16292700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x16293230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x162928A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_1855D8D66EEBAF7E_OFFSET UNITYSDK_OFFSET(0x16293300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_65BB8F0F1E258993_1_OFFSET UNITYSDK_OFFSET(0x16295370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x16295030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x16292A90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16292890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_C8CC3F1CE7238E46_OFFSET UNITYSDK_OFFSET(0x16294760)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x162956B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessDirectionalBlur_TypeDefinitionIndex = 67999;

	class ESPostProcessDirectionalBlur : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::DirectionalBlur*>
	{
	public:
		::MoleMole::Config::ConfigEntityDirectionalBlurEffects* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolDefault_downSample; // 0xB8
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolDefault_sampleDistanceMode; // 0xBC
		::System::Int32 _VolDefault_sampleCount; // 0xC0
		::System::Single _VolDefault_radius; // 0xC4
		::UnityEngine::Vector2 _VolDefault_direction; // 0xC8
		::System::Boolean _VolPreVal_downSample_overrideState; // 0xD0
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolPreVal_downSample; // 0xD4
		::System::Boolean _VolPreVal_sampleDistanceMode_overrideState; // 0xD8
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolPreVal_sampleDistanceMode; // 0xDC
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0xE0
		::System::Int32 _VolPreVal_sampleCount; // 0xE4
		::System::Boolean _VolPreVal_radius_overrideState; // 0xE8
		::System::Single _VolPreVal_radius; // 0xEC
		::System::Boolean _VolPreVal_direction_overrideState; // 0xF0
		::UnityEngine::Vector2 _VolPreVal_direction; // 0xF4
		::System::Single _TimelineCurveFirstVal_radius; // 0xFC
		::System::Single _TimelineCurveLastVal_radius; // 0x100
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x104
		::UnityEngine::Rendering::Universal::DownSampleLevel ESPP_downSample; // 0x108
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleDistanceMode_FieldHandleType; // 0x10C
		::UnityEngine::Rendering::Universal::SampleDistanceMode ESPP_sampleDistanceMode; // 0x110
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x114
		::System::Int32 ESPP_sampleCount; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x11C
		::System::Boolean ESPP_radius_UseIt; // 0x120
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x128
		::System::Boolean ESPP_radius_EnableFade; // 0x130
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x131
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_direction_FieldHandleType; // 0x138
		::UnityEngine::Vector2 ESPP_direction; // 0x13C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_0BF1620F1E4289BD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_0BF1620F1E4289BD_OFFSET))(this, a1);
		}

		::System::Void Method_5_1855D8D66EEBAF7E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_1855D8D66EEBAF7E_OFFSET))(this, a1);
		}

		::System::Void Method_5_C8CC3F1CE7238E46(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_C8CC3F1CE7238E46_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_65BB8F0F1E258993_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_METHOD_5_65BB8F0F1E258993_1_OFFSET))(this, a1);
		}
	};
}
