#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_CIRCLE2_CALCAREA_OFFSET UNITYSDK_OFFSET(0x9871C0)
#define DEST_MATH_CIRCLE2_CALCPERIMETER_OFFSET UNITYSDK_OFFSET(0x9871B0)
#define DEST_MATH_CIRCLE2_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x987450)
#define DEST_MATH_CIRCLE2_CONTAINS_OFFSET UNITYSDK_OFFSET(0x987420)
#define DEST_MATH_CIRCLE2_CREATECIRCUMSCRIBED_OFFSET UNITYSDK_OFFSET(0x1B6A7DB0)
#define DEST_MATH_CIRCLE2_CREATEFROMPOINTSAAB_1_OFFSET UNITYSDK_OFFSET(0x1B6A7150)
#define DEST_MATH_CIRCLE2_CREATEFROMPOINTSAAB_OFFSET UNITYSDK_OFFSET(0x1B6A6EC0)
#define DEST_MATH_CIRCLE2_CREATEFROMPOINTSAVERAGE_1_OFFSET UNITYSDK_OFFSET(0x1B6A7A10)
#define DEST_MATH_CIRCLE2_CREATEFROMPOINTSAVERAGE_OFFSET UNITYSDK_OFFSET(0x1B6A72C0)
#define DEST_MATH_CIRCLE2_CREATEINSCRIBED_OFFSET UNITYSDK_OFFSET(0x1B6A8050)
#define DEST_MATH_CIRCLE2_DISTANCETO_OFFSET UNITYSDK_OFFSET(0x987320)
#define DEST_MATH_CIRCLE2_EVAL_1_OFFSET UNITYSDK_OFFSET(0x987290)
#define DEST_MATH_CIRCLE2_EVAL_OFFSET UNITYSDK_OFFSET(0x9871E0)
#define DEST_MATH_CIRCLE2_INCLUDE_1_OFFSET UNITYSDK_OFFSET(0x987590)
#define DEST_MATH_CIRCLE2_INCLUDE_OFFSET UNITYSDK_OFFSET(0x987490)
#define DEST_MATH_CIRCLE2_PROJECT_OFFSET UNITYSDK_OFFSET(0x987380)
#define DEST_MATH_CIRCLE2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9876A0)
#define DEST_MATH_CIRCLE2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2FEEC0)
#define DEST_MATH_CIRCLE2__CTOR_OFFSET UNITYSDK_OFFSET(0x9871A0)

namespace Dest::Math
{
	inline static constexpr unsigned int Circle2_TypeDefinitionIndex = 33202;

	struct alignas(4) Circle2
	{
		::UnityEngine::Vector2 Center; // 0x10
		::System::Single Radius; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2& center, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2__CTOR_OFFSET))(this, center, radius);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2__CTOR_1_OFFSET))(this, center, radius);
		}

		static ::Dest::Math::Circle2 CreateFromPointsAAB(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::Circle2(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CREATEFROMPOINTSAAB_OFFSET))(points);
		}

		static ::Dest::Math::Circle2 CreateFromPointsAAB_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::Circle2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CREATEFROMPOINTSAAB_1_OFFSET))(points);
		}

		static ::Dest::Math::Circle2 CreateFromPointsAverage(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::Circle2(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CREATEFROMPOINTSAVERAGE_OFFSET))(points);
		}

		static ::Dest::Math::Circle2 CreateFromPointsAverage_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::Circle2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CREATEFROMPOINTSAVERAGE_1_OFFSET))(points);
		}

		static ::System::Boolean CreateCircumscribed(::UnityEngine::Vector2 v0, ::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CREATECIRCUMSCRIBED_OFFSET))(v0, v1, v2, circle);
		}

		static ::System::Boolean CreateInscribed(::UnityEngine::Vector2 v0, ::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CREATEINSCRIBED_OFFSET))(v0, v1, v2, circle);
		}

		::System::Single CalcPerimeter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CALCPERIMETER_OFFSET))(this);
		}

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CALCAREA_OFFSET))(this);
		}

		::UnityEngine::Vector2 Eval(::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_EVAL_OFFSET))(this, t);
		}

		::UnityEngine::Vector2 Eval_1(::System::Single t, ::System::Single radius)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_EVAL_1_OFFSET))(this, t, radius);
		}

		::System::Single DistanceTo(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 Project(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_PROJECT_OFFSET))(this, point);
		}

		::System::Boolean Contains(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CONTAINS_OFFSET))(this, point);
		}

		::System::Boolean Contains_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_CONTAINS_1_OFFSET))(this, point);
		}

		::System::Void Include(::Dest::Math::Circle2& circle)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_INCLUDE_OFFSET))(this, circle);
		}

		::System::Void Include_1(::Dest::Math::Circle2 circle)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Circle2))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_INCLUDE_1_OFFSET))(this, circle);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CIRCLE2_TOSTRING_OFFSET))(this);
		}
	};
}
