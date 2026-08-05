#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsCallbackAction_1_TypeDefinitionIndex = 37946;

	template <typename T>
	class EcsCallbackAction_1 : public ::System::Object
	{
	public:
		T Action; // 0x0
	};
}
