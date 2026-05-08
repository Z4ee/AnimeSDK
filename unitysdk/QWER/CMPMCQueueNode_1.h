#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T> class CMPMCQueueNode_1; }
namespace QWER { template <typename T> class CMPMCQueue_1; }

namespace QWER
{
	inline static constexpr unsigned int CMPMCQueueNode_1_TypeDefinitionIndex = 8571;

	template <typename T>
	class CMPMCQueueNode_1 : public ::System::Object
	{
	public:
		::QWER::CMPMCQueue_1<T>* m_oQueue; // 0x0
		::QWER::CMPMCQueueNode_1<T>* m_oNext; // 0x0
		T _Data_k__BackingField; // 0x0
	};
}
