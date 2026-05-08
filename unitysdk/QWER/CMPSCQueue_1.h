#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T> class CMPSCQueueNode_1; }

namespace QWER
{
	inline static constexpr unsigned int CMPSCQueue_1_TypeDefinitionIndex = 8574;

	template <typename T>
	class CMPSCQueue_1 : public ::System::Object
	{
	public:
		::QWER::CMPSCQueueNode_1<T>* m_oHeader; // 0x0
		::QWER::CMPSCQueueNode_1<T>* m_oTail; // 0x0
		::System::Int32 m_dwCount; // 0x0
	};
}
