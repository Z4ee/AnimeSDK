#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_RECTANGLE3_CALCAREA_OFFSET UNITYSDK_OFFSET(0xA9C5D0)
#define DEST_MATH_RECTANGLE3_CALCVERTICES_1_OFFSET UNITYSDK_OFFSET(0xA9C5B0)
#define DEST_MATH_RECTANGLE3_CALCVERTICES_2_OFFSET UNITYSDK_OFFSET(0xA9C5C0)
#define DEST_MATH_RECTANGLE3_CALCVERTICES_OFFSET UNITYSDK_OFFSET(0xA9C4F0)
#define DEST_MATH_RECTANGLE3_CREATEFROMCCWPOINTS_OFFSET UNITYSDK_OFFSET(0x1F27EA10)
#define DEST_MATH_RECTANGLE3_CREATEFROMCWPOINTS_OFFSET UNITYSDK_OFFSET(0x1F27EC80)
#define DEST_MATH_RECTANGLE3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xA9C5F0)
#define DEST_MATH_RECTANGLE3_PROJECT_OFFSET UNITYSDK_OFFSET(0xA9C630)
#define DEST_MATH_RECTANGLE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA9C690)
#define DEST_MATH_RECTANGLE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA9C3E0)
#define DEST_MATH_RECTANGLE3__CTOR_OFFSET UNITYSDK_OFFSET(0xA9C2C0)

namespace Dest::Math
{
	inline static constexpr unsigned int Rectangle3_TypeDefinitionIndex = 35440;

	struct alignas(4) Rectangle3
	{
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Axis0; // 0x1C
		::UnityEngine::Vector3 Axis1; // 0x28
		::UnityEngine::Vector3 Normal; // 0x34
		::UnityEngine::Vector2 Extents; // 0x40

		::System::Void _ctor(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& axis0, ::UnityEngine::Vector3& axis1, ::UnityEngine::Vector2& extents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3__CTOR_OFFSET))(this, center, axis0, axis1, extents);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 axis0, ::UnityEngine::Vector3 axis1, ::UnityEngine::Vector2 extents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3__CTOR_1_OFFSET))(this, center, axis0, axis1, extents);
		}

		static ::Dest::Math::Rectangle3 CreateFromCCWPoints(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
		{
			return ((::Dest::Math::Rectangle3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_CREATEFROMCCWPOINTS_OFFSET))(p0, p1, p2, p3);
		}

		static ::Dest::Math::Rectangle3 CreateFromCWPoints(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
		{
			return ((::Dest::Math::Rectangle3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_CREATEFROMCWPOINTS_OFFSET))(p0, p1, p2, p3);
		}

		::System::Void CalcVertices(::UnityEngine::Vector3& vertex0, ::UnityEngine::Vector3& vertex1, ::UnityEngine::Vector3& vertex2, ::UnityEngine::Vector3& vertex3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_CALCVERTICES_OFFSET))(this, vertex0, vertex1, vertex2, vertex3);
		}

		::Il2CppArray<::UnityEngine::Vector3>* CalcVertices_1()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_CALCVERTICES_1_OFFSET))(this);
		}

		::System::Void CalcVertices_2(::Il2CppArray<::UnityEngine::Vector3>* array)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_CALCVERTICES_2_OFFSET))(this, array);
		}

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_CALCAREA_OFFSET))(this);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_PROJECT_OFFSET))(this, point);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RECTANGLE3_TOSTRING_OFFSET))(this);
		}
	};
}
