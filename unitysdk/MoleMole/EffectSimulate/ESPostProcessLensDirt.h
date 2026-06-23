#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityLensDirtEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x158E0B90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x158E1920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x158E1CA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_79E872D90798D236_1_OFFSET UNITYSDK_OFFSET(0x158E4BF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x158E44C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x158E0DB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x158E0DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_9E93A3CD963FC72F_OFFSET UNITYSDK_OFFSET(0x158E3930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x158E1030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT__CTOR_OFFSET UNITYSDK_OFFSET(0x158E5320)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLensDirt_TypeDefinitionIndex = 79227;

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

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_459C79521BFE514E_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_9E93A3CD963FC72F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_9E93A3CD963FC72F_OFFSET))(this, a1);
		}

		::System::Void Method_5_79E872D90798D236(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_79E872D90798D236_OFFSET))(this, a1);
		}

		::System::Void Method_5_79E872D90798D236_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_METHOD_5_79E872D90798D236_1_OFFSET))(this, a1);
		}
	};
}
