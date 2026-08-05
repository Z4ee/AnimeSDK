#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DEST_MATH_RAY3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0xAC44B0)
#define DEST_MATH_RAY3_EVAL_OFFSET UNITYSDK_OFFSET(0xA64530)
#define DEST_MATH_RAY3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1FA4AE50)
#define DEST_MATH_RAY3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FA4ADD0)
#define DEST_MATH_RAY3_PROJECT_OFFSET UNITYSDK_OFFSET(0xAC44F0)
#define DEST_MATH_RAY3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAC4550)
#define DEST_MATH_RAY3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3975A0)
#define DEST_MATH_RAY3__CTOR_OFFSET UNITYSDK_OFFSET(0x97AF70)

namespace Dest::Math
{
	inline static constexpr unsigned int Ray3_TypeDefinitionIndex = 35439;

	struct alignas(4) Ray3
	{
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Direction; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_RAY3__CTOR_OFFSET))(this, center, direction);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_RAY3__CTOR_1_OFFSET))(this, center, direction);
		}

		/*
		static ::UnityEngine::Ray op_Implicit(::Dest::Math::Ray3 value)
		{
			return ((::UnityEngine::Ray(*)(::Dest::Math::Ray3))((::PBYTE)hIl2Cpp + DEST_MATH_RAY3_OP_IMPLICIT_OFFSET))(value);
		}
		*/

		/*
		static ::Dest::Math::Ray3 op_Implicit_1(::UnityEngine::Ray value)
		{
			return ((::Dest::Math::Ray3(*)(::UnityEngine::Ray))((::PBYTE)hIl2Cpp + DEST_MATH_RAY3_OP_IMPLICIT_1_OFFSET))(value);
		}
		*/

		::UnityEngine::Vector3 Eval(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAY3_EVAL_OFFSET))(this, t);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_RAY3_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_RAY3_PROJECT_OFFSET))(this, point);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAY3_TOSTRING_OFFSET))(this);
		}
	};
}
