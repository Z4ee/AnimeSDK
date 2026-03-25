#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_V3TOOLS_CLAMPDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x861BC20)
#define ROOTMOTION_V3TOOLS_CLAMPDIRECTION_OFFSET UNITYSDK_OFFSET(0x861B8B0)
#define ROOTMOTION_V3TOOLS_EXTRACTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x861B790)
#define ROOTMOTION_V3TOOLS_EXTRACTVERTICAL_OFFSET UNITYSDK_OFFSET(0x861B6B0)
#define ROOTMOTION_V3TOOLS_ISNEARLY_OFFSET UNITYSDK_OFFSET(0x861C130)
#define ROOTMOTION_V3TOOLS_LERP_OFFSET UNITYSDK_OFFSET(0x861B590)
#define ROOTMOTION_V3TOOLS_LINETOPLANE_OFFSET UNITYSDK_OFFSET(0x861BF90)
#define ROOTMOTION_V3TOOLS_SLERP_OFFSET UNITYSDK_OFFSET(0x861B610)

namespace RootMotion
{
	inline static constexpr unsigned int V3Tools_TypeDefinitionIndex = 35169;

	class V3Tools : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 fromVector, ::UnityEngine::Vector3 toVector, ::System::Single weight)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_LERP_OFFSET))(fromVector, toVector, weight);
		}

		static ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 fromVector, ::UnityEngine::Vector3 toVector, ::System::Single weight)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_SLERP_OFFSET))(fromVector, toVector, weight);
		}

		static ::UnityEngine::Vector3 ExtractVertical(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 verticalAxis, ::System::Single weight)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_EXTRACTVERTICAL_OFFSET))(v, verticalAxis, weight);
		}

		static ::UnityEngine::Vector3 ExtractHorizontal(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 normal, ::System::Single weight)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_EXTRACTHORIZONTAL_OFFSET))(v, normal, weight);
		}

		static ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, ::System::Single clampWeight, ::System::Int32 clampSmoothing, ::System::Boolean& changed)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_CLAMPDIRECTION_OFFSET))(direction, normalDirection, clampWeight, clampSmoothing, changed);
		}

		static ::UnityEngine::Vector3 ClampDirection_1(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, ::System::Single clampWeight, ::System::Int32 clampSmoothing, ::System::Single& clampValue)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_CLAMPDIRECTION_1_OFFSET))(direction, normalDirection, clampWeight, clampSmoothing, clampValue);
		}

		static ::UnityEngine::Vector3 LineToPlane(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_LINETOPLANE_OFFSET))(origin, direction, planeNormal, planePoint);
		}

		static ::System::Boolean IsNearly(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 other, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_ISNEARLY_OFFSET))(v, other, tolerance);
		}
	};
}
