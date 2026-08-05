#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int WeightedRandom_1_TypeDefinitionIndex = 28987;

	template <typename T>
	class WeightedRandom_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* mData; // 0x0
		::System::Int32 mCurrentPosition; // 0x0
		T mCurrentItem; // 0x0
		::System::Int32 _Seed_k__BackingField; // 0x0
		::System::Boolean _RandomizeSeed_k__BackingField; // 0x0
	};
}
