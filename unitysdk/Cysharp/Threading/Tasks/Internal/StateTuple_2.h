#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StateTuple_2_TypeDefinitionIndex = 32103;

	template <typename T1, typename T2>
	class StateTuple_2 : public ::System::Object
	{
	public:
		T1 Item1; // 0x0
		T2 Item2; // 0x0
	};
}
