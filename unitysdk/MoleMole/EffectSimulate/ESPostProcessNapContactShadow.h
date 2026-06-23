#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityNapContactShadowEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class NapContactShadow; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x115FC610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x115FE1C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x115FCF50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x115FF030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x115FE940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0x115FC9B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_59791C706EFFC2BA_OFFSET UNITYSDK_OFFSET(0x115FD180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x115FC800)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x115FC810)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x115FF720)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessNapContactShadow_TypeDefinitionIndex = 44438;

	class ESPostProcessNapContactShadow : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::NapContactShadow*>
	{
	public:
		::MoleMole::Config::ConfigEntityNapContactShadowEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enabled; // 0xB8
		::System::Int32 _VolDefault_sampleCount; // 0xBC
		::System::Single _VolDefault_worldSpaceLength; // 0xC0
		::System::Boolean _VolPreVal_enabled_overrideState; // 0xC4
		::System::Boolean _VolPreVal_enabled; // 0xC5
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0xC6
		::System::Int32 _VolPreVal_sampleCount; // 0xC8
		::System::Boolean _VolPreVal_worldSpaceLength_overrideState; // 0xCC
		::System::Single _VolPreVal_worldSpaceLength; // 0xD0
		::System::Boolean _TimelineCurveFirstVal_enabled; // 0xD4
		::System::Boolean _TimelineCurveLastVal_enabled; // 0xD5
		::System::Int32 _TimelineCurveFirstVal_sampleCount; // 0xD8
		::System::Int32 _TimelineCurveLastVal_sampleCount; // 0xDC
		::System::Single _TimelineCurveFirstVal_worldSpaceLength; // 0xE0
		::System::Single _TimelineCurveLastVal_worldSpaceLength; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enabled_FieldHandleType; // 0xE8
		::System::Boolean ESPP_enabled_UseIt; // 0xEC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enabled; // 0xF0
		::System::Boolean ESPP_enabled_EnableFade; // 0xF8
		::System::Boolean ESPP_enabled_EnableOverrideDefaultValue; // 0xF9
		::System::Boolean ESPP_enabled_OverrideDefaultValue; // 0xFA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0xFC
		::System::Boolean ESPP_sampleCount_UseIt; // 0x100
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sampleCount; // 0x108
		::System::Boolean ESPP_sampleCount_EnableFade; // 0x110
		::System::Boolean ESPP_sampleCount_EnableOverrideDefaultValue; // 0x111
		::System::Int32 ESPP_sampleCount_OverrideDefaultValue; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_worldSpaceLength_FieldHandleType; // 0x118
		::System::Boolean ESPP_worldSpaceLength_UseIt; // 0x11C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_worldSpaceLength; // 0x120
		::System::Boolean ESPP_worldSpaceLength_EnableFade; // 0x128
		::System::Boolean ESPP_worldSpaceLength_EnableOverrideDefaultValue; // 0x129
		::System::Single ESPP_worldSpaceLength_OverrideDefaultValue; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_37CF7377CBA6E635()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_37CF7377CBA6E635_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_59791C706EFFC2BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}
	};
}
