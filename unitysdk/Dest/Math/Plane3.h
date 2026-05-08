#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_PLANE3_ANGLEBETWEENPLANEANDLINE_1_OFFSET UNITYSDK_OFFSET(0x9A8CE0)
#define DEST_MATH_PLANE3_ANGLEBETWEENPLANEANDLINE_OFFSET UNITYSDK_OFFSET(0x9A8C00)
#define DEST_MATH_PLANE3_ANGLEBETWEENPLANENORMALANDLINE_1_OFFSET UNITYSDK_OFFSET(0x9A8AD0)
#define DEST_MATH_PLANE3_ANGLEBETWEENPLANENORMALANDLINE_OFFSET UNITYSDK_OFFSET(0x9A8A10)
#define DEST_MATH_PLANE3_ANGLEBETWEENTWOPLANES_OFFSET UNITYSDK_OFFSET(0x9A8E20)
#define DEST_MATH_PLANE3_CALCORIGIN_OFFSET UNITYSDK_OFFSET(0x753930)
#define DEST_MATH_PLANE3_CREATEORTHONORMALBASIS_OFFSET UNITYSDK_OFFSET(0x9A7DA0)
#define DEST_MATH_PLANE3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0x9A8040)
#define DEST_MATH_PLANE3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BB4EB50)
#define DEST_MATH_PLANE3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BB4EAA0)
#define DEST_MATH_PLANE3_PROJECTVECTOR_OFFSET UNITYSDK_OFFSET(0x9A8940)
#define DEST_MATH_PLANE3_PROJECT_OFFSET UNITYSDK_OFFSET(0x9A8860)
#define DEST_MATH_PLANE3_QUERYSIDENEGATIVE_1_OFFSET UNITYSDK_OFFSET(0x9A8350)
#define DEST_MATH_PLANE3_QUERYSIDENEGATIVE_2_OFFSET UNITYSDK_OFFSET(0x9A8380)
#define DEST_MATH_PLANE3_QUERYSIDENEGATIVE_3_OFFSET UNITYSDK_OFFSET(0x9A86C0)
#define DEST_MATH_PLANE3_QUERYSIDENEGATIVE_OFFSET UNITYSDK_OFFSET(0x9A81C0)
#define DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_1_OFFSET UNITYSDK_OFFSET(0x9A8360)
#define DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_2_OFFSET UNITYSDK_OFFSET(0x9A84A0)
#define DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_3_OFFSET UNITYSDK_OFFSET(0x9A8790)
#define DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x9A8280)
#define DEST_MATH_PLANE3_QUERYSIDE_1_OFFSET UNITYSDK_OFFSET(0x9A8340)
#define DEST_MATH_PLANE3_QUERYSIDE_2_OFFSET UNITYSDK_OFFSET(0x9A8370)
#define DEST_MATH_PLANE3_QUERYSIDE_3_OFFSET UNITYSDK_OFFSET(0x9A85D0)
#define DEST_MATH_PLANE3_QUERYSIDE_OFFSET UNITYSDK_OFFSET(0x9A80F0)
#define DEST_MATH_PLANE3_SIGNEDDISTANCETO_1_OFFSET UNITYSDK_OFFSET(0x9A7FA0)
#define DEST_MATH_PLANE3_SIGNEDDISTANCETO_OFFSET UNITYSDK_OFFSET(0x9A7EF0)
#define DEST_MATH_PLANE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A8EE0)
#define DEST_MATH_PLANE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D5CA0)
#define DEST_MATH_PLANE3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9A7B80)
#define DEST_MATH_PLANE3__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9A7C70)
#define DEST_MATH_PLANE3__CTOR_4_OFFSET UNITYSDK_OFFSET(0x9A7D30)
#define DEST_MATH_PLANE3__CTOR_5_OFFSET UNITYSDK_OFFSET(0x9A7D40)
#define DEST_MATH_PLANE3__CTOR_OFFSET UNITYSDK_OFFSET(0x3D5CA0)

namespace Dest::Math
{
	inline static constexpr unsigned int Plane3_TypeDefinitionIndex = 33214;

	struct alignas(4) Plane3
	{
		::UnityEngine::Vector3 Normal; // 0x10
		::System::Single Constant; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3& normal, ::System::Single constant)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3__CTOR_OFFSET))(this, normal, constant);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 normal, ::System::Single constant)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3__CTOR_1_OFFSET))(this, normal, constant);
		}

		::System::Void _ctor_2(::UnityEngine::Vector3& normal, ::UnityEngine::Vector3& point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3__CTOR_2_OFFSET))(this, normal, point);
		}

		::System::Void _ctor_3(::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3__CTOR_3_OFFSET))(this, normal, point);
		}

		::System::Void _ctor_4(::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1, ::UnityEngine::Vector3& p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3__CTOR_4_OFFSET))(this, p0, p1, p2);
		}

		::System::Void _ctor_5(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3__CTOR_5_OFFSET))(this, p0, p1, p2);
		}

		/*
		static ::UnityEngine::Plane op_Implicit(::Dest::Math::Plane3 value)
		{
			return ((::UnityEngine::Plane(*)(::Dest::Math::Plane3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_OP_IMPLICIT_OFFSET))(value);
		}
		*/

		/*
		static ::Dest::Math::Plane3 op_Implicit_1(::UnityEngine::Plane value)
		{
			return ((::Dest::Math::Plane3(*)(::UnityEngine::Plane))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_OP_IMPLICIT_1_OFFSET))(value);
		}
		*/

		::UnityEngine::Vector3 CalcOrigin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_CALCORIGIN_OFFSET))(this);
		}

		::System::Void CreateOrthonormalBasis(::UnityEngine::Vector3& u, ::UnityEngine::Vector3& v, ::UnityEngine::Vector3& n)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_CREATEORTHONORMALBASIS_OFFSET))(this, u, v, n);
		}

		::System::Single SignedDistanceTo(::UnityEngine::Vector3& point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_SIGNEDDISTANCETO_OFFSET))(this, point);
		}

		::System::Single SignedDistanceTo_1(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_SIGNEDDISTANCETO_1_OFFSET))(this, point);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_DISTANCETO_OFFSET))(this, point);
		}

		::System::Int32 QuerySide(::UnityEngine::Vector3 point, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDE_OFFSET))(this, point, epsilon);
		}

		::System::Boolean QuerySideNegative(::UnityEngine::Vector3 point, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDENEGATIVE_OFFSET))(this, point, epsilon);
		}

		::System::Boolean QuerySidePositive(::UnityEngine::Vector3 point, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_OFFSET))(this, point, epsilon);
		}

		/*
		::System::Int32 QuerySide_1(::Dest::Math::Box3& box, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::Dest::Math::Box3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDE_1_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySideNegative_1(::Dest::Math::Box3& box, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Box3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDENEGATIVE_1_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySidePositive_1(::Dest::Math::Box3& box, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Box3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_1_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Int32 QuerySide_2(::Dest::Math::AAB3& box, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::Dest::Math::AAB3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDE_2_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySideNegative_2(::Dest::Math::AAB3& box, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::AAB3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDENEGATIVE_2_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySidePositive_2(::Dest::Math::AAB3& box, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::AAB3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_2_OFFSET))(this, box, epsilon);
		}
		*/

		/*
		::System::Int32 QuerySide_3(::Dest::Math::Sphere3& sphere, ::System::Single epsilon)
		{
			return ((::System::Int32(*)(::PVOID, ::Dest::Math::Sphere3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDE_3_OFFSET))(this, sphere, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySideNegative_3(::Dest::Math::Sphere3& sphere, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Sphere3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDENEGATIVE_3_OFFSET))(this, sphere, epsilon);
		}
		*/

		/*
		::System::Boolean QuerySidePositive_3(::Dest::Math::Sphere3& sphere, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Sphere3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_3_OFFSET))(this, sphere, epsilon);
		}
		*/

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_PROJECT_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 ProjectVector(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_PROJECTVECTOR_OFFSET))(this, vector);
		}

		/*
		::System::Single AngleBetweenPlaneNormalAndLine(::Dest::Math::Line3 line)
		{
			return ((::System::Single(*)(::PVOID, ::Dest::Math::Line3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_ANGLEBETWEENPLANENORMALANDLINE_OFFSET))(this, line);
		}
		*/

		::System::Single AngleBetweenPlaneNormalAndLine_1(::UnityEngine::Vector3 direction)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_ANGLEBETWEENPLANENORMALANDLINE_1_OFFSET))(this, direction);
		}

		/*
		::System::Single AngleBetweenPlaneAndLine(::Dest::Math::Line3 line)
		{
			return ((::System::Single(*)(::PVOID, ::Dest::Math::Line3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_ANGLEBETWEENPLANEANDLINE_OFFSET))(this, line);
		}
		*/

		::System::Single AngleBetweenPlaneAndLine_1(::UnityEngine::Vector3 direction)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_ANGLEBETWEENPLANEANDLINE_1_OFFSET))(this, direction);
		}

		::System::Single AngleBetweenTwoPlanes(::Dest::Math::Plane3 anotherPlane)
		{
			return ((::System::Single(*)(::PVOID, ::Dest::Math::Plane3))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_ANGLEBETWEENTWOPLANES_OFFSET))(this, anotherPlane);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_PLANE3_TOSTRING_OFFSET))(this);
		}
	};
}
