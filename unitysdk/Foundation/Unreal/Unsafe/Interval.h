#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Unsafe/IntervalBound.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_UNSAFE_INTERVAL_INCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1E826CD0)
#define FOUNDATION_UNREAL_UNSAFE_INTERVAL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E826FA0)
#define FOUNDATION_UNREAL_UNSAFE_INTERVAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E826D50)
#define FOUNDATION_UNREAL_UNSAFE_INTERVAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E827200)
#define FOUNDATION_UNREAL_UNSAFE_INTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace Foundation::Unreal::Unsafe
{
	inline static constexpr unsigned int Interval_TypeDefinitionIndex = 8625;

	struct alignas(4) Interval
	{
		static ::Foundation::Unreal::Unsafe::Interval* StaticGet_All()
		{
			return (::Foundation::Unreal::Unsafe::Interval*)Il2CppClass::FromTypeDefinitionIndex(Interval_TypeDefinitionIndex)->GetStaticField(0x3C10);
		}
		static ::Foundation::Unreal::Unsafe::Interval* StaticGet_Empty()
		{
			return (::Foundation::Unreal::Unsafe::Interval*)Il2CppClass::FromTypeDefinitionIndex(Interval_TypeDefinitionIndex)->GetStaticField(0x3C20);
		}
		::Foundation::Unreal::Unsafe::IntervalBound _lowerBound; // 0x10
		::Foundation::Unreal::Unsafe::IntervalBound _upperBound; // 0x18

		::System::Void _ctor(::Foundation::Unreal::Unsafe::IntervalBound lowerBound, ::Foundation::Unreal::Unsafe::IntervalBound upperBound)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::Unsafe::IntervalBound, ::Foundation::Unreal::Unsafe::IntervalBound))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVAL__CTOR_OFFSET))(this, lowerBound, upperBound);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVAL__CCTOR_OFFSET))();
		}

		static ::Foundation::Unreal::Unsafe::Interval Inclusive(::System::Single min, ::System::Single max)
		{
			return ((::Foundation::Unreal::Unsafe::Interval(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVAL_INCLUSIVE_OFFSET))(min, max);
		}

		/*
		static ::Foundation::Unreal::Interval_1<::System::Single> op_Implicit(::Foundation::Unreal::Unsafe::Interval interval)
		{
			return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::Foundation::Unreal::Unsafe::Interval))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVAL_OP_IMPLICIT_OFFSET))(interval);
		}
		*/

		/*
		static ::Foundation::Unreal::Unsafe::Interval op_Implicit_1(::Foundation::Unreal::Interval_1<::System::Single> interval)
		{
			return ((::Foundation::Unreal::Unsafe::Interval(*)(::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVAL_OP_IMPLICIT_1_OFFSET))(interval);
		}
		*/
	};
}
