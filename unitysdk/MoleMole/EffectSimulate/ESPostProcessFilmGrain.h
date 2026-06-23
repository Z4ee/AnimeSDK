#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace MoleMole::Config { class ConfigEntityFilmGrains; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B239D40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_1C409C2CC83887DC_1_OFFSET UNITYSDK_OFFSET(0x1B23C090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x1B23BC10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_31F1C58AB372DEB4_OFFSET UNITYSDK_OFFSET(0x1B23B580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x1B23A600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1B23A0E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_522F2897D3370F6B_OFFSET UNITYSDK_OFFSET(0x1B23A780)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B239F00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1B239F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23C510)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFilmGrain_TypeDefinitionIndex = 68263;

	class ESPostProcessFilmGrain : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::FilmGrain*>
	{
	public:
		::MoleMole::Config::ConfigEntityFilmGrains* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::FilmGrainLookup _DefaultType; // 0xB8
		::System::Single _DefaultIntensity; // 0xBC
		::System::Single _DefaultResponse; // 0xC0
		::UnityEngine::Rendering::Universal::FilmGrainLookup _VolDefault_type; // 0xC4
		::System::Single _VolDefault_intensity; // 0xC8
		::System::Single _VolDefault_response; // 0xCC
		::UnityEngine::Texture* _VolDefault_texture; // 0xD0
		::System::Boolean _VolPreVal_type_overrideState; // 0xD8
		::UnityEngine::Rendering::Universal::FilmGrainLookup _VolPreVal_type; // 0xDC
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xE0
		::System::Single _VolPreVal_intensity; // 0xE4
		::System::Boolean _VolPreVal_response_overrideState; // 0xE8
		::System::Single _VolPreVal_response; // 0xEC
		::System::Boolean _VolPreVal_texture_overrideState; // 0xF0
		::UnityEngine::Texture* _VolPreVal_texture; // 0xF8
		::System::Single _TimelineCurveFirstVal_intensity; // 0x100
		::System::Single _TimelineCurveLastVal_intensity; // 0x104
		::System::Single _TimelineCurveFirstVal_response; // 0x108
		::System::Single _TimelineCurveLastVal_response; // 0x10C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_type_FieldHandleType; // 0x110
		::UnityEngine::Rendering::Universal::FilmGrainLookup ESPP_type; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x118
		::System::Boolean ESPP_intensity_UseIt; // 0x11C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x120
		::System::Boolean ESPP_intensity_EnableFade; // 0x128
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x129
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_response_FieldHandleType; // 0x130
		::System::Boolean ESPP_response_UseIt; // 0x134
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_response; // 0x138
		::System::Boolean ESPP_response_EnableFade; // 0x140
		::System::Boolean ESPP_response_EnableOverrideDefaultValue; // 0x141
		::System::Single ESPP_response_OverrideDefaultValue; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_texture_FieldHandleType; // 0x148
		::UnityEngine::Texture* ESPP_texture; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_5_50131F4CF014469C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_50131F4CF014469C_OFFSET))(this);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_522F2897D3370F6B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_522F2897D3370F6B_OFFSET))(this, a1);
		}

		::System::Void Method_5_31F1C58AB372DEB4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_31F1C58AB372DEB4_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C409C2CC83887DC_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_1C409C2CC83887DC_1_OFFSET))(this, a1);
		}
	};
}
