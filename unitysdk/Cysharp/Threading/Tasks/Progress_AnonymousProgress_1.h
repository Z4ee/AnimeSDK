#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int Progress_AnonymousProgress_1_TypeDefinitionIndex = 42632;

	template <typename T>
	class Progress_AnonymousProgress_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* action; // 0x0
	};
}
