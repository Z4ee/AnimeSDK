#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/IntervalBound_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Unreal
{
	inline static constexpr unsigned int Interval_1_TypeDefinitionIndex = 8721;

	template <typename T>
	struct Interval_1
	{
		::Foundation::Unreal::IntervalBound_1<T> _lowerBound; // 0x0
		::Foundation::Unreal::IntervalBound_1<T> _upperBound; // 0x0
		static ::Foundation::Unreal::Interval_1<T>* StaticGet_All()
		{
			return (::Foundation::Unreal::Interval_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Interval_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Foundation::Unreal::Interval_1<T>* StaticGet_Empty()
		{
			return (::Foundation::Unreal::Interval_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Interval_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
