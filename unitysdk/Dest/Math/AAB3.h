#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_AAB3_CALCCENTEREXTENTS_OFFSET UNITYSDK_OFFSET(0xAB4820)
#define DEST_MATH_AAB3_CALCVERTICES_1_OFFSET UNITYSDK_OFFSET(0xAB4950)
#define DEST_MATH_AAB3_CALCVERTICES_2_OFFSET UNITYSDK_OFFSET(0xAB4960)
#define DEST_MATH_AAB3_CALCVERTICES_OFFSET UNITYSDK_OFFSET(0xAB4880)
#define DEST_MATH_AAB3_CALCVOLUME_OFFSET UNITYSDK_OFFSET(0xAB4970)
#define DEST_MATH_AAB3_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xAB4B00)
#define DEST_MATH_AAB3_CONTAINS_OFFSET UNITYSDK_OFFSET(0xAB4B00)
#define DEST_MATH_AAB3_CREATEFROMPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1F7F6560)
#define DEST_MATH_AAB3_CREATEFROMPOINTS_2_OFFSET UNITYSDK_OFFSET(0x1F7F68C0)
#define DEST_MATH_AAB3_CREATEFROMPOINTS_OFFSET UNITYSDK_OFFSET(0x1F7F5FA0)
#define DEST_MATH_AAB3_CREATEFROMPOINT_1_OFFSET UNITYSDK_OFFSET(0x1F7F5E10)
#define DEST_MATH_AAB3_CREATEFROMPOINT_OFFSET UNITYSDK_OFFSET(0x1F7F5DC0)
#define DEST_MATH_AAB3_CREATEFROMTWOPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1F7F5F00)
#define DEST_MATH_AAB3_CREATEFROMTWOPOINTS_OFFSET UNITYSDK_OFFSET(0x1F7F5E60)
#define DEST_MATH_AAB3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xAB49A0)
#define DEST_MATH_AAB3_INCLUDE_1_OFFSET UNITYSDK_OFFSET(0xAB4BC0)
#define DEST_MATH_AAB3_INCLUDE_2_OFFSET UNITYSDK_OFFSET(0xAB4C30)
#define DEST_MATH_AAB3_INCLUDE_3_OFFSET UNITYSDK_OFFSET(0xAB4D00)
#define DEST_MATH_AAB3_INCLUDE_OFFSET UNITYSDK_OFFSET(0xAB4B50)
#define DEST_MATH_AAB3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1F7F5D80)
#define DEST_MATH_AAB3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F7F5CD0)
#define DEST_MATH_AAB3_PROJECT_OFFSET UNITYSDK_OFFSET(0xAB4A50)
#define DEST_MATH_AAB3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAB4DE0)
#define DEST_MATH_AAB3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3975A0)
#define DEST_MATH_AAB3__CTOR_2_OFFSET UNITYSDK_OFFSET(0xAB47E0)
#define DEST_MATH_AAB3__CTOR_OFFSET UNITYSDK_OFFSET(0x97AF70)

namespace Dest::Math
{
	inline static constexpr unsigned int AAB3_TypeDefinitionIndex = 35431;

	struct alignas(4) AAB3
	{
		::UnityEngine::Vector3 Min; // 0x10
		::UnityEngine::Vector3 Max; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3& min, ::UnityEngine::Vector3& max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3__CTOR_OFFSET))(this, min, max);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3__CTOR_1_OFFSET))(this, min, max);
		}

		::System::Void _ctor_2(::System::Single xMin, ::System::Single xMax, ::System::Single yMin, ::System::Single yMax, ::System::Single zMin, ::System::Single zMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3__CTOR_2_OFFSET))(this, xMin, xMax, yMin, yMax, zMin, zMax);
		}

		/*
		static ::UnityEngine::Bounds op_Implicit(::Dest::Math::AAB3 value)
		{
			return ((::UnityEngine::Bounds(*)(::Dest::Math::AAB3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_OP_IMPLICIT_OFFSET))(value);
		}
		*/

		/*
		static ::Dest::Math::AAB3 op_Implicit_1(::UnityEngine::Bounds value)
		{
			return ((::Dest::Math::AAB3(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_OP_IMPLICIT_1_OFFSET))(value);
		}
		*/

		static ::Dest::Math::AAB3 CreateFromPoint(::UnityEngine::Vector3& point)
		{
			return ((::Dest::Math::AAB3(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CREATEFROMPOINT_OFFSET))(point);
		}

		static ::Dest::Math::AAB3 CreateFromPoint_1(::UnityEngine::Vector3 point)
		{
			return ((::Dest::Math::AAB3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CREATEFROMPOINT_1_OFFSET))(point);
		}

		static ::Dest::Math::AAB3 CreateFromTwoPoints(::UnityEngine::Vector3& point0, ::UnityEngine::Vector3& point1)
		{
			return ((::Dest::Math::AAB3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CREATEFROMTWOPOINTS_OFFSET))(point0, point1);
		}

		static ::Dest::Math::AAB3 CreateFromTwoPoints_1(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1)
		{
			return ((::Dest::Math::AAB3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CREATEFROMTWOPOINTS_1_OFFSET))(point0, point1);
		}

		static ::Dest::Math::AAB3 CreateFromPoints(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::AAB3(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CREATEFROMPOINTS_OFFSET))(points);
		}

		static ::Dest::Math::AAB3 CreateFromPoints_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::AAB3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CREATEFROMPOINTS_1_OFFSET))(points);
		}

		static ::Dest::Math::AAB3 CreateFromPoints_2(::Il2CppArray<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::AAB3(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CREATEFROMPOINTS_2_OFFSET))(points);
		}

		::System::Void CalcCenterExtents(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& extents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CALCCENTEREXTENTS_OFFSET))(this, center, extents);
		}

		::System::Void CalcVertices(::UnityEngine::Vector3& vertex0, ::UnityEngine::Vector3& vertex1, ::UnityEngine::Vector3& vertex2, ::UnityEngine::Vector3& vertex3, ::UnityEngine::Vector3& vertex4, ::UnityEngine::Vector3& vertex5, ::UnityEngine::Vector3& vertex6, ::UnityEngine::Vector3& vertex7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CALCVERTICES_OFFSET))(this, vertex0, vertex1, vertex2, vertex3, vertex4, vertex5, vertex6, vertex7);
		}

		::Il2CppArray<::UnityEngine::Vector3>* CalcVertices_1()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CALCVERTICES_1_OFFSET))(this);
		}

		::System::Void CalcVertices_2(::Il2CppArray<::UnityEngine::Vector3>* array)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CALCVERTICES_2_OFFSET))(this, array);
		}

		::System::Single CalcVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CALCVOLUME_OFFSET))(this);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_PROJECT_OFFSET))(this, point);
		}

		::System::Boolean Contains(::UnityEngine::Vector3& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CONTAINS_OFFSET))(this, point);
		}

		::System::Boolean Contains_1(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_CONTAINS_1_OFFSET))(this, point);
		}

		::System::Void Include(::UnityEngine::Vector3& point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_INCLUDE_OFFSET))(this, point);
		}

		::System::Void Include_1(::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_INCLUDE_1_OFFSET))(this, point);
		}

		::System::Void Include_2(::Dest::Math::AAB3& box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_INCLUDE_2_OFFSET))(this, box);
		}

		::System::Void Include_3(::Dest::Math::AAB3 box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::AAB3))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_INCLUDE_3_OFFSET))(this, box);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_AAB3_TOSTRING_OFFSET))(this);
		}
	};
}
