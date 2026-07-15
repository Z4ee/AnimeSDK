#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

#define RPG_VECTOR3CURVEFRAME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3AFEB80)
#define RPG_VECTOR3CURVEFRAME_GETTIME_OFFSET UNITYSDK_OFFSET(0x167F50)
#define RPG_VECTOR3CURVEFRAME_GETVALUE_OFFSET UNITYSDK_OFFSET(0x38F4340)
#define RPG_VECTOR3CURVEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x3AFEB60)

namespace RPG
{
	inline static constexpr unsigned int Vector3CurveFrame_TypeDefinitionIndex = 6718;

	struct alignas(4) Vector3CurveFrame
	{
		::System::Single TimePoint; // 0x10
		::RPG::MVector3 Value; // 0x14

		::System::Void _ctor(::System::Single a1, ::RPG::MVector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_VECTOR3CURVEFRAME__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VECTOR3CURVEFRAME_GETTIME_OFFSET))(this);
		}

		::RPG::MVector3 GetValue()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VECTOR3CURVEFRAME_GETVALUE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Vector3CurveFrame a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + RPG_VECTOR3CURVEFRAME_COMPARETO_OFFSET))(this, a1);
		}
	};
}
