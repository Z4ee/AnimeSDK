#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/IntervalBoundType.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND_EXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1BFE5F40)
#define FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND_INCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1BFE5F20)
#define FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BFE6050)
#define FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BFE5F60)
#define FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFE6130)

namespace Foundation::Unreal::Unsafe
{
	inline static constexpr unsigned int IntervalBound_TypeDefinitionIndex = 9048;

	struct alignas(4) IntervalBound
	{
		static ::Foundation::Unreal::Unsafe::IntervalBound* StaticGet_Open()
		{
			return (::Foundation::Unreal::Unsafe::IntervalBound*)Il2CppClass::FromTypeDefinitionIndex(IntervalBound_TypeDefinitionIndex)->GetStaticField(0x3DF0);
		}
		::System::Single _value; // 0x10
		::Foundation::Unreal::IntervalBoundType _type; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND__CCTOR_OFFSET))();
		}

		static ::Foundation::Unreal::Unsafe::IntervalBound Inclusive(::System::Single value)
		{
			return ((::Foundation::Unreal::Unsafe::IntervalBound(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND_INCLUSIVE_OFFSET))(value);
		}

		static ::Foundation::Unreal::Unsafe::IntervalBound Exclusive(::System::Single value)
		{
			return ((::Foundation::Unreal::Unsafe::IntervalBound(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND_EXCLUSIVE_OFFSET))(value);
		}

		/*
		static ::Foundation::Unreal::IntervalBound_1<::System::Single> op_Implicit(::Foundation::Unreal::Unsafe::IntervalBound bound)
		{
			return ((::Foundation::Unreal::IntervalBound_1<::System::Single>(*)(::Foundation::Unreal::Unsafe::IntervalBound))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND_OP_IMPLICIT_OFFSET))(bound);
		}
		*/

		/*
		static ::Foundation::Unreal::Unsafe::IntervalBound op_Implicit_1(::Foundation::Unreal::IntervalBound_1<::System::Single> bound)
		{
			return ((::Foundation::Unreal::Unsafe::IntervalBound(*)(::Foundation::Unreal::IntervalBound_1<::System::Single>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_UNSAFE_INTERVALBOUND_OP_IMPLICIT_1_OFFSET))(bound);
		}
		*/
	};
}
