#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_AudioEventParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_BlinkParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ChromaticAberrationParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ColorGradingParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_GaussianBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_LensGlitch2Parameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_PPPatternParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_RadialBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ScreenEffectParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_VignetteParameter.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_03AF999E66051930_OFFSET UNITYSDK_OFFSET(0xCC54BA0)
#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_2DC18F1D65E7C4E2_OFFSET UNITYSDK_OFFSET(0xCC557B0)
#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_2F2755BC1AD36AC5_OFFSET UNITYSDK_OFFSET(0xCC54E00)
#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_4EF88D36217F8FBF_OFFSET UNITYSDK_OFFSET(0xCC554A0)
#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_5C4BCAC59235143F_OFFSET UNITYSDK_OFFSET(0xCC542D0)
#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_70CA36E960F87111_OFFSET UNITYSDK_OFFSET(0xCC560F0)
#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_AC47A0BD30E4B486_OFFSET UNITYSDK_OFFSET(0xCC54840)
#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_B1300CD9F067AF72_OFFSET UNITYSDK_OFFSET(0xCC57140)
#define RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_BF3C1C4015A2B83C_OFFSET UNITYSDK_OFFSET(0xCC55160)
#define RPG_CUSTOMRP_PPFILTERSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCC562F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_TypeDefinitionIndex = 48476;

	class PPFilterStack : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::CustomRP::PPFilterStack_AudioEventParameter m_AudioEventParameter; // 0x18
		::RPG::CustomRP::PPFilterStack_ScreenEffectParameter m_ScreenEffectParameter; // 0x30
		::RPG::CustomRP::PPFilterStack_ColorGradingParameter m_colorGradingParameter; // 0x38
		::System::Boolean toneMappingCurveOverrideState; // 0x1BC
		::UnityEngine::AnimationCurve* toneMappingCurve; // 0x1C0
		::RPG::CustomRP::PPFilterStack_RadialBlurParameter m_radialBlurParameter; // 0x1C8
		::System::Boolean radialBlurCurveOverrideState; // 0x210
		::UnityEngine::AnimationCurve* radialBlurCurve; // 0x218
		::RPG::CustomRP::PPFilterStack_VignetteParameter m_vignetteParameter; // 0x220
		::System::Boolean vignetteCurveOverrideState; // 0x254
		::UnityEngine::AnimationCurve* vignetteCurve; // 0x258
		::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter m_chromaticParameter; // 0x260
		::System::Boolean chromaticCurveOverrideState; // 0x2A4
		::UnityEngine::AnimationCurve* chromaticCurve; // 0x2A8
		::RPG::CustomRP::PPFilterStack_BlinkParameter m_blinkParameter; // 0x2B0
		::System::Boolean blinkCurveOverrideState; // 0x318
		::UnityEngine::AnimationCurve* blinkCurve; // 0x320
		::RPG::CustomRP::PPFilterStack_GaussianBlurParameter m_gaussianBlurParameter; // 0x328
		::System::Boolean GaussianBlurCurveOverrideState; // 0x368
		::UnityEngine::AnimationCurve* GaussianBlurCurve; // 0x370
		::RPG::CustomRP::PPFilterStack_PPPatternParameter m_PPPatternParameter; // 0x378
		::System::Boolean PPPatternParameterOverrideState; // 0x5C0
		::UnityEngine::AnimationCurve* PPPatternCurve; // 0x5C8
		::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter m_LensGlitch2Parameter; // 0x5D0
		::System::Boolean LensGlitch2CurveOverrideState; // 0x608
		::UnityEngine::AnimationCurve* LensGlitch2Curve; // 0x610

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK__CTOR_OFFSET))(this);
		}

		::RPG::CustomRP::PPFilterStack_ColorGradingParameter Method_3_5C4BCAC59235143F(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_ColorGradingParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_5C4BCAC59235143F_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_RadialBlurParameter Method_3_AC47A0BD30E4B486(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_RadialBlurParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_AC47A0BD30E4B486_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_VignetteParameter Method_3_03AF999E66051930(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_VignetteParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_03AF999E66051930_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter Method_3_2F2755BC1AD36AC5(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_2F2755BC1AD36AC5_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_BlinkParameter Method_3_BF3C1C4015A2B83C(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_BlinkParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_BF3C1C4015A2B83C_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_GaussianBlurParameter Method_3_4EF88D36217F8FBF(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_GaussianBlurParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_4EF88D36217F8FBF_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_PPPatternParameter Method_3_2DC18F1D65E7C4E2(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_PPPatternParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_2DC18F1D65E7C4E2_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter Method_3_70CA36E960F87111(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_70CA36E960F87111_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_B1300CD9F067AF72(::RPG::GameCore::PPEffectFilterType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_METHOD_3_B1300CD9F067AF72_OFFSET))(this, a1);
		}
	};
}
