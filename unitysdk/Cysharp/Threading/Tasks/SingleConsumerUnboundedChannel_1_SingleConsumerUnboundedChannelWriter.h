#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/ChannelWriter_1.h"

namespace Cysharp::Threading::Tasks { template <typename T> class SingleConsumerUnboundedChannel_1; }
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter_TypeDefinitionIndex = 42562;

	template <typename T>
	class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter : public ::Cysharp::Threading::Tasks::ChannelWriter_1<T>
	{
	public:
		::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>* parent; // 0x0
	};
}
