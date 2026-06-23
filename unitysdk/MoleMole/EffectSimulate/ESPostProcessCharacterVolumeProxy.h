#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class CharacterVolumeProxy; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x190D5720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x190D5C30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x190D5A10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x190D58C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_65BB8F0F1E258993_1_OFFSET UNITYSDK_OFFSET(0x190D64A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_65BB8F0F1E258993_2_OFFSET UNITYSDK_OFFSET(0x190D67E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x190D6130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x190D58B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_853336442C31C044_OFFSET UNITYSDK_OFFSET(0x190D5D00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x190D6B20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCharacterVolumeProxy_TypeDefinitionIndex = 83041;

	class ESPostProcessCharacterVolumeProxy : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::CharacterVolumeProxy*>
	{
	public:
		::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_indoorWeight; // 0xB8
		::System::Boolean _VolPreVal_indoorWeight_overrideState; // 0xBC
		::System::Single _VolPreVal_indoorWeight; // 0xC0
		::System::Single _TimelineCurveFirstVal_indoorWeight; // 0xC4
		::System::Single _TimelineCurveLastVal_indoorWeight; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_indoorWeight_FieldHandleType; // 0xCC
		::System::Boolean ESPP_indoorWeight_UseIt; // 0xD0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_indoorWeight; // 0xD8
		::System::Boolean ESPP_indoorWeight_EnableFade; // 0xE0
		::System::Boolean ESPP_indoorWeight_EnableOverrideDefaultValue; // 0xE1
		::System::Single ESPP_indoorWeight_OverrideDefaultValue; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_24B05D2E15A5C3C8_OFFSET))(this);
		}

		::System::Void Method_5_0BF1620F1E4289BD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_0BF1620F1E4289BD_OFFSET))(this, a1);
		}

		::System::Void Method_5_853336442C31C044(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_853336442C31C044_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_65BB8F0F1E258993_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_65BB8F0F1E258993_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_METHOD_5_65BB8F0F1E258993_2_OFFSET))(this, a1);
		}
	};
}
