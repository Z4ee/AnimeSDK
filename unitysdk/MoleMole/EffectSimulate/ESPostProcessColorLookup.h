#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityColorLookupEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B590690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x1B590CD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x1B590DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x1B591500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_65BB8F0F1E258993_1_OFFSET UNITYSDK_OFFSET(0x1B591C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x1B591940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B590820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x1B5909B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1B590830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B591FC0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessColorLookup_TypeDefinitionIndex = 51267;

	class ESPostProcessColorLookup : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ColorLookup*>
	{
	public:
		::MoleMole::Config::ConfigEntityColorLookupEffects* m_stAsset; // 0xB0
		::UnityEngine::Texture* _VolDefault_texture; // 0xB8
		::System::Single _VolDefault_contribution; // 0xC0
		::System::Boolean _VolPreVal_texture_overrideState; // 0xC4
		::UnityEngine::Texture* _VolPreVal_texture; // 0xC8
		::System::Boolean _VolPreVal_contribution_overrideState; // 0xD0
		::System::Single _VolPreVal_contribution; // 0xD4
		::System::Single _TimelineCurveFirstVal_contribution; // 0xD8
		::System::Single _TimelineCurveLastVal_contribution; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_texture_FieldHandleType; // 0xE0
		::UnityEngine::Texture* ESPP_texture; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contribution_FieldHandleType; // 0xF0
		::System::Boolean ESPP_contribution_UseIt; // 0xF4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contribution; // 0xF8
		::System::Boolean ESPP_contribution_EnableFade; // 0x100
		::System::Boolean ESPP_contribution_EnableOverrideDefaultValue; // 0x101
		::System::Single ESPP_contribution_OverrideDefaultValue; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		::System::Void Method_5_0BF1620F1E4289BD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_0BF1620F1E4289BD_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_65BB8F0F1E258993_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_METHOD_5_65BB8F0F1E258993_1_OFFSET))(this, a1);
		}
	};
}
