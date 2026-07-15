#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF { template <typename T> class SRList_1; }

namespace SRF
{
	inline static constexpr unsigned int SRList_1__GetEnumerator_d__15_TypeDefinitionIndex = 33924;

	template <typename T>
	class SRList_1__GetEnumerator_d__15 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::SRF::SRList_1<T>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
