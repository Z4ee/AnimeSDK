#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EvaluateAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Color.h"

class NapGradient;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_0A66118846A84639_OFFSET UNITYSDK_OFFSET(0x192B9720)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_155C191EC0431EA4_OFFSET UNITYSDK_OFFSET(0x192B9360)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_30C47F9E0D18E066_OFFSET UNITYSDK_OFFSET(0x192B9650)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_5D0FD43AB821A5B3_OFFSET UNITYSDK_OFFSET(0x192B9530)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_72B99BAD012F62D7_OFFSET UNITYSDK_OFFSET(0x192B9270)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x192B94E0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x192B9490)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_DB7D026E80324413_OFFSET UNITYSDK_OFFSET(0x192B95C0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x192B9430)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ColorCurve_TypeDefinitionIndex = 86913;

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

		::UnityEngine::AnimationCurve* Method_4_5D0FD43AB821A5B3(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_5D0FD43AB821A5B3_OFFSET))(this, a1);
		}

		::System::Void Method_4_DB7D026E80324413(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_DB7D026E80324413_OFFSET))(this, a1, a2);
		}

		::NapGradient* Method_4_30C47F9E0D18E066(::System::Int32 a1)
		{
			return ((::NapGradient*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_30C47F9E0D18E066_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_0A66118846A84639(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_0A66118846A84639_OFFSET))(this, a1, a2);
		}
	};
}
