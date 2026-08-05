#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_BOX3_CALCVERTICES_1_OFFSET UNITYSDK_OFFSET(0xA80D50)
#define DEST_MATH_BOX3_CALCVERTICES_2_OFFSET UNITYSDK_OFFSET(0xA80D60)
#define DEST_MATH_BOX3_CALCVERTICES_OFFSET UNITYSDK_OFFSET(0xA80D40)
#define DEST_MATH_BOX3_CALCVOLUME_OFFSET UNITYSDK_OFFSET(0xA80D70)
#define DEST_MATH_BOX3_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xA80E40)
#define DEST_MATH_BOX3_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA80E30)
#define DEST_MATH_BOX3_CREATEFROMPOINTS_OFFSET UNITYSDK_OFFSET(0x1EE8BFE0)
#define DEST_MATH_BOX3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xA80D90)
#define DEST_MATH_BOX3_GETAXIS_OFFSET UNITYSDK_OFFSET(0xA80CB0)
#define DEST_MATH_BOX3_INCLUDE_1_OFFSET UNITYSDK_OFFSET(0xA80E80)
#define DEST_MATH_BOX3_INCLUDE_OFFSET UNITYSDK_OFFSET(0xA80E70)
#define DEST_MATH_BOX3_PROJECT_OFFSET UNITYSDK_OFFSET(0xA80DD0)
#define DEST_MATH_BOX3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA80EC0)
#define DEST_MATH_BOX3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7DAFF0)
#define DEST_MATH_BOX3__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA80AB0)
#define DEST_MATH_BOX3__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA80BA0)
#define DEST_MATH_BOX3__CTOR_OFFSET UNITYSDK_OFFSET(0xA80A50)

namespace Dest::Math
{
	inline static constexpr unsigned int Box3_TypeDefinitionIndex = 35432;

	struct alignas(4) Box3
	{
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Axis0; // 0x1C
		::UnityEngine::Vector3 Axis1; // 0x28
		::UnityEngine::Vector3 Axis2; // 0x34
		::UnityEngine::Vector3 Extents; // 0x40

		::System::Void _ctor(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& axis0, ::UnityEngine::Vector3& axis1, ::UnityEngine::Vector3& axis2, ::UnityEngine::Vector3& extents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3__CTOR_OFFSET))(this, center, axis0, axis1, axis2, extents);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 axis0, ::UnityEngine::Vector3 axis1, ::UnityEngine::Vector3 axis2, ::UnityEngine::Vector3 extents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3__CTOR_1_OFFSET))(this, center, axis0, axis1, axis2, extents);
		}

		/*
		::System::Void _ctor_2(::Dest::Math::AAB3& box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3__CTOR_2_OFFSET))(this, box);
		}
		*/

		/*
		::System::Void _ctor_3(::Dest::Math::AAB3 box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::AAB3))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3__CTOR_3_OFFSET))(this, box);
		}
		*/

		static ::Dest::Math::Box3 CreateFromPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::Box3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_CREATEFROMPOINTS_OFFSET))(points);
		}

		::UnityEngine::Vector3 GetAxis(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_GETAXIS_OFFSET))(this, index);
		}

		::System::Void CalcVertices(::UnityEngine::Vector3& vertex0, ::UnityEngine::Vector3& vertex1, ::UnityEngine::Vector3& vertex2, ::UnityEngine::Vector3& vertex3, ::UnityEngine::Vector3& vertex4, ::UnityEngine::Vector3& vertex5, ::UnityEngine::Vector3& vertex6, ::UnityEngine::Vector3& vertex7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_CALCVERTICES_OFFSET))(this, vertex0, vertex1, vertex2, vertex3, vertex4, vertex5, vertex6, vertex7);
		}

		::Il2CppArray<::UnityEngine::Vector3>* CalcVertices_1()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_CALCVERTICES_1_OFFSET))(this);
		}

		::System::Void CalcVertices_2(::Il2CppArray<::UnityEngine::Vector3>* array)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_CALCVERTICES_2_OFFSET))(this, array);
		}

		::System::Single CalcVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_CALCVOLUME_OFFSET))(this);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_PROJECT_OFFSET))(this, point);
		}

		::System::Boolean Contains(::UnityEngine::Vector3& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_CONTAINS_OFFSET))(this, point);
		}

		::System::Boolean Contains_1(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_CONTAINS_1_OFFSET))(this, point);
		}

		::System::Void Include(::Dest::Math::Box3& box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_INCLUDE_OFFSET))(this, box);
		}

		::System::Void Include_1(::Dest::Math::Box3 box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Box3))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_INCLUDE_1_OFFSET))(this, box);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_BOX3_TOSTRING_OFFSET))(this);
		}
	};
}
