#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_CIRCLE3_CALCAREA_OFFSET UNITYSDK_OFFSET(0x9D3DC0)
#define DEST_MATH_CIRCLE3_CALCPERIMETER_OFFSET UNITYSDK_OFFSET(0x9D3DB0)
#define DEST_MATH_CIRCLE3_CREATECIRCUMSCRIBED_OFFSET UNITYSDK_OFFSET(0x1C34F350)
#define DEST_MATH_CIRCLE3_CREATEINSCRIBED_OFFSET UNITYSDK_OFFSET(0x1C34F7E0)
#define DEST_MATH_CIRCLE3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0x9D3F90)
#define DEST_MATH_CIRCLE3_EVAL_1_OFFSET UNITYSDK_OFFSET(0x9D3EC0)
#define DEST_MATH_CIRCLE3_EVAL_OFFSET UNITYSDK_OFFSET(0x9D3DE0)
#define DEST_MATH_CIRCLE3_PROJECT_OFFSET UNITYSDK_OFFSET(0x9D3FF0)
#define DEST_MATH_CIRCLE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D4050)
#define DEST_MATH_CIRCLE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9D3B30)
#define DEST_MATH_CIRCLE3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9D3C60)
#define DEST_MATH_CIRCLE3__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9D3D00)
#define DEST_MATH_CIRCLE3__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3A00)

namespace Dest::Math
{
	inline static constexpr unsigned int Circle3_TypeDefinitionIndex = 33212;

	struct alignas(4) Circle3
	{
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Axis0; // 0x1C
		::UnityEngine::Vector3 Axis1; // 0x28
		::UnityEngine::Vector3 Normal; // 0x34
		::System::Single Radius; // 0x40

		::System::Void _ctor(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& axis0, ::UnityEngine::Vector3& axis1, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3__CTOR_OFFSET))(this, center, axis0, axis1, radius);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 axis0, ::UnityEngine::Vector3 axis1, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3__CTOR_1_OFFSET))(this, center, axis0, axis1, radius);
		}

		::System::Void _ctor_2(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& normal, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3__CTOR_2_OFFSET))(this, center, normal, radius);
		}

		::System::Void _ctor_3(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 normal, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3__CTOR_3_OFFSET))(this, center, normal, radius);
		}

		static ::System::Boolean CreateCircumscribed(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::Dest::Math::Circle3& circle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::Circle3&))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_CREATECIRCUMSCRIBED_OFFSET))(v0, v1, v2, circle);
		}

		static ::System::Boolean CreateInscribed(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::Dest::Math::Circle3& circle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::Circle3&))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_CREATEINSCRIBED_OFFSET))(v0, v1, v2, circle);
		}

		::System::Single CalcPerimeter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_CALCPERIMETER_OFFSET))(this);
		}

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_CALCAREA_OFFSET))(this);
		}

		::UnityEngine::Vector3 Eval(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_EVAL_OFFSET))(this, t);
		}

		::UnityEngine::Vector3 Eval_1(::System::Single t, ::System::Single radius)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_EVAL_1_OFFSET))(this, t, radius);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point, ::System::Boolean solid)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_DISTANCETO_OFFSET))(this, point, solid);
		}

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point, ::System::Boolean solid)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_PROJECT_OFFSET))(this, point, solid);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE3_TOSTRING_OFFSET))(this);
		}
	};
}
