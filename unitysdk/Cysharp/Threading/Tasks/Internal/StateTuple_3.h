#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StateTuple_3_TypeDefinitionIndex = 31485;

	template <typename T1, typename T2, typename T3>
	class StateTuple_3 : public ::System::Object
	{
	public:
		T1 Item1; // 0x0
		T2 Item2; // 0x0
		T3 Item3; // 0x0
	};
}
