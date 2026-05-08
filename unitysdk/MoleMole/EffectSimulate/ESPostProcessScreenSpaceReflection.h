#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x149787F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14979320)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2561DC986DD32699_1_OFFSET UNITYSDK_OFFSET(0x149768E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2561DC986DD32699_2_OFFSET UNITYSDK_OFFSET(0x14977350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x14973D70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14979100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x14979030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x149791B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14978470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x149783B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x149786A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x149785D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x14978570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x149791A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x14979250)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_594D45A47A873869_OFFSET UNITYSDK_OFFSET(0x14975C30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x149729D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x149738F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x14978FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x149790F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x149786F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x149784B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x14978630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x14978400)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_8E7482C252877E8A_OFFSET UNITYSDK_OFFSET(0x14978AB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x14977FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x14979060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14978520)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x14972CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x14972F30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x14979270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x14979240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x14977EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x14979040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x14978290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x14978FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14979290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14972C70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x14978360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x14979260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x14978F50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x14979280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x14979050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x14977DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14978BB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessScreenSpaceReflection_TypeDefinitionIndex = 43855;

	class ESPostProcessScreenSpaceReflection : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ScreenSpaceReflection*>
	{
	public:
		::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enabled; // 0xB8
		::System::Single _VolDefault_intensity; // 0xBC
		::System::Single _VolDefault_depthBufferThickness; // 0xC0
		::System::Single _VolDefault_screenFadeDistance; // 0xC4
		::UnityEngine::NAPRenderPipeline0::SsrQuality _VolDefault_quality; // 0xC8
		::System::Boolean _VolDefault_overrideGlobalPlanarReflectionConfig; // 0xCC
		::System::Single _VolDefault_planarReflectionBlurAmount; // 0xD0
		::System::Boolean _VolPreVal_enabled_overrideState; // 0xD4
		::System::Boolean _VolPreVal_enabled; // 0xD5
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xD6
		::System::Single _VolPreVal_intensity; // 0xD8
		::System::Boolean _VolPreVal_depthBufferThickness_overrideState; // 0xDC
		::System::Single _VolPreVal_depthBufferThickness; // 0xE0
		::System::Boolean _VolPreVal_screenFadeDistance_overrideState; // 0xE4
		::System::Single _VolPreVal_screenFadeDistance; // 0xE8
		::System::Boolean _VolPreVal_quality_overrideState; // 0xEC
		::UnityEngine::NAPRenderPipeline0::SsrQuality _VolPreVal_quality; // 0xF0
		::System::Boolean _VolPreVal_overrideGlobalPlanarReflectionConfig_overrideState; // 0xF4
		::System::Boolean _VolPreVal_overrideGlobalPlanarReflectionConfig; // 0xF5
		::System::Boolean _VolPreVal_planarReflectionBlurAmount_overrideState; // 0xF6
		::System::Single _VolPreVal_planarReflectionBlurAmount; // 0xF8
		::System::Boolean _TimelineCurveFirstVal_enabled; // 0xFC
		::System::Boolean _TimelineCurveLastVal_enabled; // 0xFD
		::System::Single _TimelineCurveFirstVal_intensity; // 0x100
		::System::Single _TimelineCurveLastVal_intensity; // 0x104
		::System::Single _TimelineCurveFirstVal_depthBufferThickness; // 0x108
		::System::Single _TimelineCurveLastVal_depthBufferThickness; // 0x10C
		::System::Single _TimelineCurveFirstVal_screenFadeDistance; // 0x110
		::System::Single _TimelineCurveLastVal_screenFadeDistance; // 0x114
		::System::Boolean _TimelineCurveFirstVal_overrideGlobalPlanarReflectionConfig; // 0x118
		::System::Boolean _TimelineCurveLastVal_overrideGlobalPlanarReflectionConfig; // 0x119
		::System::Single _TimelineCurveFirstVal_planarReflectionBlurAmount; // 0x11C
		::System::Single _TimelineCurveLastVal_planarReflectionBlurAmount; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enabled_FieldHandleType; // 0x124
		::System::Boolean ESPP_enabled_UseIt; // 0x128
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enabled; // 0x130
		::System::Boolean ESPP_enabled_EnableFade; // 0x138
		::System::Boolean ESPP_enabled_EnableOverrideDefaultValue; // 0x139
		::System::Boolean ESPP_enabled_OverrideDefaultValue; // 0x13A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x13C
		::System::Boolean ESPP_intensity_UseIt; // 0x140
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x148
		::System::Boolean ESPP_intensity_EnableFade; // 0x150
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x151
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_depthBufferThickness_FieldHandleType; // 0x158
		::System::Boolean ESPP_depthBufferThickness_UseIt; // 0x15C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_depthBufferThickness; // 0x160
		::System::Boolean ESPP_depthBufferThickness_EnableFade; // 0x168
		::System::Boolean ESPP_depthBufferThickness_EnableOverrideDefaultValue; // 0x169
		::System::Single ESPP_depthBufferThickness_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenFadeDistance_FieldHandleType; // 0x170
		::System::Boolean ESPP_screenFadeDistance_UseIt; // 0x174
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenFadeDistance; // 0x178
		::System::Boolean ESPP_screenFadeDistance_EnableFade; // 0x180
		::System::Boolean ESPP_screenFadeDistance_EnableOverrideDefaultValue; // 0x181
		::System::Single ESPP_screenFadeDistance_OverrideDefaultValue; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_quality_FieldHandleType; // 0x188
		::UnityEngine::NAPRenderPipeline0::SsrQuality ESPP_quality; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideGlobalPlanarReflectionConfig_FieldHandleType; // 0x190
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_UseIt; // 0x194
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overrideGlobalPlanarReflectionConfig; // 0x198
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_EnableFade; // 0x1A0
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_EnableOverrideDefaultValue; // 0x1A1
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_OverrideDefaultValue; // 0x1A2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionBlurAmount_FieldHandleType; // 0x1A4
		::System::Boolean ESPP_planarReflectionBlurAmount_UseIt; // 0x1A8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionBlurAmount; // 0x1B0
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableFade; // 0x1B8
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_planarReflectionBlurAmount_OverrideDefaultValue; // 0x1BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_594D45A47A873869(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_594D45A47A873869_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2561DC986DD32699_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2561DC986DD32699_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_EBEE0D0A222A8264()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_EBEE0D0A222A8264_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_8E7482C252877E8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_8E7482C252877E8A_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}
	};
}
