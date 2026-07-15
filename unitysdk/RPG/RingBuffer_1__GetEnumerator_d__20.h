#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class RingBuffer_1; }

namespace RPG
{
	inline static constexpr unsigned int RingBuffer_1__GetEnumerator_d__20_TypeDefinitionIndex = 6779;

	template <typename T>
	class RingBuffer_1__GetEnumerator_d__20 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::RPG::RingBuffer_1<T>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
