#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_V3TOOLS_CLAMPDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x1BE24100)
#define ROOTMOTION_V3TOOLS_CLAMPDIRECTION_2_OFFSET UNITYSDK_OFFSET(0x1BE24470)
#define ROOTMOTION_V3TOOLS_CLAMPDIRECTION_OFFSET UNITYSDK_OFFSET(0x1BE23DD0)
#define ROOTMOTION_V3TOOLS_DIV_OFFSET UNITYSDK_OFFSET(0x1BE25160)
#define ROOTMOTION_V3TOOLS_EXTRACTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1BE23AF0)
#define ROOTMOTION_V3TOOLS_EXTRACTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1BE23990)
#define ROOTMOTION_V3TOOLS_FLATTEN_OFFSET UNITYSDK_OFFSET(0x1BE23C80)
#define ROOTMOTION_V3TOOLS_GETBANK_1_OFFSET UNITYSDK_OFFSET(0x1BE234E0)
#define ROOTMOTION_V3TOOLS_GETBANK_OFFSET UNITYSDK_OFFSET(0x1BE23090)
#define ROOTMOTION_V3TOOLS_GETPITCH_1_OFFSET UNITYSDK_OFFSET(0x1BE233F0)
#define ROOTMOTION_V3TOOLS_GETPITCH_OFFSET UNITYSDK_OFFSET(0x1BE22FF0)
#define ROOTMOTION_V3TOOLS_GETYAW_1_OFFSET UNITYSDK_OFFSET(0x1BE23250)
#define ROOTMOTION_V3TOOLS_GETYAW_OFFSET UNITYSDK_OFFSET(0x1BE22FD0)
#define ROOTMOTION_V3TOOLS_INVERSETRANSFORMPOINTUNSCALED_OFFSET UNITYSDK_OFFSET(0x1BE24D10)
#define ROOTMOTION_V3TOOLS_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1BE24F50)
#define ROOTMOTION_V3TOOLS_LERP_OFFSET UNITYSDK_OFFSET(0x1BE23870)
#define ROOTMOTION_V3TOOLS_LINETOPLANE_OFFSET UNITYSDK_OFFSET(0x1BE247E0)
#define ROOTMOTION_V3TOOLS_POINTTOPLANE_OFFSET UNITYSDK_OFFSET(0x1BE24980)
#define ROOTMOTION_V3TOOLS_SLERP_OFFSET UNITYSDK_OFFSET(0x1BE238F0)
#define ROOTMOTION_V3TOOLS_TRANSFORMPOINTUNSCALED_OFFSET UNITYSDK_OFFSET(0x1BE24B20)
#define ROOTMOTION_V3TOOLS_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1BE25190)

namespace RootMotion
{
	inline static constexpr unsigned int V3Tools_TypeDefinitionIndex = 36547;

	class V3Tools : public ::System::Object
	{
	public:
		static ::System::Single GetYaw(::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_GETYAW_OFFSET))(forward);
		}

		static ::System::Single GetPitch(::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_GETPITCH_OFFSET))(forward);
		}

		static ::System::Single GetBank(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_GETBANK_OFFSET))(forward, up);
		}

		static ::System::Single GetYaw_1(::UnityEngine::Vector3 spaceForward, ::UnityEngine::Vector3 spaceUp, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_GETYAW_1_OFFSET))(spaceForward, spaceUp, forward);
		}

		static ::System::Single GetPitch_1(::UnityEngine::Vector3 spaceForward, ::UnityEngine::Vector3 spaceUp, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_GETPITCH_1_OFFSET))(spaceForward, spaceUp, forward);
		}

		static ::System::Single GetBank_1(::UnityEngine::Vector3 spaceForward, ::UnityEngine::Vector3 spaceUp, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_GETBANK_1_OFFSET))(spaceForward, spaceUp, forward, up);
		}

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

		static ::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 normal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_FLATTEN_OFFSET))(v, normal);
		}

		static ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, ::System::Single clampWeight, ::System::Int32 clampSmoothing)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_CLAMPDIRECTION_OFFSET))(direction, normalDirection, clampWeight, clampSmoothing);
		}

		static ::UnityEngine::Vector3 ClampDirection_1(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, ::System::Single clampWeight, ::System::Int32 clampSmoothing, ::System::Boolean& changed)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_CLAMPDIRECTION_1_OFFSET))(direction, normalDirection, clampWeight, clampSmoothing, changed);
		}

		static ::UnityEngine::Vector3 ClampDirection_2(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, ::System::Single clampWeight, ::System::Int32 clampSmoothing, ::System::Single& clampValue)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_CLAMPDIRECTION_2_OFFSET))(direction, normalDirection, clampWeight, clampSmoothing, clampValue);
		}

		static ::UnityEngine::Vector3 LineToPlane(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_LINETOPLANE_OFFSET))(origin, direction, planeNormal, planePoint);
		}

		static ::UnityEngine::Vector3 PointToPlane(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 planePosition, ::UnityEngine::Vector3 planeNormal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_POINTTOPLANE_OFFSET))(point, planePosition, planeNormal);
		}

		static ::UnityEngine::Vector3 TransformPointUnscaled(::UnityEngine::Transform* t, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_TRANSFORMPOINTUNSCALED_OFFSET))(t, point);
		}

		static ::UnityEngine::Vector3 InverseTransformPointUnscaled(::UnityEngine::Transform* t, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_INVERSETRANSFORMPOINTUNSCALED_OFFSET))(t, point);
		}

		static ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 tPos, ::UnityEngine::Quaternion tRot, ::UnityEngine::Vector3 tScale, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_INVERSETRANSFORMPOINT_OFFSET))(tPos, tRot, tScale, point);
		}

		static ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 tPos, ::UnityEngine::Quaternion tRot, ::UnityEngine::Vector3 tScale, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_TRANSFORMPOINT_OFFSET))(tPos, tRot, tScale, point);
		}

		static ::UnityEngine::Vector3 Div(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_DIV_OFFSET))(v1, v2);
		}
	};
}
