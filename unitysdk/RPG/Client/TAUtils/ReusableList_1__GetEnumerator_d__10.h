#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TAUtils { template <typename T> class ReusableList_1; }

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int ReusableList_1__GetEnumerator_d__10_TypeDefinitionIndex = 70233;

	template <typename T>
	class ReusableList_1__GetEnumerator_d__10 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::RPG::Client::TAUtils::ReusableList_1<T>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
