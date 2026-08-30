#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Channel_2.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int Channel_1_TypeDefinitionIndex = 42556;

	template <typename T>
	class Channel_1 : public ::Cysharp::Threading::Tasks::Channel_2<T, T>
	{
	public:
	};
}
