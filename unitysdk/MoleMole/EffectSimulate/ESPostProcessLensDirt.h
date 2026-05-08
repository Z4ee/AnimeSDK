#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityLensDirtEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16AD3A00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16AD3610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x16ACF120)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16AD3AE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x16AD3C10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16AD3C60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16AD32D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x16AD3210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x16ACF4F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x16AD3500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x16AD3430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x16AD33D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_538B1538FFCC3586_OFFSET UNITYSDK_OFFSET(0x16AD3550)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x16AD39F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x16AD3A10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16ACE2C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x16AD2CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x16AD3AC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16AD3AB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x16AD3310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x16AD3490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16AD3260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x16AD2E90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x16AD3B80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16AD3380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x16ACE540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x16AD3DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x16AD3DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x16AD2DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x16AD3DB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x16AD30F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x16AD3C20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16AD3D00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16ACE500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x16AD31C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x16ACE7F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D3694D678C874488_OFFSET UNITYSDK_OFFSET(0x16AD11E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D4975DF907B2431F_1_OFFSET UNITYSDK_OFFSET(0x16AD2540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x16AD1DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x16AD3AD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16AD3A20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x16AD3740)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x16AD3D90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16AD3CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD3800)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLensDirt_TypeDefinitionIndex = 82132;

	class ESPostProcessLensDirt : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::LensDirt*>
	{
	public:
		::MoleMole::Config::ConfigEntityLensDirtEffects* m_stAsset; // 0xB0
		::UnityEngine::Texture* _VolDefault_dirtTexture; // 0xB8
		::System::Boolean _VolDefault_enable; // 0xC0
		::System::Single _VolDefault_intensity; // 0xC4
		::UnityEngine::Vector4 _VolDefault_dirtTextureScaleOffset; // 0xC8
		::UnityEngine::Texture* _VolDefault_dirtTextureOverlay; // 0xD8
		::UnityEngine::Vector4 _VolDefault_dirtTextureOverlayScaleOffset; // 0xE0
		::System::Single _VolDefault_dirtFlickFrequency; // 0xF0
		::System::Boolean _VolPreVal_dirtTexture_overrideState; // 0xF4
		::UnityEngine::Texture* _VolPreVal_dirtTexture; // 0xF8
		::System::Boolean _VolPreVal_enable_overrideState; // 0x100
		::System::Boolean _VolPreVal_enable; // 0x101
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x102
		::System::Single _VolPreVal_intensity; // 0x104
		::System::Boolean _VolPreVal_dirtTextureScaleOffset_overrideState; // 0x108
		::UnityEngine::Vector4 _VolPreVal_dirtTextureScaleOffset; // 0x10C
		::System::Boolean _VolPreVal_dirtTextureOverlay_overrideState; // 0x11C
		::UnityEngine::Texture* _VolPreVal_dirtTextureOverlay; // 0x120
		::System::Boolean _VolPreVal_dirtTextureOverlayScaleOffset_overrideState; // 0x128
		::UnityEngine::Vector4 _VolPreVal_dirtTextureOverlayScaleOffset; // 0x12C
		::System::Boolean _VolPreVal_dirtFlickFrequency_overrideState; // 0x13C
		::System::Single _VolPreVal_dirtFlickFrequency; // 0x140
		::System::Single _TimelineCurveFirstVal_intensity; // 0x144
		::System::Single _TimelineCurveLastVal_intensity; // 0x148
		::UnityEngine::Vector4 _TimelineCurveFirstVal_dirtTextureScaleOffset; // 0x14C
		::UnityEngine::Vector4 _TimelineCurveLastVal_dirtTextureScaleOffset; // 0x15C
		::UnityEngine::Vector4 _TimelineCurveFirstVal_dirtTextureOverlayScaleOffset; // 0x16C
		::UnityEngine::Vector4 _TimelineCurveLastVal_dirtTextureOverlayScaleOffset; // 0x17C
		::System::Single _TimelineCurveFirstVal_dirtFlickFrequency; // 0x18C
		::System::Single _TimelineCurveLastVal_dirtFlickFrequency; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTexture_FieldHandleType; // 0x194
		::UnityEngine::Texture* ESPP_dirtTexture; // 0x198
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_enable; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_intensity_UseIt; // 0x1AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x1B0
		::System::Boolean ESPP_intensity_EnableFade; // 0x1B8
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTextureScaleOffset_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_dirtTextureScaleOffset_UseIt; // 0x1C4
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_dirtTextureScaleOffset; // 0x1C8
		::System::Boolean ESPP_dirtTextureScaleOffset_EnableFade; // 0x1D0
		::System::Boolean ESPP_dirtTextureScaleOffset_EnableOverrideDefaultValue; // 0x1D1
		::UnityEngine::Vector4 ESPP_dirtTextureScaleOffset_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTextureOverlay_FieldHandleType; // 0x1E4
		::UnityEngine::Texture* ESPP_dirtTextureOverlay; // 0x1E8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTextureOverlayScaleOffset_FieldHandleType; // 0x1F0
		::System::Boolean ESPP_dirtTextureOverlayScaleOffset_UseIt; // 0x1F4
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_dirtTextureOverlayScaleOffset; // 0x1F8
		::System::Boolean ESPP_dirtTextureOverlayScaleOffset_EnableFade; // 0x200
		::System::Boolean ESPP_dirtTextureOverlayScaleOffset_EnableOverrideDefaultValue; // 0x201
		::UnityEngine::Vector4 ESPP_dirtTextureOverlayScaleOffset_OverrideDefaultValue; // 0x204
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtFlickFrequency_FieldHandleType; // 0x214
		::System::Boolean ESPP_dirtFlickFrequency_UseIt; // 0x218
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_dirtFlickFrequency; // 0x220
		::System::Boolean ESPP_dirtFlickFrequency_EnableFade; // 0x228
		::System::Boolean ESPP_dirtFlickFrequency_EnableOverrideDefaultValue; // 0x229
		::System::Single ESPP_dirtFlickFrequency_OverrideDefaultValue; // 0x22C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_D3694D678C874488(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D3694D678C874488_OFFSET))(this, a1);
		}

		::System::Void Method_5_D4975DF907B2431F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D4975DF907B2431F_OFFSET))(this, a1);
		}

		::System::Void Method_5_D4975DF907B2431F_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D4975DF907B2431F_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_61929A3103595552()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_61929A3103595552_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_538B1538FFCC3586(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_538B1538FFCC3586_OFFSET))(this, a1);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_E05ADF64DE351167(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_E05ADF64DE351167_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}
	};
}
