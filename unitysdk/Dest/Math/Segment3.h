#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_SEGMENT3_CALCCENTERDIRECTIONEXTENT_OFFSET UNITYSDK_OFFSET(0x9100B0)
#define DEST_MATH_SEGMENT3_CALCENDPOINTS_OFFSET UNITYSDK_OFFSET(0x910170)
#define DEST_MATH_SEGMENT3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0x910220)
#define DEST_MATH_SEGMENT3_EVAL_OFFSET UNITYSDK_OFFSET(0x9101D0)
#define DEST_MATH_SEGMENT3_PROJECT_OFFSET UNITYSDK_OFFSET(0x910260)
#define DEST_MATH_SEGMENT3_SETCENTERDIRECTIONEXTENT_OFFSET UNITYSDK_OFFSET(0x910040)
#define DEST_MATH_SEGMENT3_SETENDPOINTS_OFFSET UNITYSDK_OFFSET(0x90FF60)
#define DEST_MATH_SEGMENT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9102C0)
#define DEST_MATH_SEGMENT3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x90FD80)
#define DEST_MATH_SEGMENT3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x90FE70)
#define DEST_MATH_SEGMENT3__CTOR_3_OFFSET UNITYSDK_OFFSET(0x90FEE0)
#define DEST_MATH_SEGMENT3__CTOR_OFFSET UNITYSDK_OFFSET(0x90FCA0)

namespace Dest::Math
{
	inline static constexpr unsigned int Segment3_TypeDefinitionIndex = 33219;

	struct alignas(4) Segment3
	{
		::UnityEngine::Vector3 P0; // 0x10
		::UnityEngine::Vector3 P1; // 0x1C
		::UnityEngine::Vector3 Center; // 0x28
		::UnityEngine::Vector3 Direction; // 0x34
		::System::Single Extent; // 0x40

		::System::Void _ctor(::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3__CTOR_OFFSET))(this, p0, p1);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3__CTOR_1_OFFSET))(this, p0, p1);
		}

		::System::Void _ctor_2(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& direction, ::System::Single extent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3__CTOR_2_OFFSET))(this, center, direction, extent);
		}

		::System::Void _ctor_3(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 direction, ::System::Single extent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3__CTOR_3_OFFSET))(this, center, direction, extent);
		}

		::System::Void SetEndpoints(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3_SETENDPOINTS_OFFSET))(this, p0, p1);
		}

		::System::Void SetCenterDirectionExtent(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 direction, ::System::Single extent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3_SETCENTERDIRECTIONEXTENT_OFFSET))(this, center, direction, extent);
		}

		::System::Void CalcCenterDirectionExtent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3_CALCCENTERDIRECTIONEXTENT_OFFSET))(this);
		}

		::System::Void CalcEndPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3_CALCENDPOINTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 Eval(::System::Single s)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3_EVAL_OFFSET))(this, s);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3_PROJECT_OFFSET))(this, point);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SEGMENT3_TOSTRING_OFFSET))(this);
		}
	};
}
