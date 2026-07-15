#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/System/ValueType.h"

#define RPG_VECTOR4CURVEFRAME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3AFEB80)
#define RPG_VECTOR4CURVEFRAME_GETTIME_OFFSET UNITYSDK_OFFSET(0x167F50)
#define RPG_VECTOR4CURVEFRAME_GETVALUE_OFFSET UNITYSDK_OFFSET(0x3926CF0)
#define RPG_VECTOR4CURVEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x3AFEBE0)

namespace RPG
{
	inline static constexpr unsigned int Vector4CurveFrame_TypeDefinitionIndex = 6719;

	struct alignas(4) Vector4CurveFrame
	{
		::System::Single TimePoint; // 0x10
		::Struct_2_331ACDD60B60D2E3 Value; // 0x14

		::System::Void _ctor(::System::Single a1, ::Struct_2_331ACDD60B60D2E3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_331ACDD60B60D2E3&))((::PBYTE)hIl2Cpp + RPG_VECTOR4CURVEFRAME__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VECTOR4CURVEFRAME_GETTIME_OFFSET))(this);
		}

		::Struct_2_331ACDD60B60D2E3 GetValue()
		{
			return ((::Struct_2_331ACDD60B60D2E3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VECTOR4CURVEFRAME_GETVALUE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Vector4CurveFrame a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + RPG_VECTOR4CURVEFRAME_COMPARETO_OFFSET))(this, a1);
		}
	};
}
