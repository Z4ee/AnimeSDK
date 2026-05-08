#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T> class CMPSCQueueNode_1; }
namespace QWER { template <typename T> class CMPSCQueue_1; }

namespace QWER
{
	inline static constexpr unsigned int CMPSCQueueNode_1_TypeDefinitionIndex = 8573;

	template <typename T>
	class CMPSCQueueNode_1 : public ::System::Object
	{
	public:
		::QWER::CMPSCQueue_1<T>* m_oQueue; // 0x0
		::QWER::CMPSCQueueNode_1<T>* m_oNext; // 0x0
		T _Data_k__BackingField; // 0x0
	};
}
