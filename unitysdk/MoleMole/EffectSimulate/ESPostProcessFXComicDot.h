#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityFXComicDotEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A957780)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_1AB9D4E0D4B0F708_OFFSET UNITYSDK_OFFSET(0x1A958AA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x1A957EC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_499C93D7C9F81C2E_OFFSET UNITYSDK_OFFSET(0x1A957AD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_59791C706EFFC2BA_OFFSET UNITYSDK_OFFSET(0x1A958040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_72EE0536B7197A31_1_OFFSET UNITYSDK_OFFSET(0x1A959530)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_72EE0536B7197A31_OFFSET UNITYSDK_OFFSET(0x1A959020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A957940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1A957950)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A959A40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXComicDot_TypeDefinitionIndex = 80585;

	class ESPostProcessFXComicDot : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::FXComicDot*>
	{
	public:
		::MoleMole::Config::ConfigEntityFXComicDotEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_pixelationOn; // 0xB8
		::System::Single _VolDefault_pixelSize; // 0xBC
		::System::Boolean _VolPreVal_pixelationOn_overrideState; // 0xC0
		::System::Boolean _VolPreVal_pixelationOn; // 0xC1
		::System::Boolean _VolPreVal_pixelSize_overrideState; // 0xC2
		::System::Single _VolPreVal_pixelSize; // 0xC4
		::System::Boolean _TimelineCurveFirstVal_pixelationOn; // 0xC8
		::System::Boolean _TimelineCurveLastVal_pixelationOn; // 0xC9
		::System::Single _TimelineCurveFirstVal_pixelSize; // 0xCC
		::System::Single _TimelineCurveLastVal_pixelSize; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_pixelationOn_FieldHandleType; // 0xD4
		::System::Boolean ESPP_pixelationOn_UseIt; // 0xD8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_pixelationOn; // 0xE0
		::System::Boolean ESPP_pixelationOn_EnableFade; // 0xE8
		::System::Boolean ESPP_pixelationOn_EnableOverrideDefaultValue; // 0xE9
		::System::Boolean ESPP_pixelationOn_OverrideDefaultValue; // 0xEA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_pixelSize_FieldHandleType; // 0xEC
		::System::Boolean ESPP_pixelSize_UseIt; // 0xF0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_pixelSize; // 0xF8
		::System::Boolean ESPP_pixelSize_EnableFade; // 0x100
		::System::Boolean ESPP_pixelSize_EnableOverrideDefaultValue; // 0x101
		::System::Single ESPP_pixelSize_OverrideDefaultValue; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_499C93D7C9F81C2E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_499C93D7C9F81C2E_OFFSET))(this);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_59791C706EFFC2BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_1AB9D4E0D4B0F708(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_1AB9D4E0D4B0F708_OFFSET))(this, a1);
		}

		::System::Void Method_5_72EE0536B7197A31(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_72EE0536B7197A31_OFFSET))(this, a1);
		}

		::System::Void Method_5_72EE0536B7197A31_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_METHOD_5_72EE0536B7197A31_1_OFFSET))(this, a1);
		}
	};
}
