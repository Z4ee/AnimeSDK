#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_ANIMATIONCURVEEXT_VALUEISONE_OFFSET UNITYSDK_OFFSET(0x1B2D01A0)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int AnimationCurveExt_TypeDefinitionIndex = 25903;

	class AnimationCurveExt : public ::System::Object
	{
	public:
		static ::System::Boolean ValueIsOne(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_ANIMATIONCURVEEXT_VALUEISONE_OFFSET))(curve);
		}
	};
}
