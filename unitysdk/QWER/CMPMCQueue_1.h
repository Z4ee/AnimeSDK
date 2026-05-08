#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T> class CMPMCQueueNode_1; }

namespace QWER
{
	inline static constexpr unsigned int CMPMCQueue_1_TypeDefinitionIndex = 8572;

	template <typename T>
	class CMPMCQueue_1 : public ::System::Object
	{
	public:
		::QWER::CMPMCQueueNode_1<T>* m_oHeader; // 0x0
		::QWER::CMPMCQueueNode_1<T>* m_oTail; // 0x0
		::System::Int32 m_dwCount; // 0x0
	};
}
