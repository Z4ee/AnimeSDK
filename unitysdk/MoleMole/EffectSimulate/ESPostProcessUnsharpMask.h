#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0x11728330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x117289A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11728A40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x11728960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x11728750)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11727D80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x11727CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x11727FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x11727EE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x11727E80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x11728710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x11728730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_59791C706EFFC2BA_OFFSET UNITYSDK_OFFSET(0x11723BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_5BD973238595BF89_OFFSET UNITYSDK_OFFSET(0x117257C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x17574640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_71456C0B214E6DAC_OFFSET UNITYSDK_OFFSET(0x11727720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x175754C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x11728980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11728970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x11728000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x175748F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x11727DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x11727F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x11727D10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x11727920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x117288B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11727E30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x11728990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x11728950)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_ABD8624DE9A02803_1_OFFSET UNITYSDK_OFFSET(0x11726D80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_ABD8624DE9A02803_OFFSET UNITYSDK_OFFSET(0x117263E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x11727830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x11728940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x11727BA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x117287E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11728820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x175748B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x11727C70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x17574B50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x11728740)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x117289B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x11728AE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x11728720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x117280E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x11728410)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessUnsharpMask_TypeDefinitionIndex = 51026;

	class ESPostProcessUnsharpMask : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::UnsharpMask*>
	{
	public:
		::MoleMole::Config::ConfigEntityUnsharpMaskEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enable; // 0xB8
		::System::Single _VolDefault_radius; // 0xBC
		::System::Single _VolDefault_amount; // 0xC0
		::System::Int32 _VolDefault_sampleCount; // 0xC4
		::System::Single _VolDefault_threshold; // 0xC8
		::System::Boolean _VolDefault_debugMode; // 0xCC
		::System::Boolean _VolPreVal_enable_overrideState; // 0xCD
		::System::Boolean _VolPreVal_enable; // 0xCE
		::System::Boolean _VolPreVal_radius_overrideState; // 0xCF
		::System::Single _VolPreVal_radius; // 0xD0
		::System::Boolean _VolPreVal_amount_overrideState; // 0xD4
		::System::Single _VolPreVal_amount; // 0xD8
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0xDC
		::System::Int32 _VolPreVal_sampleCount; // 0xE0
		::System::Boolean _VolPreVal_threshold_overrideState; // 0xE4
		::System::Single _VolPreVal_threshold; // 0xE8
		::System::Boolean _VolPreVal_debugMode_overrideState; // 0xEC
		::System::Boolean _VolPreVal_debugMode; // 0xED
		::System::Single _TimelineCurveFirstVal_radius; // 0xF0
		::System::Single _TimelineCurveLastVal_radius; // 0xF4
		::System::Single _TimelineCurveFirstVal_amount; // 0xF8
		::System::Single _TimelineCurveLastVal_amount; // 0xFC
		::System::Int32 _TimelineCurveFirstVal_sampleCount; // 0x100
		::System::Int32 _TimelineCurveLastVal_sampleCount; // 0x104
		::System::Single _TimelineCurveFirstVal_threshold; // 0x108
		::System::Single _TimelineCurveLastVal_threshold; // 0x10C
		::System::Boolean _TimelineCurveFirstVal_debugMode; // 0x110
		::System::Boolean _TimelineCurveLastVal_debugMode; // 0x111
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0x114
		::System::Boolean ESPP_enable; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x11C
		::System::Boolean ESPP_radius_UseIt; // 0x120
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x128
		::System::Boolean ESPP_radius_EnableFade; // 0x130
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x131
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_amount_FieldHandleType; // 0x138
		::System::Boolean ESPP_amount_UseIt; // 0x13C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_amount; // 0x140
		::System::Boolean ESPP_amount_EnableFade; // 0x148
		::System::Boolean ESPP_amount_EnableOverrideDefaultValue; // 0x149
		::System::Single ESPP_amount_OverrideDefaultValue; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x150
		::System::Boolean ESPP_sampleCount_UseIt; // 0x154
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sampleCount; // 0x158
		::System::Boolean ESPP_sampleCount_EnableFade; // 0x160
		::System::Boolean ESPP_sampleCount_EnableOverrideDefaultValue; // 0x161
		::System::Int32 ESPP_sampleCount_OverrideDefaultValue; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_threshold_FieldHandleType; // 0x168
		::System::Boolean ESPP_threshold_UseIt; // 0x16C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_threshold; // 0x170
		::System::Boolean ESPP_threshold_EnableFade; // 0x178
		::System::Boolean ESPP_threshold_EnableOverrideDefaultValue; // 0x179
		::System::Single ESPP_threshold_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_debugMode_FieldHandleType; // 0x180
		::System::Boolean ESPP_debugMode_UseIt; // 0x184
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_debugMode; // 0x188
		::System::Boolean ESPP_debugMode_EnableFade; // 0x190
		::System::Boolean ESPP_debugMode_EnableOverrideDefaultValue; // 0x191
		::System::Boolean ESPP_debugMode_OverrideDefaultValue; // 0x192

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_59791C706EFFC2BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_5BD973238595BF89(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_5BD973238595BF89_OFFSET))(this, a1);
		}

		::System::Void Method_5_ABD8624DE9A02803(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_ABD8624DE9A02803_OFFSET))(this, a1);
		}

		::System::Void Method_5_ABD8624DE9A02803_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_ABD8624DE9A02803_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_71456C0B214E6DAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_71456C0B214E6DAC_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_0AD139A96804E15E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_0AD139A96804E15E_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}
	};
}
