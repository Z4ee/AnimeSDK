#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigLensDistortions; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_070E78F7BE10761C_OFFSET UNITYSDK_OFFSET(0x10DF9950)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x10DFC4C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x10DFD040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x10DFC790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10DFCF90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x10DFBA80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x10DFCE00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x10DFCD60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10DFC140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x10DFC080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_48E6499EBC7D9052_OFFSET UNITYSDK_OFFSET(0x10DFC3C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x10DFC370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x10DFC2A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x10DFC240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x10DF80F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x10DFCED0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x10DFCF80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x10DF6EE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x10DF7C60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x10DFCDF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x10DF7440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10DFCF70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x10DF71C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_8649317719F42121_1_OFFSET UNITYSDK_OFFSET(0x10DFAFA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x10DFA4C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x10DFC180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x10DFC300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x10DFC0D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x10DFBCA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x10DFCC80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x10DFC1F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x10DFD030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x10DFCEC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x10DFBBB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x10DFCEA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x10DFBF60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x10DFCD10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10DFCE10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10DF7180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x10DFC030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x10DFCC70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x10DFCEE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x10DFCEB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x10DFCD50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10DFC890)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLensDistortion_TypeDefinitionIndex = 82404;

	class ESPostProcessLensDistortion : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::LensDistortion*>
	{
	public:
		::MoleMole::Config::ConfigLensDistortions* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _DefaultXMultiplier; // 0xBC
		::System::Single _DefaultYMultiplier; // 0xC0
		::System::Single _DefaultScale; // 0xC4
		::System::Single _DefaultDepthClip; // 0xC8
		::UnityEngine::Vector2 _DefaultCenter; // 0xCC
		::System::Single _VolDefault_intensity; // 0xD4
		::System::Single _VolDefault_xMultiplier; // 0xD8
		::System::Single _VolDefault_yMultiplier; // 0xDC
		::System::Single _VolDefault_scale; // 0xE0
		::System::Single _VolDefault_depthClip; // 0xE4
		::UnityEngine::Vector2 _VolDefault_center; // 0xE8
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xF0
		::System::Single _VolPreVal_intensity; // 0xF4
		::System::Boolean _VolPreVal_xMultiplier_overrideState; // 0xF8
		::System::Single _VolPreVal_xMultiplier; // 0xFC
		::System::Boolean _VolPreVal_yMultiplier_overrideState; // 0x100
		::System::Single _VolPreVal_yMultiplier; // 0x104
		::System::Boolean _VolPreVal_scale_overrideState; // 0x108
		::System::Single _VolPreVal_scale; // 0x10C
		::System::Boolean _VolPreVal_depthClip_overrideState; // 0x110
		::System::Single _VolPreVal_depthClip; // 0x114
		::System::Boolean _VolPreVal_center_overrideState; // 0x118
		::UnityEngine::Vector2 _VolPreVal_center; // 0x11C
		::System::Single _TimelineCurveFirstVal_intensity; // 0x124
		::System::Single _TimelineCurveLastVal_intensity; // 0x128
		::System::Single _TimelineCurveFirstVal_xMultiplier; // 0x12C
		::System::Single _TimelineCurveLastVal_xMultiplier; // 0x130
		::System::Single _TimelineCurveFirstVal_yMultiplier; // 0x134
		::System::Single _TimelineCurveLastVal_yMultiplier; // 0x138
		::System::Single _TimelineCurveFirstVal_scale; // 0x13C
		::System::Single _TimelineCurveLastVal_scale; // 0x140
		::System::Single _TimelineCurveFirstVal_depthClip; // 0x144
		::System::Single _TimelineCurveLastVal_depthClip; // 0x148
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x14C
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x15C
		::System::Boolean ESPP_intensity_UseIt; // 0x160
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x168
		::System::Boolean ESPP_intensity_EnableFade; // 0x170
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_xMultiplier_FieldHandleType; // 0x178
		::System::Boolean ESPP_xMultiplier_UseIt; // 0x17C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_xMultiplier; // 0x180
		::System::Boolean ESPP_xMultiplier_EnableFade; // 0x188
		::System::Boolean ESPP_xMultiplier_EnableOverrideDefaultValue; // 0x189
		::System::Single ESPP_xMultiplier_OverrideDefaultValue; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_yMultiplier_FieldHandleType; // 0x190
		::System::Boolean ESPP_yMultiplier_UseIt; // 0x194
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_yMultiplier; // 0x198
		::System::Boolean ESPP_yMultiplier_EnableFade; // 0x1A0
		::System::Boolean ESPP_yMultiplier_EnableOverrideDefaultValue; // 0x1A1
		::System::Single ESPP_yMultiplier_OverrideDefaultValue; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scale_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_scale_UseIt; // 0x1AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scale; // 0x1B0
		::System::Boolean ESPP_scale_EnableFade; // 0x1B8
		::System::Boolean ESPP_scale_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_scale_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_depthClip_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_depthClip_UseIt; // 0x1C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_depthClip; // 0x1C8
		::System::Boolean ESPP_depthClip_EnableFade; // 0x1D0
		::System::Boolean ESPP_depthClip_EnableOverrideDefaultValue; // 0x1D1
		::System::Single ESPP_depthClip_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x1D8
		::System::Boolean ESPP_center_UseIt; // 0x1DC
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x1E0
		::System::Boolean ESPP_center_EnableFade; // 0x1E8
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x1E9
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x1EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_070E78F7BE10761C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_070E78F7BE10761C_OFFSET))(this, a1);
		}

		::System::Void Method_5_8649317719F42121(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_8649317719F42121_OFFSET))(this, a1);
		}

		::System::Void Method_5_8649317719F42121_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_8649317719F42121_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_2CBE0B79DD36047E_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_48E6499EBC7D9052(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_48E6499EBC7D9052_OFFSET))(this, a1);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}
	};
}
