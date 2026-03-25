#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TAUtils { template <typename T> class CircularBuffer_1; }

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int CircularBuffer_1__GetEnumerator_d__13_TypeDefinitionIndex = 60355;

	template <typename T>
	class CircularBuffer_1__GetEnumerator_d__13 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::RPG::Client::TAUtils::CircularBuffer_1<T>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
