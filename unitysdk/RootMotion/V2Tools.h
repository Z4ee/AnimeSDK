#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_V2TOOLS_DELTAANGLEXZ_OFFSET UNITYSDK_OFFSET(0x1BF8F220)
#define ROOTMOTION_V2TOOLS_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x1BF8F160)
#define ROOTMOTION_V2TOOLS_LINECIRCLEINTERSECT_OFFSET UNITYSDK_OFFSET(0x1BF8F2C0)
#define ROOTMOTION_V2TOOLS_RAYCIRCLEINTERSECT_OFFSET UNITYSDK_OFFSET(0x1BF8F3D0)
#define ROOTMOTION_V2TOOLS_XZ_OFFSET UNITYSDK_OFFSET(0x1BF8F150)

namespace RootMotion
{
	inline static constexpr unsigned int V2Tools_TypeDefinitionIndex = 36546;

	class V2Tools : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 XZ(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V2TOOLS_XZ_OFFSET))(v);
		}

		static ::System::Single DeltaAngle(::UnityEngine::Vector2 dir1, ::UnityEngine::Vector2 dir2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ROOTMOTION_V2TOOLS_DELTAANGLE_OFFSET))(dir1, dir2);
		}

		static ::System::Single DeltaAngleXZ(::UnityEngine::Vector3 dir1, ::UnityEngine::Vector3 dir2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V2TOOLS_DELTAANGLEXZ_OFFSET))(dir1, dir2);
		}

		static ::System::Boolean LineCircleIntersect(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 c, ::System::Single r)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V2TOOLS_LINECIRCLEINTERSECT_OFFSET))(p1, p2, c, r);
		}

		static ::System::Boolean RayCircleIntersect(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 dir, ::UnityEngine::Vector2 c, ::System::Single r)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V2TOOLS_RAYCIRCLEINTERSECT_OFFSET))(p1, dir, c, r);
		}
	};
}
