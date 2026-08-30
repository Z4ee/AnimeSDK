#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T1, typename T2> class Channel_2; }
namespace Cysharp::Threading::Tasks { template <typename T> class ChannelReader_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class ChannelWriter_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int Channel_2_TypeDefinitionIndex = 42555;

	template <typename TWrite, typename TRead>
	class Channel_2 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::ChannelReader_1<TRead>* _Reader_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>* _Writer_k__BackingField; // 0x0
	};
}
