#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define DEST_MATH_LINE2_ANGLEBETWEENTWOLINES_OFFSET UNITYSDK_OFFSET(0xA84CD0)
#define DEST_MATH_LINE2_CREATEBETWEENANDEQUIDISTANTTOPOINTS_OFFSET UNITYSDK_OFFSET(0x1E873A70)
#define DEST_MATH_LINE2_CREATEFROMTWOPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1E873940)
#define DEST_MATH_LINE2_CREATEFROMTWOPOINTS_OFFSET UNITYSDK_OFFSET(0x1E873890)
#define DEST_MATH_LINE2_CREATEPARALLELTOGIVENLINEATGIVENDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E873AE0)
#define DEST_MATH_LINE2_CREATEPERPTOLINETRHOUGHPOINT_OFFSET UNITYSDK_OFFSET(0x1E8739F0)
#define DEST_MATH_LINE2_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xA84160)
#define DEST_MATH_LINE2_EVAL_OFFSET UNITYSDK_OFFSET(0xA75970)
#define DEST_MATH_LINE2_PROJECT_OFFSET UNITYSDK_OFFSET(0xA84BF0)
#define DEST_MATH_LINE2_QUERYSIDENEGATIVE_1_OFFSET UNITYSDK_OFFSET(0xA845B0)
#define DEST_MATH_LINE2_QUERYSIDENEGATIVE_2_OFFSET UNITYSDK_OFFSET(0xA847E0)
#define DEST_MATH_LINE2_QUERYSIDENEGATIVE_3_OFFSET UNITYSDK_OFFSET(0xA84A90)
#define DEST_MATH_LINE2_QUERYSIDENEGATIVE_OFFSET UNITYSDK_OFFSET(0xA84330)
#define DEST_MATH_LINE2_QUERYSIDEPOSITIVE_1_OFFSET UNITYSDK_OFFSET(0xA846C0)
#define DEST_MATH_LINE2_QUERYSIDEPOSITIVE_2_OFFSET UNITYSDK_OFFSET(0xA848D0)
#define DEST_MATH_LINE2_QUERYSIDEPOSITIVE_3_OFFSET UNITYSDK_OFFSET(0xA84B40)
#define DEST_MATH_LINE2_QUERYSIDEPOSITIVE_OFFSET UNITYSDK_OFFSET(0xA843D0)
#define DEST_MATH_LINE2_QUERYSIDE_1_OFFSET UNITYSDK_OFFSET(0xA84480)
#define DEST_MATH_LINE2_QUERYSIDE_2_OFFSET UNITYSDK_OFFSET(0xA847D0)
#define DEST_MATH_LINE2_QUERYSIDE_3_OFFSET UNITYSDK_OFFSET(0xA849C0)
#define DEST_MATH_LINE2_QUERYSIDE_OFFSET UNITYSDK_OFFSET(0xA84270)
#define DEST_MATH_LINE2_SIGNEDDISTANCETO_OFFSET UNITYSDK_OFFSET(0xA840D0)
#define DEST_MATH_LINE2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA84D90)
#define DEST_MATH_LINE2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2BDE80)
#define DEST_MATH_LINE2__CTOR_OFFSET UNITYSDK_OFFSET(0x61A110)

namespace Dest::Math
{
	inline static constexpr unsigned int Line2_TypeDefinitionIndex = 34766;

	struct alignas(4) Line2
	{
		::UnityEngine::Vector2 Center; // 0x10
		::UnityEngine::Vector2 Direction; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2& center, ::UnityEngine::Vector2& direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2__CTOR_OFFSET))(this, center, direction);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2__CTOR_1_OFFSET))(this, center, direction);
		}

		static ::Dest::Math::Line2 CreateFromTwoPoints(::UnityEngine::Vector2& p0, ::UnityEngine::Vector2& p1)
		{
			return ((::Dest::Math::Line2(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_CREATEFROMTWOPOINTS_OFFSET))(p0, p1);
		}

		static ::Dest::Math::Line2 CreateFromTwoPoints_1(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1)
		{
			return ((::Dest::Math::Line2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_CREATEFROMTWOPOINTS_1_OFFSET))(p0, p1);
		}

		static ::Dest::Math::Line2 CreatePerpToLineTrhoughPoint(::Dest::Math::Line2 line, ::UnityEngine::Vector2 point)
		{
			return ((::Dest::Math::Line2(*)(::Dest::Math::Line2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_CREATEPERPTOLINETRHOUGHPOINT_OFFSET))(line, point);
		}

		static ::Dest::Math::Line2 CreateBetweenAndEquidistantToPoints(::UnityEngine::Vector2 point0, ::UnityEngine::Vector2 point1)
		{
			return ((::Dest::Math::Line2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_CREATEBETWEENANDEQUIDISTANTTOPOINTS_OFFSET))(point0, point1);
		}

		static ::Dest::Math::Line2 CreateParallelToGivenLineAtGivenDistance(::Dest::Math::Line2 line, ::System::Single distance)
		{
			return ((::Dest::Math::Line2(*)(::Dest::Math::Line2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_CREATEPARALLELTOGIVENLINEATGIVENDISTANCE_OFFSET))(line, distance);
		}

		::UnityEngine::Vector2 Eval(::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_EVAL_OFFSET))(this, t);
		}

		::System::Single SignedDistanceTo(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_SIGNEDDISTANCETO_OFFSET))(this, point);
		}

		::System::Single DistanceTo(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_DISTANCETO_OFFSET))(this, point);
		}

		::System::Int32 QuerySide(::UnityEngine::Vector2 point, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDE_OFFSET))(this, point, epsilon);
		}

		::System::Boolean QuerySideNegative(::UnityEngine::Vector2 point, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDENEGATIVE_OFFSET))(this, point, epsilon);
		}

		::System::Boolean QuerySidePositive(::UnityEngine::Vector2 point, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDEPOSITIVE_OFFSET))(this, point, epsilon);
		}

		/*
		::System::Int32 QuerySide_1(::Dest::Math::Box2& box, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::Dest::Math::Box2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDE_1_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySideNegative_1(::Dest::Math::Box2& box, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Box2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDENEGATIVE_1_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySidePositive_1(::Dest::Math::Box2& box, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Box2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDEPOSITIVE_1_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Int32 QuerySide_2(::Dest::Math::AAB2& box, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::Dest::Math::AAB2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDE_2_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySideNegative_2(::Dest::Math::AAB2& box, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::AAB2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDENEGATIVE_2_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySidePositive_2(::Dest::Math::AAB2& box, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::AAB2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDEPOSITIVE_2_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Int32 QuerySide_3(::Dest::Math::Circle2& circle, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::Dest::Math::Circle2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDE_3_OFFSET))(this, circle, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySideNegative_3(::Dest::Math::Circle2& circle, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Circle2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDENEGATIVE_3_OFFSET))(this, circle, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySidePositive_3(::Dest::Math::Circle2& circle, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Circle2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_QUERYSIDEPOSITIVE_3_OFFSET))(this, circle, epsilon);
		}
		*/

		::UnityEngine::Vector2 Project(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_PROJECT_OFFSET))(this, point);
		}

		::System::Single AngleBetweenTwoLines(::Dest::Math::Line2 anotherLine, ::System::Boolean acuteAngleDesired)
		{
			return ((::System::Single(*)(::PVOID, ::Dest::Math::Line2, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_ANGLEBETWEENTWOLINES_OFFSET))(this, anotherLine, acuteAngleDesired);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_LINE2_TOSTRING_OFFSET))(this);
		}
	};
}
