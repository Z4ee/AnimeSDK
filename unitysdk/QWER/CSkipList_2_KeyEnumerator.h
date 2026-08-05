#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T1, typename T2> class CSkipList_2; }
namespace QWER { template <typename T1, typename T2> class CSkipList_2_KeyValueEnumerator; }

namespace QWER
{
	inline static constexpr unsigned int CSkipList_2_KeyEnumerator_TypeDefinitionIndex = 8906;

	template <typename T, typename U>
	class CSkipList_2_KeyEnumerator : public ::System::Object
	{
	public:
		::QWER::CSkipList_2_KeyValueEnumerator<T, U>* m_oEnumerator; // 0x0
	};
}
