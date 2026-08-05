#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EvaluateAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Color.h"

class NapGradient;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_0A66118846A84639_OFFSET UNITYSDK_OFFSET(0x148847D0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_155C191EC0431EA4_OFFSET UNITYSDK_OFFSET(0x148844E0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_30C47F9E0D18E066_OFFSET UNITYSDK_OFFSET(0x14884A40)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_72B99BAD012F62D7_OFFSET UNITYSDK_OFFSET(0x148843F0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x14884660)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x14884610)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_D78AF612F12CBCF2_OFFSET UNITYSDK_OFFSET(0x148846B0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_E4CA96892168D5CE_OFFSET UNITYSDK_OFFSET(0x14884740)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x148845B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ColorCurve_TypeDefinitionIndex = 87649;

	class ColorCurve : public ::MoleMole::EffectSimulate::EvaluateAnimationCurve_1<::UnityEngine::Color>
	{
	public:
		::NapGradient* gradient; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color Method_4_72B99BAD012F62D7(::System::Single a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_72B99BAD012F62D7_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color Method_4_155C191EC0431EA4(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_155C191EC0431EA4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_ADF4AD3331B4D7AD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_OFFSET))(this, a1);
		}

		::System::Void Method_4_ADF4AD3331B4D7AD_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_4_D78AF612F12CBCF2(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_D78AF612F12CBCF2_OFFSET))(this, a1);
		}

		::System::Void Method_4_E4CA96892168D5CE(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_E4CA96892168D5CE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_4_0A66118846A84639(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_0A66118846A84639_OFFSET))(this, a1, a2);
		}

		::NapGradient* Method_4_30C47F9E0D18E066(::System::Int32 a1)
		{
			return ((::NapGradient*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_30C47F9E0D18E066_OFFSET))(this, a1);
		}
	};
}
