#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigGaussianBlurEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17574480)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x175700D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x175742F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x175745E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x17574550)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17573A00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17573D40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x17573940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x17573C30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x17573B60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x17573B00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_538B1538FFCC3586_OFFSET UNITYSDK_OFFSET(0x17573C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x17574610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x17574630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_59791C706EFFC2BA_OFFSET UNITYSDK_OFFSET(0x175719C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1756F010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x1756FDB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x175745F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17574540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1756F290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x17573A40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x17573BC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x17573990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_98B37EE2C09006BA_OFFSET UNITYSDK_OFFSET(0x17573420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x175735F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x17574490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17573AB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x17574620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x17574470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x17573500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x17574530)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x17573820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x17574430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17574260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1756F250)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x175738F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x1756F4F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D4975DF907B2431F_1_OFFSET UNITYSDK_OFFSET(0x17572C70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x175724C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x17574520)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x175743A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x17573F20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x17574600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17574390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17573FE0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessGaussianBlur_TypeDefinitionIndex = 76676;

	class ESPostProcessGaussianBlur : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::GaussianBlur*>
	{
	public:
		::MoleMole::Config::ConfigGaussianBlurEffects* m_stAsset; // 0xB0
		::System::Int32 _VolDefault_downSample; // 0xB8
		::System::Single _VolDefault_radius; // 0xBC
		::UnityEngine::Texture* _VolDefault_mask; // 0xC0
		::System::Single _VolDefault_maskTiling; // 0xC8
		::System::Single _VolDefault_maskRotation; // 0xCC
		::System::Boolean _VolDefault_maskDebug; // 0xD0
		::System::Boolean _VolPreVal_downSample_overrideState; // 0xD1
		::System::Int32 _VolPreVal_downSample; // 0xD4
		::System::Boolean _VolPreVal_radius_overrideState; // 0xD8
		::System::Single _VolPreVal_radius; // 0xDC
		::System::Boolean _VolPreVal_mask_overrideState; // 0xE0
		::UnityEngine::Texture* _VolPreVal_mask; // 0xE8
		::System::Boolean _VolPreVal_maskTiling_overrideState; // 0xF0
		::System::Single _VolPreVal_maskTiling; // 0xF4
		::System::Boolean _VolPreVal_maskRotation_overrideState; // 0xF8
		::System::Single _VolPreVal_maskRotation; // 0xFC
		::System::Boolean _VolPreVal_maskDebug_overrideState; // 0x100
		::System::Boolean _VolPreVal_maskDebug; // 0x101
		::System::Single _TimelineCurveFirstVal_radius; // 0x104
		::System::Single _TimelineCurveLastVal_radius; // 0x108
		::System::Single _TimelineCurveFirstVal_maskTiling; // 0x10C
		::System::Single _TimelineCurveLastVal_maskTiling; // 0x110
		::System::Single _TimelineCurveFirstVal_maskRotation; // 0x114
		::System::Single _TimelineCurveLastVal_maskRotation; // 0x118
		::System::Boolean _TimelineCurveFirstVal_maskDebug; // 0x11C
		::System::Boolean _TimelineCurveLastVal_maskDebug; // 0x11D
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x120
		::System::Int32 ESPP_downSample; // 0x124
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x128
		::System::Boolean ESPP_radius_UseIt; // 0x12C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x130
		::System::Boolean ESPP_radius_EnableFade; // 0x138
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x139
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mask_FieldHandleType; // 0x140
		::UnityEngine::Texture* ESPP_mask; // 0x148
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskTiling_FieldHandleType; // 0x150
		::System::Boolean ESPP_maskTiling_UseIt; // 0x154
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maskTiling; // 0x158
		::System::Boolean ESPP_maskTiling_EnableFade; // 0x160
		::System::Boolean ESPP_maskTiling_EnableOverrideDefaultValue; // 0x161
		::System::Single ESPP_maskTiling_OverrideDefaultValue; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskRotation_FieldHandleType; // 0x168
		::System::Boolean ESPP_maskRotation_UseIt; // 0x16C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maskRotation; // 0x170
		::System::Boolean ESPP_maskRotation_EnableFade; // 0x178
		::System::Boolean ESPP_maskRotation_EnableOverrideDefaultValue; // 0x179
		::System::Single ESPP_maskRotation_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskDebug_FieldHandleType; // 0x180
		::System::Boolean ESPP_maskDebug_UseIt; // 0x184
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_maskDebug; // 0x188
		::System::Boolean ESPP_maskDebug_EnableFade; // 0x190
		::System::Boolean ESPP_maskDebug_EnableOverrideDefaultValue; // 0x191
		::System::Boolean ESPP_maskDebug_OverrideDefaultValue; // 0x192

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_59791C706EFFC2BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_D4975DF907B2431F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D4975DF907B2431F_OFFSET))(this, a1);
		}

		::System::Void Method_5_D4975DF907B2431F_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D4975DF907B2431F_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_98B37EE2C09006BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_98B37EE2C09006BA_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_538B1538FFCC3586(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_538B1538FFCC3586_OFFSET))(this, a1);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_E05ADF64DE351167(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E05ADF64DE351167_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}
	};
}
