#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T1, typename T2> class CSkipListNode_2; }

namespace QWER
{
	inline static constexpr unsigned int CSkipListLevel_2_TypeDefinitionIndex = 8815;

	template <typename T, typename U>
	class CSkipListLevel_2 : public ::System::Object
	{
	public:
		::QWER::CSkipListNode_2<T, U>* _Next_k__BackingField; // 0x0
		::QWER::CSkipListNode_2<T, U>* _Previous_k__BackingField; // 0x0
		::System::Int32 _Span_k__BackingField; // 0x0
	};
}
