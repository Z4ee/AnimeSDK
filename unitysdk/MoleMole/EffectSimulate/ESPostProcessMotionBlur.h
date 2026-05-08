#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

namespace MoleMole::Config { class ConfigEntityMotionBlurEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0xFB1D8E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xFB1E8B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xFB1E180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0xFB1C390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xFB1E7B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xFB1E630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xFB1E8C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xFB1DE60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xFB1DDA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xFB1E090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xFB1DFC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xFB1DF60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_521267F2AEE4A422_OFFSET UNITYSDK_OFFSET(0xFB1AE20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0xFB1E2F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_538B1538FFCC3586_OFFSET UNITYSDK_OFFSET(0xFB1E0E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xFB1E640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xFB1E660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xFB19FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xFB1ABB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0xFB1E850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_79E872D90798D236_1_OFFSET UNITYSDK_OFFSET(0xFB1D2E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0xFB1CCE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xFB1A460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xFB1E970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xFB1A200)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xFB1DEA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xFB1E020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xFB1DDF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0xFB1DA90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xFB1E680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xFB1DF10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xFB1E950)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xFB1E8A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xFB1D9A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xFB1E650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0xFB1DC80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xFB1E860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFB1E5A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB1A1C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xFB1DD50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xFB1E960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xFB1E710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xFB1E7A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xFB1E670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0xFB1E390)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessMotionBlur_TypeDefinitionIndex = 38808;

	class ESPostProcessMotionBlur : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::MotionBlur*>
	{
	public:
		::MoleMole::Config::ConfigEntityMotionBlurEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_intensity; // 0xB8
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode _VolDefault_mode; // 0xBC
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection _VolDefault_direction; // 0xC0
		::System::Single _VolDefault_motionVectorBlendRadius; // 0xC4
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality _VolDefault_quality; // 0xC8
		::System::Single _VolDefault_clamp; // 0xCC
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xD0
		::System::Single _VolPreVal_intensity; // 0xD4
		::System::Boolean _VolPreVal_mode_overrideState; // 0xD8
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode _VolPreVal_mode; // 0xDC
		::System::Boolean _VolPreVal_direction_overrideState; // 0xE0
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection _VolPreVal_direction; // 0xE4
		::System::Boolean _VolPreVal_motionVectorBlendRadius_overrideState; // 0xE8
		::System::Single _VolPreVal_motionVectorBlendRadius; // 0xEC
		::System::Boolean _VolPreVal_quality_overrideState; // 0xF0
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality _VolPreVal_quality; // 0xF4
		::System::Boolean _VolPreVal_clamp_overrideState; // 0xF8
		::System::Single _VolPreVal_clamp; // 0xFC
		::System::Single _TimelineCurveFirstVal_intensity; // 0x100
		::System::Single _TimelineCurveLastVal_intensity; // 0x104
		::System::Single _TimelineCurveFirstVal_motionVectorBlendRadius; // 0x108
		::System::Single _TimelineCurveLastVal_motionVectorBlendRadius; // 0x10C
		::System::Single _TimelineCurveFirstVal_clamp; // 0x110
		::System::Single _TimelineCurveLastVal_clamp; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x118
		::System::Boolean ESPP_intensity_UseIt; // 0x11C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x120
		::System::Boolean ESPP_intensity_EnableFade; // 0x128
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x129
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mode_FieldHandleType; // 0x130
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode ESPP_mode; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_direction_FieldHandleType; // 0x138
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection ESPP_direction; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_motionVectorBlendRadius_FieldHandleType; // 0x140
		::System::Boolean ESPP_motionVectorBlendRadius_UseIt; // 0x144
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_motionVectorBlendRadius; // 0x148
		::System::Boolean ESPP_motionVectorBlendRadius_EnableFade; // 0x150
		::System::Boolean ESPP_motionVectorBlendRadius_EnableOverrideDefaultValue; // 0x151
		::System::Single ESPP_motionVectorBlendRadius_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_quality_FieldHandleType; // 0x158
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality ESPP_quality; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_clamp_FieldHandleType; // 0x160
		::System::Boolean ESPP_clamp_UseIt; // 0x164
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_clamp; // 0x168
		::System::Boolean ESPP_clamp_EnableFade; // 0x170
		::System::Boolean ESPP_clamp_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_clamp_OverrideDefaultValue; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_521267F2AEE4A422(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_521267F2AEE4A422_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_79E872D90798D236(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_79E872D90798D236_OFFSET))(this, a1);
		}

		::System::Void Method_5_79E872D90798D236_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_79E872D90798D236_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_1092C5537716905B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_1092C5537716905B_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_538B1538FFCC3586(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_538B1538FFCC3586_OFFSET))(this, a1);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_52CA0F45BC3414DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_52CA0F45BC3414DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_METHOD_5_832295EC279E5994_OFFSET))(this);
		}
	};
}
