#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPoolInstance_1.h"

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolInstanceWithSlowGenericNew_1_TypeDefinitionIndex = 8025;

	template <typename T>
	class ObjectPoolInstanceWithSlowGenericNew_1 : public ::Foundation::ObjectPoolInstance_1<T>
	{
	public:
	};
}
