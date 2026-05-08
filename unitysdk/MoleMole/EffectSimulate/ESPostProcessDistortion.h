#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityDistortionEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16B74F50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16B74D60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x16B74D30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16B74E20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16B744B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16B747F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x16B743F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x16B746E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x16B74610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x16B745B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_538B1538FFCC3586_OFFSET UNITYSDK_OFFSET(0x16B74730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x16B74F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x16B75100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16B6E8F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x16B6F990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x16B74D40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16B74D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x16B744F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x16B74670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16B74440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_98B37EE2C09006BA_OFFSET UNITYSDK_OFFSET(0x16B73EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x16B74070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_9D8EF9AD3B13BD0E_1_OFFSET UNITYSDK_OFFSET(0x16B73670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x16B72E40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_9E93A3CD963FC72F_OFFSET UNITYSDK_OFFSET(0x16B72070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x16B74EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16B74560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A4D542D66439C65E_OFFSET UNITYSDK_OFFSET(0x16B6FCB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x16B6EB70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x16B75040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x16B74FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x16B73F80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x16B75060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x16B742D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x16B75000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16B75070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16B6EB30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x16B743A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x16B6EE00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x16B74E00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16B74F60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x16B749D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x16B75050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16B74E10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16B74A90)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessDistortion_TypeDefinitionIndex = 57546;

	class ESPostProcessDistortion : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Distortion*>
	{
	public:
		::MoleMole::Config::ConfigEntityDistortionEffects* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _DefaultSeparateRGBIntensity; // 0xBC
		::System::Int32 _VolDefault_downScaleFactor; // 0xC0
		::System::Single _VolDefault_intensity; // 0xC4
		::UnityEngine::Vector3 _VolDefault_rgbShift; // 0xC8
		::System::Single _VolDefault_separateRGBIntensity; // 0xD4
		::System::Boolean _VolDefault_forceActive; // 0xD8
		::System::Boolean _VolDefault_forceDistortionOnLowPlatform; // 0xD9
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType _VolDefault_effectRenderQueue; // 0xDC
		::System::Boolean _VolPreVal_downScaleFactor_overrideState; // 0xE0
		::System::Int32 _VolPreVal_downScaleFactor; // 0xE4
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xE8
		::System::Single _VolPreVal_intensity; // 0xEC
		::System::Boolean _VolPreVal_rgbShift_overrideState; // 0xF0
		::UnityEngine::Vector3 _VolPreVal_rgbShift; // 0xF4
		::System::Boolean _VolPreVal_separateRGBIntensity_overrideState; // 0x100
		::System::Single _VolPreVal_separateRGBIntensity; // 0x104
		::System::Boolean _VolPreVal_forceActive_overrideState; // 0x108
		::System::Boolean _VolPreVal_forceActive; // 0x109
		::System::Boolean _VolPreVal_forceDistortionOnLowPlatform_overrideState; // 0x10A
		::System::Boolean _VolPreVal_forceDistortionOnLowPlatform; // 0x10B
		::System::Boolean _VolPreVal_effectRenderQueue_overrideState; // 0x10C
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType _VolPreVal_effectRenderQueue; // 0x110
		::System::Single _TimelineCurveFirstVal_intensity; // 0x114
		::System::Single _TimelineCurveLastVal_intensity; // 0x118
		::System::Single _TimelineCurveFirstVal_separateRGBIntensity; // 0x11C
		::System::Single _TimelineCurveLastVal_separateRGBIntensity; // 0x120
		::System::Boolean _TimelineCurveFirstVal_forceActive; // 0x124
		::System::Boolean _TimelineCurveLastVal_forceActive; // 0x125
		::System::Boolean _TimelineCurveFirstVal_forceDistortionOnLowPlatform; // 0x126
		::System::Boolean _TimelineCurveLastVal_forceDistortionOnLowPlatform; // 0x127
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downScaleFactor_FieldHandleType; // 0x128
		::System::Int32 ESPP_downScaleFactor; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x130
		::System::Boolean ESPP_intensity_UseIt; // 0x134
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x138
		::System::Boolean ESPP_intensity_EnableFade; // 0x140
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x141
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rgbShift_FieldHandleType; // 0x148
		::UnityEngine::Vector3 ESPP_rgbShift; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_separateRGBIntensity_FieldHandleType; // 0x158
		::System::Boolean ESPP_separateRGBIntensity_UseIt; // 0x15C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_separateRGBIntensity; // 0x160
		::System::Boolean ESPP_separateRGBIntensity_EnableFade; // 0x168
		::System::Boolean ESPP_separateRGBIntensity_EnableOverrideDefaultValue; // 0x169
		::System::Single ESPP_separateRGBIntensity_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceActive_FieldHandleType; // 0x170
		::System::Boolean ESPP_forceActive_UseIt; // 0x174
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceActive; // 0x178
		::System::Boolean ESPP_forceActive_EnableFade; // 0x180
		::System::Boolean ESPP_forceActive_EnableOverrideDefaultValue; // 0x181
		::System::Boolean ESPP_forceActive_OverrideDefaultValue; // 0x182
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceDistortionOnLowPlatform_FieldHandleType; // 0x184
		::System::Boolean ESPP_forceDistortionOnLowPlatform_UseIt; // 0x188
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceDistortionOnLowPlatform; // 0x190
		::System::Boolean ESPP_forceDistortionOnLowPlatform_EnableFade; // 0x198
		::System::Boolean ESPP_forceDistortionOnLowPlatform_EnableOverrideDefaultValue; // 0x199
		::System::Boolean ESPP_forceDistortionOnLowPlatform_OverrideDefaultValue; // 0x19A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_effectRenderQueue_FieldHandleType; // 0x19C
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType ESPP_effectRenderQueue; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_A4D542D66439C65E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A4D542D66439C65E_OFFSET))(this, a1);
		}

		::System::Void Method_5_9E93A3CD963FC72F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_9E93A3CD963FC72F_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D8EF9AD3B13BD0E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D8EF9AD3B13BD0E_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_9D8EF9AD3B13BD0E_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_98B37EE2C09006BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_98B37EE2C09006BA_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_538B1538FFCC3586(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_538B1538FFCC3586_OFFSET))(this, a1);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_E05ADF64DE351167(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E05ADF64DE351167_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}
	};
}
