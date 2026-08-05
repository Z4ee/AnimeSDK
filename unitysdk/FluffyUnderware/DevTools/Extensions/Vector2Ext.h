#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_ANGLESIGNED_OFFSET UNITYSDK_OFFSET(0x1EA54F50)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_LEFTNORMAL_OFFSET UNITYSDK_OFFSET(0x1EA55080)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_RIGHTNORMAL_OFFSET UNITYSDK_OFFSET(0x1EA550A0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_ROTATE_OFFSET UNITYSDK_OFFSET(0x1EA550B0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_SNAP_OFFSET UNITYSDK_OFFSET(0x1EA54EC0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1EA55150)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int Vector2Ext_TypeDefinitionIndex = 29004;

	class Vector2Ext : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 Snap(::UnityEngine::Vector2 v, ::System::Single snapX, ::System::Single snapY)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_SNAP_OFFSET))(v, snapX, snapY);
		}

		static ::System::Single AngleSigned(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_ANGLESIGNED_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2 LeftNormal(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_LEFTNORMAL_OFFSET))(v);
		}

		static ::UnityEngine::Vector2 RightNormal(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_RIGHTNORMAL_OFFSET))(v);
		}

		static ::UnityEngine::Vector2 Rotate(::UnityEngine::Vector2 v, ::System::Single degree)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_ROTATE_OFFSET))(v, degree);
		}

		static ::UnityEngine::Vector2 ToVector3(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_VECTOR2EXT_TOVECTOR3_OFFSET))(v);
		}
	};
}
