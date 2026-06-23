#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_PLANE3_ANGLEBETWEENPLANEANDLINE_1_OFFSET UNITYSDK_OFFSET(0xA4BB40)
#define DEST_MATH_PLANE3_ANGLEBETWEENPLANEANDLINE_OFFSET UNITYSDK_OFFSET(0xA4BA60)
#define DEST_MATH_PLANE3_ANGLEBETWEENPLANENORMALANDLINE_1_OFFSET UNITYSDK_OFFSET(0xA4B930)
#define DEST_MATH_PLANE3_ANGLEBETWEENPLANENORMALANDLINE_OFFSET UNITYSDK_OFFSET(0xA4B870)
#define DEST_MATH_PLANE3_ANGLEBETWEENTWOPLANES_OFFSET UNITYSDK_OFFSET(0xA4BC80)
#define DEST_MATH_PLANE3_CALCORIGIN_OFFSET UNITYSDK_OFFSET(0x84DEB0)
#define DEST_MATH_PLANE3_CREATEORTHONORMALBASIS_OFFSET UNITYSDK_OFFSET(0xA4AC00)
#define DEST_MATH_PLANE3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xA4AEA0)
#define DEST_MATH_PLANE3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DEC84C0)
#define DEST_MATH_PLANE3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DEC8410)
#define DEST_MATH_PLANE3_PROJECTVECTOR_OFFSET UNITYSDK_OFFSET(0xA4B7A0)
#define DEST_MATH_PLANE3_PROJECT_OFFSET UNITYSDK_OFFSET(0xA4B6C0)
#define DEST_MATH_PLANE3_QUERYSIDENEGATIVE_1_OFFSET UNITYSDK_OFFSET(0xA4B1B0)
#define DEST_MATH_PLANE3_QUERYSIDENEGATIVE_2_OFFSET UNITYSDK_OFFSET(0xA4B1E0)
#define DEST_MATH_PLANE3_QUERYSIDENEGATIVE_3_OFFSET UNITYSDK_OFFSET(0xA4B520)
#define DEST_MATH_PLANE3_QUERYSIDENEGATIVE_OFFSET UNITYSDK_OFFSET(0xA4B020)
#define DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_1_OFFSET UNITYSDK_OFFSET(0xA4B1C0)
#define DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_2_OFFSET UNITYSDK_OFFSET(0xA4B300)
#define DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_3_OFFSET UNITYSDK_OFFSET(0xA4B5F0)
#define DEST_MATH_PLANE3_QUERYSIDEPOSITIVE_OFFSET UNITYSDK_OFFSET(0xA4B0E0)
#define DEST_MATH_PLANE3_QUERYSIDE_1_OFFSET UNITYSDK_OFFSET(0xA4B1A0)
#define DEST_MATH_PLANE3_QUERYSIDE_2_OFFSET UNITYSDK_OFFSET(0xA4B1D0)
#define DEST_MATH_PLANE3_QUERYSIDE_3_OFFSET UNITYSDK_OFFSET(0xA4B430)
#define DEST_MATH_PLANE3_QUERYSIDE_OFFSET UNITYSDK_OFFSET(0xA4AF50)
#define DEST_MATH_PLANE3_SIGNEDDISTANCETO_1_OFFSET UNITYSDK_OFFSET(0xA4AE00)
#define DEST_MATH_PLANE3_SIGNEDDISTANCETO_OFFSET UNITYSDK_OFFSET(0xA4AD50)
#define DEST_MATH_PLANE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4BD40)
#define DEST_MATH_PLANE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x460B80)
#define DEST_MATH_PLANE3__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA4A9E0)
#define DEST_MATH_PLANE3__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA4AAD0)
#define DEST_MATH_PLANE3__CTOR_4_OFFSET UNITYSDK_OFFSET(0xA4AB90)
#define DEST_MATH_PLANE3__CTOR_5_OFFSET UNITYSDK_OFFSET(0xA4ABA0)
#define DEST_MATH_PLANE3__CTOR_OFFSET UNITYSDK_OFFSET(0x460B80)

namespace Dest::Math
{
	inline static constexpr unsigned int Plane3_TypeDefinitionIndex = 34777;

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
