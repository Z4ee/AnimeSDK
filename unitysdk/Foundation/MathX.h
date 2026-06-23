#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MATHX_ACCEL_OFFSET UNITYSDK_OFFSET(0x1A115CD0)
#define FOUNDATION_MATHX_CALPARALOBAPOSITION_OFFSET UNITYSDK_OFFSET(0x1A1160F0)
#define FOUNDATION_MATHX_CLAMPINDEGREE_OFFSET UNITYSDK_OFFSET(0x1A116050)
#define FOUNDATION_MATHX_COSEULAR_OFFSET UNITYSDK_OFFSET(0x1A1159E0)
#define FOUNDATION_MATHX_LERP_OFFSET UNITYSDK_OFFSET(0x1A115A70)
#define FOUNDATION_MATHX_SINEULAR_OFFSET UNITYSDK_OFFSET(0x1A115780)
#define FOUNDATION_MATHX_SPEEDTO_OFFSET UNITYSDK_OFFSET(0x1A115D60)
#define FOUNDATION_MATHX_TOPI_OFFSET UNITYSDK_OFFSET(0x1A115980)

namespace Foundation
{
	inline static constexpr unsigned int MathX_TypeDefinitionIndex = 7908;

	class MathX : public ::System::Object
	{
	public:
		static ::System::Single SinEular(::System::Single eularAngle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MATHX_SINEULAR_OFFSET))(eularAngle);
		}

		static ::System::Single CosEular(::System::Single eularAngle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MATHX_COSEULAR_OFFSET))(eularAngle);
		}

		static ::System::Single ToPI(::System::Single eularAngle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MATHX_TOPI_OFFSET))(eularAngle);
		}

		static ::System::Single Lerp(::System::Single t1, ::System::Single t2, ::System::Single ratio)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MATHX_LERP_OFFSET))(t1, t2, ratio);
		}

		static ::System::Single Accel(::System::Single t, ::System::Single acc, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MATHX_ACCEL_OFFSET))(t, acc, deltaTime);
		}

		static ::System::Single SpeedTo(::System::Single t, ::System::Single tarSpeed, ::System::Single accel, ::System::Single decel, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MATHX_SPEEDTO_OFFSET))(t, tarSpeed, accel, decel, deltaTime);
		}

		static ::System::Single ClampInDegree(::System::Single angle, ::System::Single toChangeAngle)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MATHX_CLAMPINDEGREE_OFFSET))(angle, toChangeAngle);
		}

		static ::UnityEngine::Vector3 CalParalobaPosition(::UnityEngine::Vector3 initVelocity, ::UnityEngine::Vector3 accelerated, ::System::Single time)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MATHX_CALPARALOBAPOSITION_OFFSET))(initVelocity, accelerated, time);
		}
	};
}
