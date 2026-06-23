#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_QUATERNIONEXT_DIFFERENTORIENTATION_OFFSET UNITYSDK_OFFSET(0x1D69A7D0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_QUATERNIONEXT_SAMEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1D69A780)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int QuaternionExt_TypeDefinitionIndex = 28402;

	class QuaternionExt : public ::System::Object
	{
	public:
		static ::System::Boolean SameOrientation(::UnityEngine::Quaternion q1, ::UnityEngine::Quaternion q2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_QUATERNIONEXT_SAMEORIENTATION_OFFSET))(q1, q2);
		}

		static ::System::Boolean DifferentOrientation(::UnityEngine::Quaternion q1, ::UnityEngine::Quaternion q2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_QUATERNIONEXT_DIFFERENTORIENTATION_OFFSET))(q1, q2);
		}
	};
}
