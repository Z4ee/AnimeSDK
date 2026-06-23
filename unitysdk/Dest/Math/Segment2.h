#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define DEST_MATH_SEGMENT2_CALCCENTERDIRECTIONEXTENT_OFFSET UNITYSDK_OFFSET(0x9BAAD0)
#define DEST_MATH_SEGMENT2_CALCENDPOINTS_OFFSET UNITYSDK_OFFSET(0x9BABB0)
#define DEST_MATH_SEGMENT2_DISTANCETO_OFFSET UNITYSDK_OFFSET(0x9BAC40)
#define DEST_MATH_SEGMENT2_EVAL_OFFSET UNITYSDK_OFFSET(0x9BAC00)
#define DEST_MATH_SEGMENT2_PROJECT_OFFSET UNITYSDK_OFFSET(0x9BADA0)
#define DEST_MATH_SEGMENT2_SETCENTERDIRECTIONEXTENT_OFFSET UNITYSDK_OFFSET(0x9BAA70)
#define DEST_MATH_SEGMENT2_SETENDPOINTS_OFFSET UNITYSDK_OFFSET(0x9BA920)
#define DEST_MATH_SEGMENT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BAE90)
#define DEST_MATH_SEGMENT2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9BA920)
#define DEST_MATH_SEGMENT2__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9BAA10)
#define DEST_MATH_SEGMENT2__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9BAA70)
#define DEST_MATH_SEGMENT2__CTOR_OFFSET UNITYSDK_OFFSET(0x9BA830)

namespace Dest::Math
{
	inline static constexpr unsigned int Segment2_TypeDefinitionIndex = 34770;

	struct alignas(4) Segment2
	{
		::UnityEngine::Vector2 P0; // 0x10
		::UnityEngine::Vector2 P1; // 0x18
		::UnityEngine::Vector2 Center; // 0x20
		::UnityEngine::Vector2 Direction; // 0x28
		::System::Single Extent; // 0x30

		::System::Void _ctor(::UnityEngine::Vector2& p0, ::UnityEngine::Vector2& p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2__CTOR_OFFSET))(this, p0, p1);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2__CTOR_1_OFFSET))(this, p0, p1);
		}

		::System::Void _ctor_2(::UnityEngine::Vector2& center, ::UnityEngine::Vector2& direction, ::System::Single extent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2__CTOR_2_OFFSET))(this, center, direction, extent);
		}

		::System::Void _ctor_3(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 direction, ::System::Single extent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2__CTOR_3_OFFSET))(this, center, direction, extent);
		}

		::System::Void SetEndpoints(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2_SETENDPOINTS_OFFSET))(this, p0, p1);
		}

		::System::Void SetCenterDirectionExtent(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 direction, ::System::Single extent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2_SETCENTERDIRECTIONEXTENT_OFFSET))(this, center, direction, extent);
		}

		::System::Void CalcCenterDirectionExtent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2_CALCCENTERDIRECTIONEXTENT_OFFSET))(this);
		}

		::System::Void CalcEndPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2_CALCENDPOINTS_OFFSET))(this);
		}

		::UnityEngine::Vector2 Eval(::System::Single s)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2_EVAL_OFFSET))(this, s);
		}

		::System::Single DistanceTo(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 Project(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2_PROJECT_OFFSET))(this, point);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT2_TOSTRING_OFFSET))(this);
		}
	};
}
