#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Share { template <typename T> class CWeightListNode_1; }

namespace Share
{
	inline static constexpr unsigned int CWeightListLevel_1_TypeDefinitionIndex = 12994;

	template <typename T>
	class CWeightListLevel_1 : public ::System::Object
	{
	public:
		::Share::CWeightListNode_1<T>* _Next_k__BackingField; // 0x0
		::Share::CWeightListNode_1<T>* _Previous_k__BackingField; // 0x0
		::System::Int32 _Span_k__BackingField; // 0x0
	};
}
