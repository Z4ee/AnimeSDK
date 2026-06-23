#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T1, typename T2> class CSkipListNode_2; }
namespace QWER { template <typename T1, typename T2> class CSkipList_2; }

namespace QWER
{
	inline static constexpr unsigned int CSkipList_2_KeyValueEnumerator_TypeDefinitionIndex = 8818;

	template <typename T, typename U>
	class CSkipList_2_KeyValueEnumerator : public ::System::Object
	{
	public:
		::QWER::CSkipListNode_2<T, U>* m_oNode; // 0x0
		::QWER::CSkipList_2<T, U>* m_oOwner; // 0x0
	};
}
