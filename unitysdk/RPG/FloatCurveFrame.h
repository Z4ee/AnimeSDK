#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_FLOATCURVEFRAME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3862580)
#define RPG_FLOATCURVEFRAME_GETTIME_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define RPG_FLOATCURVEFRAME_GETVALUE_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define RPG_FLOATCURVEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x2CFA0)

namespace RPG
{
	inline static constexpr unsigned int FloatCurveFrame_TypeDefinitionIndex = 6712;

	struct alignas(4) FloatCurveFrame
	{
		::System::Single TimePoint; // 0x10
		::System::Single Value; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_FLOATCURVEFRAME__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_FLOATCURVEFRAME_GETTIME_OFFSET))(this);
		}

		::System::Single GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_FLOATCURVEFRAME_GETVALUE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::FloatCurveFrame a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + RPG_FLOATCURVEFRAME_COMPARETO_OFFSET))(this, a1);
		}
	};
}
