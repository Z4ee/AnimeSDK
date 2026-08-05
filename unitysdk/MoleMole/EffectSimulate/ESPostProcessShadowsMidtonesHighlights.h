#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A031910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_070E78F7BE10761C_OFFSET UNITYSDK_OFFSET(0x1A034910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x1A032630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A031BB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1A031BC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_8649317719F42121_1_OFFSET UNITYSDK_OFFSET(0x1A036010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x1A035550)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x1A031E10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_EC86032BD7B258D7_OFFSET UNITYSDK_OFFSET(0x1A032C20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A036AD0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessShadowsMidtonesHighlights_TypeDefinitionIndex = 54162;

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

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_D68547FF19A170E2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_D68547FF19A170E2_OFFSET))(this);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_EC86032BD7B258D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_EC86032BD7B258D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_070E78F7BE10761C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_070E78F7BE10761C_OFFSET))(this, a1);
		}

		::System::Void Method_5_8649317719F42121(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_8649317719F42121_OFFSET))(this, a1);
		}

		::System::Void Method_5_8649317719F42121_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSHADOWSMIDTONESHIGHLIGHTS_METHOD_5_8649317719F42121_1_OFFSET))(this, a1);
		}
	};
}
