#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG
{
	inline static constexpr unsigned int GCFreeLazy_1_Boxed_TypeDefinitionIndex = 6747;

	template <typename T>
	class GCFreeLazy_1_Boxed : public ::System::Object
	{
	public:
		T m_value; // 0x0
	};
}
