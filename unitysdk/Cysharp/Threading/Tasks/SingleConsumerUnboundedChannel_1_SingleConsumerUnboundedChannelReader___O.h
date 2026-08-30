#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader___O_TypeDefinitionIndex = 42566;

	template <typename T>
	class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet__0___CancellationCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader___O_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
