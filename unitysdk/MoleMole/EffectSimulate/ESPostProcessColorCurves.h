#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityColorCurvesEffects; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ColorCurves; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_186AA054E8326968_OFFSET UNITYSDK_OFFSET(0x1A387C30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1A386F70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_6617E33D0A2EDC18_1_OFFSET UNITYSDK_OFFSET(0x1A38A000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_6617E33D0A2EDC18_OFFSET UNITYSDK_OFFSET(0x1A389E20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_73117257A02AFFB8_OFFSET UNITYSDK_OFFSET(0x1A3894B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A3870B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x1A3870C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x1A387330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1A387C20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A38A1E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessColorCurves_TypeDefinitionIndex = 72330;

	class ESPostProcessColorCurves : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ColorCurves*>
	{
	public:
		::MoleMole::Config::ConfigEntityColorCurvesEffects* m_stAsset; // 0xB0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_master; // 0xB8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_red; // 0xC0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_green; // 0xC8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_blue; // 0xD0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_hueVsHue; // 0xD8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_hueVsSat; // 0xE0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_satVsSat; // 0xE8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_lumVsSat; // 0xF0
		::System::Boolean _VolPreVal_master_overrideState; // 0xF8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_master; // 0x100
		::System::Boolean _VolPreVal_red_overrideState; // 0x108
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_red; // 0x110
		::System::Boolean _VolPreVal_green_overrideState; // 0x118
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_green; // 0x120
		::System::Boolean _VolPreVal_blue_overrideState; // 0x128
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_blue; // 0x130
		::System::Boolean _VolPreVal_hueVsHue_overrideState; // 0x138
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_hueVsHue; // 0x140
		::System::Boolean _VolPreVal_hueVsSat_overrideState; // 0x148
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_hueVsSat; // 0x150
		::System::Boolean _VolPreVal_satVsSat_overrideState; // 0x158
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_satVsSat; // 0x160
		::System::Boolean _VolPreVal_lumVsSat_overrideState; // 0x168
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_lumVsSat; // 0x170
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_master_FieldHandleType; // 0x178
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_master; // 0x180
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_red_FieldHandleType; // 0x188
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_red; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_green_FieldHandleType; // 0x198
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_green; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blue_FieldHandleType; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_blue; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueVsHue_FieldHandleType; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_hueVsHue; // 0x1C0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueVsSat_FieldHandleType; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_hueVsSat; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_satVsSat_FieldHandleType; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_satVsSat; // 0x1E0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lumVsSat_FieldHandleType; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_lumVsSat; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_186AA054E8326968(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_186AA054E8326968_OFFSET))(this, a1);
		}

		::System::Void Method_5_73117257A02AFFB8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_73117257A02AFFB8_OFFSET))(this, a1);
		}

		::System::Void Method_5_6617E33D0A2EDC18(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_6617E33D0A2EDC18_OFFSET))(this, a1);
		}

		::System::Void Method_5_6617E33D0A2EDC18_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_METHOD_5_6617E33D0A2EDC18_1_OFFSET))(this, a1);
		}
	};
}
