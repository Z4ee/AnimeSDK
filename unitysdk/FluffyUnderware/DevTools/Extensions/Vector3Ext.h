#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_ANGLESIGNED_OFFSET UNITYSDK_OFFSET(0x1EA55160)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1EA55360)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_NOTAPPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1EA55470)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_ROTATEAROUND_OFFSET UNITYSDK_OFFSET(0x1EA551F0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_TOVECTOR2_OFFSET UNITYSDK_OFFSET(0x1EA55350)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int Vector3Ext_TypeDefinitionIndex = 29005;

	class Vector3Ext : public ::System::Object
	{
	public:
		static ::System::Single AngleSigned(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 normal)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_ANGLESIGNED_OFFSET))(a, b, normal);
		}

		static ::UnityEngine::Vector3 RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 origin, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_ROTATEAROUND_OFFSET))(point, origin, rotation);
		}

		static ::UnityEngine::Vector2 ToVector2(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_TOVECTOR2_OFFSET))(v);
		}

		static ::System::Boolean Approximately(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_APPROXIMATELY_OFFSET))(v1, v2);
		}

		static ::System::Boolean NotApproximately(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR3EXT_NOTAPPROXIMATELY_OFFSET))(v1, v2);
		}
	};
}
