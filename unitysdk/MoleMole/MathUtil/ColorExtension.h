#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_MATHUTIL_COLOREXTENSION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x14188840)

namespace MoleMole::MathUtil
{
	inline static constexpr unsigned int ColorExtension_TypeDefinitionIndex = 62350;

	class ColorExtension : public ::System::Object
	{
	public:
		static ::System::Boolean IsEqual(::UnityEngine::Color c1, ::UnityEngine::Color c2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_COLOREXTENSION_ISEQUAL_OFFSET))(c1, c2);
		}
	};
}
