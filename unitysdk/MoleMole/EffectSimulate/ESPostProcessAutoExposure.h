#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityAutoExposureEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class AutoExposure; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x183F9990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x183FA180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x183FA270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x183FA470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x183FA190)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x183F9610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x183F9550)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x183F9840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x183F9770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x183F9710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x183F5540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x183FA550)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x183FA490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x183F4360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_72EE0536B7197A31_1_OFFSET UNITYSDK_OFFSET(0x183F84E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_72EE0536B7197A31_OFFSET UNITYSDK_OFFSET(0x183F7A60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x183F50C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x183FA220)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_7A5EE891DA69F667_OFFSET UNITYSDK_OFFSET(0x183F6F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x183FA440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x183F9890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x183F4640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x183F9650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x183F97D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x183F95A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_8E7482C252877E8A_OFFSET UNITYSDK_OFFSET(0x183F9C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x183F9180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x183FA4C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x183F96C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x183F48B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x183FA4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x183FA460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x183F9090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x183FA480)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x183F9430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x183FA230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x183FA310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x183F4600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x183F9500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x183FA4A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x183FA3A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x183FA450)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x183FA430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x183F8F60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0x183F9D80)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessAutoExposure_TypeDefinitionIndex = 72374;

	class ESPostProcessAutoExposure : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::AutoExposure*>
	{
	public:
		::MoleMole::Config::ConfigEntityAutoExposureEffects* m_stAsset; // 0xB0
		::UnityEngine::Vector2 _VolDefault_Filtering; // 0xB8
		::UnityEngine::Vector2 _VolDefault_LuminanceRange; // 0xC0
		::System::Single _VolDefault_ExposureCompensation; // 0xC8
		::System::Boolean _VolDefault_ProgressiveEyeAdaptation; // 0xCC
		::System::Single _VolDefault_SpeedUp; // 0xD0
		::System::Single _VolDefault_SpeedDown; // 0xD4
		::System::Boolean _VolPreVal_Filtering_overrideState; // 0xD8
		::UnityEngine::Vector2 _VolPreVal_Filtering; // 0xDC
		::System::Boolean _VolPreVal_LuminanceRange_overrideState; // 0xE4
		::UnityEngine::Vector2 _VolPreVal_LuminanceRange; // 0xE8
		::System::Boolean _VolPreVal_ExposureCompensation_overrideState; // 0xF0
		::System::Single _VolPreVal_ExposureCompensation; // 0xF4
		::System::Boolean _VolPreVal_ProgressiveEyeAdaptation_overrideState; // 0xF8
		::System::Boolean _VolPreVal_ProgressiveEyeAdaptation; // 0xF9
		::System::Boolean _VolPreVal_SpeedUp_overrideState; // 0xFA
		::System::Single _VolPreVal_SpeedUp; // 0xFC
		::System::Boolean _VolPreVal_SpeedDown_overrideState; // 0x100
		::System::Single _VolPreVal_SpeedDown; // 0x104
		::UnityEngine::Vector2 _TimelineCurveFirstVal_Filtering; // 0x108
		::UnityEngine::Vector2 _TimelineCurveLastVal_Filtering; // 0x110
		::UnityEngine::Vector2 _TimelineCurveFirstVal_LuminanceRange; // 0x118
		::UnityEngine::Vector2 _TimelineCurveLastVal_LuminanceRange; // 0x120
		::System::Single _TimelineCurveFirstVal_ExposureCompensation; // 0x128
		::System::Single _TimelineCurveLastVal_ExposureCompensation; // 0x12C
		::System::Boolean _TimelineCurveFirstVal_ProgressiveEyeAdaptation; // 0x130
		::System::Boolean _TimelineCurveLastVal_ProgressiveEyeAdaptation; // 0x131
		::System::Single _TimelineCurveFirstVal_SpeedUp; // 0x134
		::System::Single _TimelineCurveLastVal_SpeedUp; // 0x138
		::System::Single _TimelineCurveFirstVal_SpeedDown; // 0x13C
		::System::Single _TimelineCurveLastVal_SpeedDown; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Filtering_FieldHandleType; // 0x144
		::System::Boolean ESPP_Filtering_UseIt; // 0x148
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_Filtering; // 0x150
		::System::Boolean ESPP_Filtering_EnableFade; // 0x158
		::System::Boolean ESPP_Filtering_EnableOverrideDefaultValue; // 0x159
		::UnityEngine::Vector2 ESPP_Filtering_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_LuminanceRange_FieldHandleType; // 0x164
		::System::Boolean ESPP_LuminanceRange_UseIt; // 0x168
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_LuminanceRange; // 0x170
		::System::Boolean ESPP_LuminanceRange_EnableFade; // 0x178
		::System::Boolean ESPP_LuminanceRange_EnableOverrideDefaultValue; // 0x179
		::UnityEngine::Vector2 ESPP_LuminanceRange_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ExposureCompensation_FieldHandleType; // 0x184
		::System::Boolean ESPP_ExposureCompensation_UseIt; // 0x188
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_ExposureCompensation; // 0x190
		::System::Boolean ESPP_ExposureCompensation_EnableFade; // 0x198
		::System::Boolean ESPP_ExposureCompensation_EnableOverrideDefaultValue; // 0x199
		::System::Single ESPP_ExposureCompensation_OverrideDefaultValue; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ProgressiveEyeAdaptation_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_ProgressiveEyeAdaptation_UseIt; // 0x1A4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ProgressiveEyeAdaptation; // 0x1A8
		::System::Boolean ESPP_ProgressiveEyeAdaptation_EnableFade; // 0x1B0
		::System::Boolean ESPP_ProgressiveEyeAdaptation_EnableOverrideDefaultValue; // 0x1B1
		::System::Boolean ESPP_ProgressiveEyeAdaptation_OverrideDefaultValue; // 0x1B2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_SpeedUp_FieldHandleType; // 0x1B4
		::System::Boolean ESPP_SpeedUp_UseIt; // 0x1B8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_SpeedUp; // 0x1C0
		::System::Boolean ESPP_SpeedUp_EnableFade; // 0x1C8
		::System::Boolean ESPP_SpeedUp_EnableOverrideDefaultValue; // 0x1C9
		::System::Single ESPP_SpeedUp_OverrideDefaultValue; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_SpeedDown_FieldHandleType; // 0x1D0
		::System::Boolean ESPP_SpeedDown_UseIt; // 0x1D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_SpeedDown; // 0x1D8
		::System::Boolean ESPP_SpeedDown_EnableFade; // 0x1E0
		::System::Boolean ESPP_SpeedDown_EnableOverrideDefaultValue; // 0x1E1
		::System::Single ESPP_SpeedDown_OverrideDefaultValue; // 0x1E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A5EE891DA69F667(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_7A5EE891DA69F667_OFFSET))(this, a1);
		}

		::System::Void Method_5_72EE0536B7197A31(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_72EE0536B7197A31_OFFSET))(this, a1);
		}

		::System::Void Method_5_72EE0536B7197A31_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_72EE0536B7197A31_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_EBEE0D0A222A8264()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_EBEE0D0A222A8264_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_8E7482C252877E8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_8E7482C252877E8A_OFFSET))(this, a1);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}
	};
}
