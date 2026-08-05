#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_AAB2_CALCAREA_OFFSET UNITYSDK_OFFSET(0xAB43E0)
#define DEST_MATH_AAB2_CALCCENTEREXTENTS_OFFSET UNITYSDK_OFFSET(0xAB4360)
#define DEST_MATH_AAB2_CALCVERTICES_1_OFFSET UNITYSDK_OFFSET(0xAB43C0)
#define DEST_MATH_AAB2_CALCVERTICES_2_OFFSET UNITYSDK_OFFSET(0xAB43D0)
#define DEST_MATH_AAB2_CALCVERTICES_OFFSET UNITYSDK_OFFSET(0xAB4390)
#define DEST_MATH_AAB2_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xAB4530)
#define DEST_MATH_AAB2_CONTAINS_OFFSET UNITYSDK_OFFSET(0xAB44F0)
#define DEST_MATH_AAB2_CREATEFROMPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1F7F5300)
#define DEST_MATH_AAB2_CREATEFROMPOINTS_2_OFFSET UNITYSDK_OFFSET(0x1F7F55E0)
#define DEST_MATH_AAB2_CREATEFROMPOINTS_OFFSET UNITYSDK_OFFSET(0x1F7F4E00)
#define DEST_MATH_AAB2_CREATEFROMPOINT_1_OFFSET UNITYSDK_OFFSET(0x1F7F4D80)
#define DEST_MATH_AAB2_CREATEFROMPOINT_OFFSET UNITYSDK_OFFSET(0x1F7F4D70)
#define DEST_MATH_AAB2_CREATEFROMTWOPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1F7F4DC0)
#define DEST_MATH_AAB2_CREATEFROMTWOPOINTS_OFFSET UNITYSDK_OFFSET(0x1F7F4D90)
#define DEST_MATH_AAB2_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xAB4400)
#define DEST_MATH_AAB2_INCLUDE_1_OFFSET UNITYSDK_OFFSET(0xAB45C0)
#define DEST_MATH_AAB2_INCLUDE_2_OFFSET UNITYSDK_OFFSET(0xAB4610)
#define DEST_MATH_AAB2_INCLUDE_3_OFFSET UNITYSDK_OFFSET(0xAB46A0)
#define DEST_MATH_AAB2_INCLUDE_OFFSET UNITYSDK_OFFSET(0xAB4570)
#define DEST_MATH_AAB2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1F7F4D50)
#define DEST_MATH_AAB2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F7F4D30)
#define DEST_MATH_AAB2_PROJECT_OFFSET UNITYSDK_OFFSET(0xAB4480)
#define DEST_MATH_AAB2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAB4730)
#define DEST_MATH_AAB2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x346F70)
#define DEST_MATH_AAB2__CTOR_2_OFFSET UNITYSDK_OFFSET(0xAB4340)
#define DEST_MATH_AAB2__CTOR_OFFSET UNITYSDK_OFFSET(0x3D1D30)

namespace Dest::Math
{
	inline static constexpr unsigned int AAB2_TypeDefinitionIndex = 35422;

	struct alignas(4) AAB2
	{
		::UnityEngine::Vector2 Min; // 0x10
		::UnityEngine::Vector2 Max; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2& min, ::UnityEngine::Vector2& max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2__CTOR_OFFSET))(this, min, max);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2__CTOR_1_OFFSET))(this, min, max);
		}

		::System::Void _ctor_2(::System::Single xMin, ::System::Single xMax, ::System::Single yMin, ::System::Single yMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2__CTOR_2_OFFSET))(this, xMin, xMax, yMin, yMax);
		}

		/*
		static ::UnityEngine::Rect op_Implicit(::Dest::Math::AAB2 value)
		{
			return ((::UnityEngine::Rect(*)(::Dest::Math::AAB2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_OP_IMPLICIT_OFFSET))(value);
		}
		*/

		/*
		static ::Dest::Math::AAB2 op_Implicit_1(::UnityEngine::Rect value)
		{
			return ((::Dest::Math::AAB2(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_OP_IMPLICIT_1_OFFSET))(value);
		}
		*/

		static ::Dest::Math::AAB2 CreateFromPoint(::UnityEngine::Vector2& point)
		{
			return ((::Dest::Math::AAB2(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CREATEFROMPOINT_OFFSET))(point);
		}

		static ::Dest::Math::AAB2 CreateFromPoint_1(::UnityEngine::Vector2 point)
		{
			return ((::Dest::Math::AAB2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CREATEFROMPOINT_1_OFFSET))(point);
		}

		static ::Dest::Math::AAB2 CreateFromTwoPoints(::UnityEngine::Vector2& point0, ::UnityEngine::Vector2& point1)
		{
			return ((::Dest::Math::AAB2(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CREATEFROMTWOPOINTS_OFFSET))(point0, point1);
		}

		static ::Dest::Math::AAB2 CreateFromTwoPoints_1(::UnityEngine::Vector2 point0, ::UnityEngine::Vector2 point1)
		{
			return ((::Dest::Math::AAB2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CREATEFROMTWOPOINTS_1_OFFSET))(point0, point1);
		}

		static ::Dest::Math::AAB2 CreateFromPoints(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::AAB2(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CREATEFROMPOINTS_OFFSET))(points);
		}

		static ::Dest::Math::AAB2 CreateFromPoints_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::AAB2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CREATEFROMPOINTS_1_OFFSET))(points);
		}

		static ::Dest::Math::AAB2 CreateFromPoints_2(::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::AAB2(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CREATEFROMPOINTS_2_OFFSET))(points);
		}

		::System::Void CalcCenterExtents(::UnityEngine::Vector2& center, ::UnityEngine::Vector2& extents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CALCCENTEREXTENTS_OFFSET))(this, center, extents);
		}

		::System::Void CalcVertices(::UnityEngine::Vector2& vertex0, ::UnityEngine::Vector2& vertex1, ::UnityEngine::Vector2& vertex2, ::UnityEngine::Vector2& vertex3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CALCVERTICES_OFFSET))(this, vertex0, vertex1, vertex2, vertex3);
		}

		::Il2CppArray<::UnityEngine::Vector2>* CalcVertices_1()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CALCVERTICES_1_OFFSET))(this);
		}

		::System::Void CalcVertices_2(::Il2CppArray<::UnityEngine::Vector2>* array)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CALCVERTICES_2_OFFSET))(this, array);
		}

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CALCAREA_OFFSET))(this);
		}

		::System::Single DistanceTo(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 Project(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_PROJECT_OFFSET))(this, point);
		}

		::System::Boolean Contains(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CONTAINS_OFFSET))(this, point);
		}

		::System::Boolean Contains_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_CONTAINS_1_OFFSET))(this, point);
		}

		::System::Void Include(::UnityEngine::Vector2& point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_INCLUDE_OFFSET))(this, point);
		}

		::System::Void Include_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_INCLUDE_1_OFFSET))(this, point);
		}

		::System::Void Include_2(::Dest::Math::AAB2& box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_INCLUDE_2_OFFSET))(this, box);
		}

		::System::Void Include_3(::Dest::Math::AAB2 box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::AAB2))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_INCLUDE_3_OFFSET))(this, box);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_AAB2_TOSTRING_OFFSET))(this);
		}
	};
}
