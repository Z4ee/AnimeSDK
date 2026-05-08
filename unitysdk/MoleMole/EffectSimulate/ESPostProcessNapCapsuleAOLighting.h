#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class NapCapsuleAOLighting; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0x14963D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x149641F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2561DC986DD32699_1_OFFSET UNITYSDK_OFFSET(0x14961FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2561DC986DD32699_2_OFFSET UNITYSDK_OFFSET(0x149628B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x14960070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x149643C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x14964130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x14964210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x149637A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x149636E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x149639D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x14963900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x149638A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x149643A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x14964460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1495F0A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x1495FCA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x149643B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14964200)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x14963A20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x149637E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x14963960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x14963730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x14963370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x14961640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x14964470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14963850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x1495F590)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x149642B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x14964150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x14963280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x14964140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x149635C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x14964360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x149642C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1495F310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x14963690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x149642A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1495F350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x14964160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x14964500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x14964350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x14963170)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14963B00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x14963E30)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessNapCapsuleAOLighting_TypeDefinitionIndex = 48217;

	class ESPostProcessNapCapsuleAOLighting : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*>
	{
	public:
		::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enableCapsuleAO; // 0xB8
		::System::Single _VolDefault_ambientIntensity; // 0xBC
		::System::Single _VolDefault_shadowIntensity; // 0xC0
		::System::Single _VolDefault_shadowSharpness; // 0xC4
		::System::Single _VolDefault_luminanceBlend; // 0xC8
		::System::Boolean _VolPreVal_enableCapsuleAO_overrideState; // 0xCC
		::System::Boolean _VolPreVal_enableCapsuleAO; // 0xCD
		::System::Boolean _VolPreVal_ambientIntensity_overrideState; // 0xCE
		::System::Single _VolPreVal_ambientIntensity; // 0xD0
		::System::Boolean _VolPreVal_shadowIntensity_overrideState; // 0xD4
		::System::Single _VolPreVal_shadowIntensity; // 0xD8
		::System::Boolean _VolPreVal_shadowSharpness_overrideState; // 0xDC
		::System::Single _VolPreVal_shadowSharpness; // 0xE0
		::System::Boolean _VolPreVal_luminanceBlend_overrideState; // 0xE4
		::System::Single _VolPreVal_luminanceBlend; // 0xE8
		::System::Boolean _TimelineCurveFirstVal_enableCapsuleAO; // 0xEC
		::System::Boolean _TimelineCurveLastVal_enableCapsuleAO; // 0xED
		::System::Single _TimelineCurveFirstVal_ambientIntensity; // 0xF0
		::System::Single _TimelineCurveLastVal_ambientIntensity; // 0xF4
		::System::Single _TimelineCurveFirstVal_shadowIntensity; // 0xF8
		::System::Single _TimelineCurveLastVal_shadowIntensity; // 0xFC
		::System::Single _TimelineCurveFirstVal_shadowSharpness; // 0x100
		::System::Single _TimelineCurveLastVal_shadowSharpness; // 0x104
		::System::Single _TimelineCurveFirstVal_luminanceBlend; // 0x108
		::System::Single _TimelineCurveLastVal_luminanceBlend; // 0x10C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCapsuleAO_FieldHandleType; // 0x110
		::System::Boolean ESPP_enableCapsuleAO_UseIt; // 0x114
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableCapsuleAO; // 0x118
		::System::Boolean ESPP_enableCapsuleAO_EnableFade; // 0x120
		::System::Boolean ESPP_enableCapsuleAO_EnableOverrideDefaultValue; // 0x121
		::System::Boolean ESPP_enableCapsuleAO_OverrideDefaultValue; // 0x122
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambientIntensity_FieldHandleType; // 0x124
		::System::Boolean ESPP_ambientIntensity_UseIt; // 0x128
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_ambientIntensity; // 0x130
		::System::Boolean ESPP_ambientIntensity_EnableFade; // 0x138
		::System::Boolean ESPP_ambientIntensity_EnableOverrideDefaultValue; // 0x139
		::System::Single ESPP_ambientIntensity_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowIntensity_FieldHandleType; // 0x140
		::System::Boolean ESPP_shadowIntensity_UseIt; // 0x144
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowIntensity; // 0x148
		::System::Boolean ESPP_shadowIntensity_EnableFade; // 0x150
		::System::Boolean ESPP_shadowIntensity_EnableOverrideDefaultValue; // 0x151
		::System::Single ESPP_shadowIntensity_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowSharpness_FieldHandleType; // 0x158
		::System::Boolean ESPP_shadowSharpness_UseIt; // 0x15C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowSharpness; // 0x160
		::System::Boolean ESPP_shadowSharpness_EnableFade; // 0x168
		::System::Boolean ESPP_shadowSharpness_EnableOverrideDefaultValue; // 0x169
		::System::Single ESPP_shadowSharpness_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_luminanceBlend_FieldHandleType; // 0x170
		::System::Boolean ESPP_luminanceBlend_UseIt; // 0x174
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_luminanceBlend; // 0x178
		::System::Boolean ESPP_luminanceBlend_EnableFade; // 0x180
		::System::Boolean ESPP_luminanceBlend_EnableOverrideDefaultValue; // 0x181
		::System::Single ESPP_luminanceBlend_OverrideDefaultValue; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D8EF9AD3B13BD0E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2561DC986DD32699_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2561DC986DD32699_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_EBEE0D0A222A8264()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_EBEE0D0A222A8264_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_0AD139A96804E15E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_0AD139A96804E15E_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}
	};
}
