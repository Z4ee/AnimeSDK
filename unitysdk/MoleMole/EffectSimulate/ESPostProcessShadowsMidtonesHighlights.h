#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1259FA20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_14B208BC8BAFAB72_1_OFFSET UNITYSDK_OFFSET(0x1259DB60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_14B208BC8BAFAB72_OFFSET UNITYSDK_OFFSET(0x1259D060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1259F980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x1259F860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1259FA40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1259EDB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x1259ECF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x1259A040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x1259EFE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x1259EF10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1259EEB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x1259F7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x1259FA30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x12599240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x1259F380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x1259F880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x125997E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1259FA80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x1259F030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x1259EDF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x1259EF70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1259ED40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x1259E8A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1259F7F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1259EE60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x12599550)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1259F890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1259F870)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x1259E7B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B3578C323540C8F4_OFFSET UNITYSDK_OFFSET(0x1259C3C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x1259F840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x1259EBD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1259F150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x1259F9E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1259F8F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12599510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x1259ECA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x1259F850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1259F8A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1259F8E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1259F830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_EB4352D10DA7234E_OFFSET UNITYSDK_OFFSET(0x1259A670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x1259E660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1259F4A0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessShadowsMidtonesHighlights_TypeDefinitionIndex = 77833;

	class ESPostProcessShadowsMidtonesHighlights : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>
	{
	public:
		::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects* m_stAsset; // 0xB0
		::UnityEngine::Vector4 _VolDefault_shadows; // 0xB8
		::UnityEngine::Vector4 _VolDefault_midtones; // 0xC8
		::UnityEngine::Vector4 _VolDefault_highlights; // 0xD8
		::System::Single _VolDefault_shadowsStart; // 0xE8
		::System::Single _VolDefault_shadowsEnd; // 0xEC
		::System::Single _VolDefault_highlightsStart; // 0xF0
		::System::Single _VolDefault_highlightsEnd; // 0xF4
		::System::Boolean _VolPreVal_shadows_overrideState; // 0xF8
		::UnityEngine::Vector4 _VolPreVal_shadows; // 0xFC
		::System::Boolean _VolPreVal_midtones_overrideState; // 0x10C
		::UnityEngine::Vector4 _VolPreVal_midtones; // 0x110
		::System::Boolean _VolPreVal_highlights_overrideState; // 0x120
		::UnityEngine::Vector4 _VolPreVal_highlights; // 0x124
		::System::Boolean _VolPreVal_shadowsStart_overrideState; // 0x134
		::System::Single _VolPreVal_shadowsStart; // 0x138
		::System::Boolean _VolPreVal_shadowsEnd_overrideState; // 0x13C
		::System::Single _VolPreVal_shadowsEnd; // 0x140
		::System::Boolean _VolPreVal_highlightsStart_overrideState; // 0x144
		::System::Single _VolPreVal_highlightsStart; // 0x148
		::System::Boolean _VolPreVal_highlightsEnd_overrideState; // 0x14C
		::System::Single _VolPreVal_highlightsEnd; // 0x150
		::UnityEngine::Vector4 _TimelineCurveFirstVal_shadows; // 0x154
		::UnityEngine::Vector4 _TimelineCurveLastVal_shadows; // 0x164
		::UnityEngine::Vector4 _TimelineCurveFirstVal_midtones; // 0x174
		::UnityEngine::Vector4 _TimelineCurveLastVal_midtones; // 0x184
		::UnityEngine::Vector4 _TimelineCurveFirstVal_highlights; // 0x194
		::UnityEngine::Vector4 _TimelineCurveLastVal_highlights; // 0x1A4
		::System::Single _TimelineCurveFirstVal_shadowsStart; // 0x1B4
		::System::Single _TimelineCurveLastVal_shadowsStart; // 0x1B8
		::System::Single _TimelineCurveFirstVal_shadowsEnd; // 0x1BC
		::System::Single _TimelineCurveLastVal_shadowsEnd; // 0x1C0
		::System::Single _TimelineCurveFirstVal_highlightsStart; // 0x1C4
		::System::Single _TimelineCurveLastVal_highlightsStart; // 0x1C8
		::System::Single _TimelineCurveFirstVal_highlightsEnd; // 0x1CC
		::System::Single _TimelineCurveLastVal_highlightsEnd; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadows_FieldHandleType; // 0x1D4
		::System::Boolean ESPP_shadows_UseIt; // 0x1D8
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_shadows; // 0x1E0
		::System::Boolean ESPP_shadows_EnableFade; // 0x1E8
		::System::Boolean ESPP_shadows_EnableOverrideDefaultValue; // 0x1E9
		::UnityEngine::Vector4 ESPP_shadows_OverrideDefaultValue; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_midtones_FieldHandleType; // 0x1FC
		::System::Boolean ESPP_midtones_UseIt; // 0x200
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_midtones; // 0x208
		::System::Boolean ESPP_midtones_EnableFade; // 0x210
		::System::Boolean ESPP_midtones_EnableOverrideDefaultValue; // 0x211
		::UnityEngine::Vector4 ESPP_midtones_OverrideDefaultValue; // 0x214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_highlights_FieldHandleType; // 0x224
		::System::Boolean ESPP_highlights_UseIt; // 0x228
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_highlights; // 0x230
		::System::Boolean ESPP_highlights_EnableFade; // 0x238
		::System::Boolean ESPP_highlights_EnableOverrideDefaultValue; // 0x239
		::UnityEngine::Vector4 ESPP_highlights_OverrideDefaultValue; // 0x23C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowsStart_FieldHandleType; // 0x24C
		::System::Boolean ESPP_shadowsStart_UseIt; // 0x250
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowsStart; // 0x258
		::System::Boolean ESPP_shadowsStart_EnableFade; // 0x260
		::System::Boolean ESPP_shadowsStart_EnableOverrideDefaultValue; // 0x261
		::System::Single ESPP_shadowsStart_OverrideDefaultValue; // 0x264
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowsEnd_FieldHandleType; // 0x268
		::System::Boolean ESPP_shadowsEnd_UseIt; // 0x26C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowsEnd; // 0x270
		::System::Boolean ESPP_shadowsEnd_EnableFade; // 0x278
		::System::Boolean ESPP_shadowsEnd_EnableOverrideDefaultValue; // 0x279
		::System::Single ESPP_shadowsEnd_OverrideDefaultValue; // 0x27C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_highlightsStart_FieldHandleType; // 0x280
		::System::Boolean ESPP_highlightsStart_UseIt; // 0x284
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_highlightsStart; // 0x288
		::System::Boolean ESPP_highlightsStart_EnableFade; // 0x290
		::System::Boolean ESPP_highlightsStart_EnableOverrideDefaultValue; // 0x291
		::System::Single ESPP_highlightsStart_OverrideDefaultValue; // 0x294
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_highlightsEnd_FieldHandleType; // 0x298
		::System::Boolean ESPP_highlightsEnd_UseIt; // 0x29C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_highlightsEnd; // 0x2A0
		::System::Boolean ESPP_highlightsEnd_EnableFade; // 0x2A8
		::System::Boolean ESPP_highlightsEnd_EnableOverrideDefaultValue; // 0x2A9
		::System::Single ESPP_highlightsEnd_OverrideDefaultValue; // 0x2AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_5_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_459C79521BFE514E_OFFSET))(this, a1);
		}

		::System::Void Method_5_EB4352D10DA7234E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_EB4352D10DA7234E_OFFSET))(this, a1);
		}

		::System::Void Method_5_B3578C323540C8F4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B3578C323540C8F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_14B208BC8BAFAB72(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_14B208BC8BAFAB72_OFFSET))(this, a1);
		}

		::System::Void Method_5_14B208BC8BAFAB72_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_14B208BC8BAFAB72_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_ED65AE7582736594()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_ED65AE7582736594_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_5_65BB8F0F1E258993(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_65BB8F0F1E258993_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}
	};
}
