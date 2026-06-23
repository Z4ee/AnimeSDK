#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityOldCRTEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A09B570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_186AA054E8326968_OFFSET UNITYSDK_OFFSET(0x1A09C150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1A09BF20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A09B760)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x1A09B940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1A09B770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_BFF1BCD72C87F49E_1_OFFSET UNITYSDK_OFFSET(0x1A09E0F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_BFF1BCD72C87F49E_OFFSET UNITYSDK_OFFSET(0x1A09DA30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_C6534C82224A6491_OFFSET UNITYSDK_OFFSET(0x1A09D280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09E7B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessOldCRT_TypeDefinitionIndex = 41238;

	class ESPostProcessOldCRT : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::OldCRT*>
	{
	public:
		::MoleMole::Config::ConfigEntityOldCRTEffects* m_stAsset; // 0xB0
		::UnityEngine::Texture* _VolDefault_pattern; // 0xB8
		::UnityEngine::Vector2 _VolDefault_tiling; // 0xC0
		::System::Single _VolDefault_scanlineBrightness; // 0xC8
		::System::Single _VolDefault_fade; // 0xCC
		::System::Boolean _VolPreVal_pattern_overrideState; // 0xD0
		::UnityEngine::Texture* _VolPreVal_pattern; // 0xD8
		::System::Boolean _VolPreVal_tiling_overrideState; // 0xE0
		::UnityEngine::Vector2 _VolPreVal_tiling; // 0xE4
		::System::Boolean _VolPreVal_scanlineBrightness_overrideState; // 0xEC
		::System::Single _VolPreVal_scanlineBrightness; // 0xF0
		::System::Boolean _VolPreVal_fade_overrideState; // 0xF4
		::System::Single _VolPreVal_fade; // 0xF8
		::UnityEngine::Vector2 _TimelineCurveFirstVal_tiling; // 0xFC
		::UnityEngine::Vector2 _TimelineCurveLastVal_tiling; // 0x104
		::System::Single _TimelineCurveFirstVal_scanlineBrightness; // 0x10C
		::System::Single _TimelineCurveLastVal_scanlineBrightness; // 0x110
		::System::Single _TimelineCurveFirstVal_fade; // 0x114
		::System::Single _TimelineCurveLastVal_fade; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_pattern_FieldHandleType; // 0x11C
		::UnityEngine::Texture* ESPP_pattern; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_tiling_FieldHandleType; // 0x128
		::System::Boolean ESPP_tiling_UseIt; // 0x12C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_tiling; // 0x130
		::System::Boolean ESPP_tiling_EnableFade; // 0x138
		::System::Boolean ESPP_tiling_EnableOverrideDefaultValue; // 0x139
		::UnityEngine::Vector2 ESPP_tiling_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineBrightness_FieldHandleType; // 0x144
		::System::Boolean ESPP_scanlineBrightness_UseIt; // 0x148
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineBrightness; // 0x150
		::System::Boolean ESPP_scanlineBrightness_EnableFade; // 0x158
		::System::Boolean ESPP_scanlineBrightness_EnableOverrideDefaultValue; // 0x159
		::System::Single ESPP_scanlineBrightness_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fade_FieldHandleType; // 0x160
		::System::Boolean ESPP_fade_UseIt; // 0x164
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fade; // 0x168
		::System::Boolean ESPP_fade_EnableFade; // 0x170
		::System::Boolean ESPP_fade_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_fade_OverrideDefaultValue; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_186AA054E8326968(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_186AA054E8326968_OFFSET))(this, a1);
		}

		::System::Void Method_5_C6534C82224A6491(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_C6534C82224A6491_OFFSET))(this, a1);
		}

		::System::Void Method_5_BFF1BCD72C87F49E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_BFF1BCD72C87F49E_OFFSET))(this, a1);
		}

		::System::Void Method_5_BFF1BCD72C87F49E_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_METHOD_5_BFF1BCD72C87F49E_1_OFFSET))(this, a1);
		}
	};
}
