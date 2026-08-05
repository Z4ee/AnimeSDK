#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_LINE3_ANGLEBETWEENTWOLINES_OFFSET UNITYSDK_OFFSET(0xADDAC0)
#define DEST_MATH_LINE3_CREATEFROMTWOPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1FC654F0)
#define DEST_MATH_LINE3_CREATEFROMTWOPOINTS_OFFSET UNITYSDK_OFFSET(0x1FC65470)
#define DEST_MATH_LINE3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xADD860)
#define DEST_MATH_LINE3_EVAL_OFFSET UNITYSDK_OFFSET(0xA64530)
#define DEST_MATH_LINE3_PROJECT_OFFSET UNITYSDK_OFFSET(0xADD9A0)
#define DEST_MATH_LINE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xADDB90)
#define DEST_MATH_LINE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3975A0)
#define DEST_MATH_LINE3__CTOR_OFFSET UNITYSDK_OFFSET(0x97AF70)

namespace Dest::Math
{
	inline static constexpr unsigned int Line3_TypeDefinitionIndex = 35435;

	struct alignas(4) Line3
	{
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Direction; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3__CTOR_OFFSET))(this, center, direction);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3__CTOR_1_OFFSET))(this, center, direction);
		}

		static ::Dest::Math::Line3 CreateFromTwoPoints(::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1)
		{
			return ((::Dest::Math::Line3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3_CREATEFROMTWOPOINTS_OFFSET))(p0, p1);
		}

		static ::Dest::Math::Line3 CreateFromTwoPoints_1(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1)
		{
			return ((::Dest::Math::Line3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3_CREATEFROMTWOPOINTS_1_OFFSET))(p0, p1);
		}

		::UnityEngine::Vector3 Eval(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3_EVAL_OFFSET))(this, t);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3_PROJECT_OFFSET))(this, point);
		}

		::System::Single AngleBetweenTwoLines(::Dest::Math::Line3 anotherLine, ::System::Boolean acuteAngleDesired)
		{
			return ((::System::Single(*)(::PVOID, ::Dest::Math::Line3, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3_ANGLEBETWEENTWOLINES_OFFSET))(this, anotherLine, acuteAngleDesired);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_LINE3_TOSTRING_OFFSET))(this);
		}
	};
}
