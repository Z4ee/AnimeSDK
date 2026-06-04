#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_98D44D81FBACEF55_AdditionalTransformAnim_AdditionalTransformAnimType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_98D44D81FBACEF55_ADDITIONALTRANSFORMANIM_METHOD_1_729D7865C768EDB3_OFFSET UNITYSDK_OFFSET(0x137B8D50)
#define CLASS_3_98D44D81FBACEF55_ADDITIONALTRANSFORMANIM_METHOD_1_FB525D2D16F36EA5_OFFSET UNITYSDK_OFFSET(0x137B8EB0)
#define CLASS_3_98D44D81FBACEF55_ADDITIONALTRANSFORMANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x137B93A0)

inline static constexpr unsigned int Class_3_98D44D81FBACEF55_AdditionalTransformAnim_TypeDefinitionIndex = 65762;

class Class_3_98D44D81FBACEF55_AdditionalTransformAnim : public ::System::Object
{
public:
	::Class_3_98D44D81FBACEF55_AdditionalTransformAnim_AdditionalTransformAnimType Type; // 0x10
	::UnityEngine::Vector2 RandomRotationAngleSpeedRange; // 0x14
	::UnityEngine::Vector2 RandomRotationAxisXRange; // 0x1C
	::UnityEngine::Vector2 RandomRotationAxisYRange; // 0x24
	::UnityEngine::Vector2 RandomRotationAxisZRange; // 0x2C
	::UnityEngine::Vector2 FadeScaleInOutPoint; // 0x34
	::UnityEngine::AnimationCurve* FadeScaleCurve; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_ADDITIONALTRANSFORMANIM__CTOR_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_729D7865C768EDB3(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_ADDITIONALTRANSFORMANIM_METHOD_1_729D7865C768EDB3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FB525D2D16F36EA5(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_ADDITIONALTRANSFORMANIM_METHOD_1_FB525D2D16F36EA5_OFFSET))(this, a1);
	}
};
