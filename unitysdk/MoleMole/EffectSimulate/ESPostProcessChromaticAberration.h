#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigChromaticAberrations; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x16CFEB90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16D002B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1AEC14D3B3CAC7BB_1_OFFSET UNITYSDK_OFFSET(0x16CFDD40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1AEC14D3B3CAC7BB_OFFSET UNITYSDK_OFFSET(0x16CFCEF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x16CF8320)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16D00420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x16D00380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16D005F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16CFF3B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x16CFF2F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x16CFF780)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x16CFF5E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x16CFF510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x16CFF4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x16D002A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x16D003E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_594D45A47A873869_OFFSET UNITYSDK_OFFSET(0x16CFBF40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16CF7FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x16CF9110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x16D00350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16D00370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x16CFF630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x16CFF3F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x16CFF570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16CFF340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x16CFEE00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x16D002C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16CFF460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x16CF8600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x16D00400)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x16D00390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x16CFED10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x16D003F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x16CFF1D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x16D003A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16D00560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16CF82E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x16CFF2A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x16D004C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16D004D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x16D00410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16D00360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x16CFFBA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_F5927F2DFF5A12B3_OFFSET UNITYSDK_OFFSET(0x16CF98A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFFCF0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessChromaticAberration_TypeDefinitionIndex = 59181;

	class ESPostProcessChromaticAberration : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ChromaticAberration*>
	{
	public:
		::MoleMole::Config::ConfigChromaticAberrations* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _VolDefault_intensity; // 0xBC
		::UnityEngine::Vector2 _VolDefault_center; // 0xC0
		::System::Single _VolDefault_power; // 0xC8
		::UnityEngine::Color _VolDefault_ColorR; // 0xCC
		::System::Single _VolDefault_PowerR; // 0xDC
		::UnityEngine::Color _VolDefault_ColorG; // 0xE0
		::System::Single _VolDefault_PowerG; // 0xF0
		::UnityEngine::Color _VolDefault_ColorB; // 0xF4
		::System::Single _VolDefault_PowerB; // 0x104
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x108
		::System::Single _VolPreVal_intensity; // 0x10C
		::System::Boolean _VolPreVal_center_overrideState; // 0x110
		::UnityEngine::Vector2 _VolPreVal_center; // 0x114
		::System::Boolean _VolPreVal_power_overrideState; // 0x11C
		::System::Single _VolPreVal_power; // 0x120
		::System::Boolean _VolPreVal_ColorR_overrideState; // 0x124
		::UnityEngine::Color _VolPreVal_ColorR; // 0x128
		::System::Boolean _VolPreVal_PowerR_overrideState; // 0x138
		::System::Single _VolPreVal_PowerR; // 0x13C
		::System::Boolean _VolPreVal_ColorG_overrideState; // 0x140
		::UnityEngine::Color _VolPreVal_ColorG; // 0x144
		::System::Boolean _VolPreVal_PowerG_overrideState; // 0x154
		::System::Single _VolPreVal_PowerG; // 0x158
		::System::Boolean _VolPreVal_ColorB_overrideState; // 0x15C
		::UnityEngine::Color _VolPreVal_ColorB; // 0x160
		::System::Boolean _VolPreVal_PowerB_overrideState; // 0x170
		::System::Single _VolPreVal_PowerB; // 0x174
		::System::Single _TimelineCurveFirstVal_intensity; // 0x178
		::System::Single _TimelineCurveLastVal_intensity; // 0x17C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x180
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x188
		::System::Single _TimelineCurveFirstVal_power; // 0x190
		::System::Single _TimelineCurveLastVal_power; // 0x194
		::UnityEngine::Color _TimelineCurveFirstVal_ColorR; // 0x198
		::UnityEngine::Color _TimelineCurveLastVal_ColorR; // 0x1A8
		::System::Single _TimelineCurveFirstVal_PowerR; // 0x1B8
		::System::Single _TimelineCurveLastVal_PowerR; // 0x1BC
		::UnityEngine::Color _TimelineCurveFirstVal_ColorG; // 0x1C0
		::UnityEngine::Color _TimelineCurveLastVal_ColorG; // 0x1D0
		::System::Single _TimelineCurveFirstVal_PowerG; // 0x1E0
		::System::Single _TimelineCurveLastVal_PowerG; // 0x1E4
		::UnityEngine::Color _TimelineCurveFirstVal_ColorB; // 0x1E8
		::UnityEngine::Color _TimelineCurveLastVal_ColorB; // 0x1F8
		::System::Single _TimelineCurveFirstVal_PowerB; // 0x208
		::System::Single _TimelineCurveLastVal_PowerB; // 0x20C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x210
		::System::Boolean ESPP_intensity_UseIt; // 0x214
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x218
		::System::Boolean ESPP_intensity_EnableFade; // 0x220
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x221
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x224
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x228
		::System::Boolean ESPP_center_UseIt; // 0x22C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x230
		::System::Boolean ESPP_center_EnableFade; // 0x238
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x239
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x23C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_power_FieldHandleType; // 0x244
		::System::Boolean ESPP_power_UseIt; // 0x248
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_power; // 0x250
		::System::Boolean ESPP_power_EnableFade; // 0x258
		::System::Boolean ESPP_power_EnableOverrideDefaultValue; // 0x259
		::System::Single ESPP_power_OverrideDefaultValue; // 0x25C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorR_FieldHandleType; // 0x260
		::System::Boolean ESPP_ColorR_UseIt; // 0x264
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorR; // 0x268
		::System::Boolean ESPP_ColorR_EnableFade; // 0x270
		::System::Boolean ESPP_ColorR_EnableOverrideDefaultValue; // 0x271
		::UnityEngine::Color ESPP_ColorR_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerR_FieldHandleType; // 0x284
		::System::Boolean ESPP_PowerR_UseIt; // 0x288
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerR; // 0x290
		::System::Boolean ESPP_PowerR_EnableFade; // 0x298
		::System::Boolean ESPP_PowerR_EnableOverrideDefaultValue; // 0x299
		::System::Single ESPP_PowerR_OverrideDefaultValue; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorG_FieldHandleType; // 0x2A0
		::System::Boolean ESPP_ColorG_UseIt; // 0x2A4
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorG; // 0x2A8
		::System::Boolean ESPP_ColorG_EnableFade; // 0x2B0
		::System::Boolean ESPP_ColorG_EnableOverrideDefaultValue; // 0x2B1
		::UnityEngine::Color ESPP_ColorG_OverrideDefaultValue; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerG_FieldHandleType; // 0x2C4
		::System::Boolean ESPP_PowerG_UseIt; // 0x2C8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerG; // 0x2D0
		::System::Boolean ESPP_PowerG_EnableFade; // 0x2D8
		::System::Boolean ESPP_PowerG_EnableOverrideDefaultValue; // 0x2D9
		::System::Single ESPP_PowerG_OverrideDefaultValue; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorB_FieldHandleType; // 0x2E0
		::System::Boolean ESPP_ColorB_UseIt; // 0x2E4
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorB; // 0x2E8
		::System::Boolean ESPP_ColorB_EnableFade; // 0x2F0
		::System::Boolean ESPP_ColorB_EnableOverrideDefaultValue; // 0x2F1
		::UnityEngine::Color ESPP_ColorB_OverrideDefaultValue; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerB_FieldHandleType; // 0x304
		::System::Boolean ESPP_PowerB_UseIt; // 0x308
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerB; // 0x310
		::System::Boolean ESPP_PowerB_EnableFade; // 0x318
		::System::Boolean ESPP_PowerB_EnableOverrideDefaultValue; // 0x319
		::System::Single ESPP_PowerB_OverrideDefaultValue; // 0x31C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_F5927F2DFF5A12B3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_F5927F2DFF5A12B3_OFFSET))(this, a1);
		}

		::System::Void Method_5_594D45A47A873869(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_594D45A47A873869_OFFSET))(this, a1);
		}

		::System::Void Method_5_1AEC14D3B3CAC7BB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1AEC14D3B3CAC7BB_OFFSET))(this, a1);
		}

		::System::Void Method_5_1AEC14D3B3CAC7BB_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_1AEC14D3B3CAC7BB_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_092CD57850778EFC_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_EE2957687AFE92A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_EE2957687AFE92A5_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
