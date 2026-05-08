#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define DEST_MATH_RAY2_DISTANCETO_OFFSET UNITYSDK_OFFSET(0x9D40E0)
#define DEST_MATH_RAY2_EVAL_OFFSET UNITYSDK_OFFSET(0x9D40B0)
#define DEST_MATH_RAY2_PROJECT_OFFSET UNITYSDK_OFFSET(0x9D4240)
#define DEST_MATH_RAY2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D4330)
#define DEST_MATH_RAY2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2FED90)
#define DEST_MATH_RAY2__CTOR_OFFSET UNITYSDK_OFFSET(0x54B460)

namespace Dest::Math
{
	inline static constexpr unsigned int Ray2_TypeDefinitionIndex = 33206;

	struct alignas(4) Ray2
	{
		::UnityEngine::Vector2 Center; // 0x10
		::UnityEngine::Vector2 Direction; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2& center, ::UnityEngine::Vector2& direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_RAY2__CTOR_OFFSET))(this, center, direction);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_RAY2__CTOR_1_OFFSET))(this, center, direction);
		}

		::UnityEngine::Vector2 Eval(::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAY2_EVAL_OFFSET))(this, t);
		}

		::System::Single DistanceTo(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_RAY2_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 Project(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_RAY2_PROJECT_OFFSET))(this, point);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAY2_TOSTRING_OFFSET))(this);
		}
	};
}
