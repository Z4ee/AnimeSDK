#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledListForClass_1_Comparer_TypeDefinitionIndex = 5095;

	template <typename T>
	class PooledListForClass_1_Comparer : public ::System::Object
	{
	public:
		::System::Func_3<T, T, ::System::Int32>* _comparison; // 0x0
	};
}
