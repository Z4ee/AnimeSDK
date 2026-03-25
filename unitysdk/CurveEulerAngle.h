#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CurveTwirlType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CURVEEULERANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6FBAE0)

inline static constexpr unsigned int CurveEulerAngle_TypeDefinitionIndex = 38173;

class CurveEulerAngle : public ::System::Object
{
public:
	::CurveTwirlType TwirlType; // 0x10
	::System::Single ChangeEulerAngleStart; // 0x14
	::System::Single ChangeEulerAngleEnd; // 0x18
	::System::Single ChangeStart; // 0x1C
	::System::Single ChangeEnd; // 0x20
	::UnityEngine::AnimationCurve* ChangeCurve; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVEEULERANGLE__CTOR_OFFSET))(this);
	}
};
