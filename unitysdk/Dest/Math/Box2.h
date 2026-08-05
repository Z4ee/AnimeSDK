#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_BOX2_CALCAREA_OFFSET UNITYSDK_OFFSET(0xA80940)
#define DEST_MATH_BOX2_CALCVERTICES_1_OFFSET UNITYSDK_OFFSET(0xA80920)
#define DEST_MATH_BOX2_CALCVERTICES_2_OFFSET UNITYSDK_OFFSET(0xA80930)
#define DEST_MATH_BOX2_CALCVERTICES_OFFSET UNITYSDK_OFFSET(0xA80830)
#define DEST_MATH_BOX2_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xA809F0)
#define DEST_MATH_BOX2_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA809E0)
#define DEST_MATH_BOX2_CREATEFROMPOINTS_OFFSET UNITYSDK_OFFSET(0x1EE8A2A0)
#define DEST_MATH_BOX2_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xA80960)
#define DEST_MATH_BOX2_GETAXIS_OFFSET UNITYSDK_OFFSET(0xA807C0)
#define DEST_MATH_BOX2_INCLUDE_1_OFFSET UNITYSDK_OFFSET(0xA80A10)
#define DEST_MATH_BOX2_INCLUDE_OFFSET UNITYSDK_OFFSET(0xA80A00)
#define DEST_MATH_BOX2_PROJECT_OFFSET UNITYSDK_OFFSET(0xA809A0)
#define DEST_MATH_BOX2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA80A40)
#define DEST_MATH_BOX2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D1930)
#define DEST_MATH_BOX2__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA80690)
#define DEST_MATH_BOX2__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA80720)
#define DEST_MATH_BOX2__CTOR_OFFSET UNITYSDK_OFFSET(0xA80660)

namespace Dest::Math
{
	inline static constexpr unsigned int Box2_TypeDefinitionIndex = 35423;

	struct alignas(4) Box2
	{
		::UnityEngine::Vector2 Center; // 0x10
		::UnityEngine::Vector2 Axis0; // 0x18
		::UnityEngine::Vector2 Axis1; // 0x20
		::UnityEngine::Vector2 Extents; // 0x28

		::System::Void _ctor(::UnityEngine::Vector2& center, ::UnityEngine::Vector2& axis0, ::UnityEngine::Vector2& axis1, ::UnityEngine::Vector2& extents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2__CTOR_OFFSET))(this, center, axis0, axis1, extents);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 axis0, ::UnityEngine::Vector2 axis1, ::UnityEngine::Vector2 extents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2__CTOR_1_OFFSET))(this, center, axis0, axis1, extents);
		}

		/*
		::System::Void _ctor_2(::Dest::Math::AAB2& box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2__CTOR_2_OFFSET))(this, box);
		}
		*/

		/*
		::System::Void _ctor_3(::Dest::Math::AAB2 box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::AAB2))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2__CTOR_3_OFFSET))(this, box);
		}
		*/

		static ::Dest::Math::Box2 CreateFromPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::Dest::Math::Box2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_CREATEFROMPOINTS_OFFSET))(points);
		}

		::UnityEngine::Vector2 GetAxis(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_GETAXIS_OFFSET))(this, index);
		}

		::System::Void CalcVertices(::UnityEngine::Vector2& vertex0, ::UnityEngine::Vector2& vertex1, ::UnityEngine::Vector2& vertex2, ::UnityEngine::Vector2& vertex3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_CALCVERTICES_OFFSET))(this, vertex0, vertex1, vertex2, vertex3);
		}

		::Il2CppArray<::UnityEngine::Vector2>* CalcVertices_1()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_CALCVERTICES_1_OFFSET))(this);
		}

		::System::Void CalcVertices_2(::Il2CppArray<::UnityEngine::Vector2>* array)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_CALCVERTICES_2_OFFSET))(this, array);
		}

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_CALCAREA_OFFSET))(this);
		}

		::System::Single DistanceTo(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 Project(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_PROJECT_OFFSET))(this, point);
		}

		::System::Boolean Contains(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_CONTAINS_OFFSET))(this, point);
		}

		::System::Boolean Contains_1(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_CONTAINS_1_OFFSET))(this, point);
		}

		::System::Void Include(::Dest::Math::Box2& box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Box2&))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_INCLUDE_OFFSET))(this, box);
		}

		::System::Void Include_1(::Dest::Math::Box2 box)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Box2))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_INCLUDE_1_OFFSET))(this, box);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_BOX2_TOSTRING_OFFSET))(this);
		}
	};
}
