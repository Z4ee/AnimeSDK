#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int Optional_1_TypeDefinitionIndex = 28732;

	template <typename T>
	class Optional_1 : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x0
		T Value; // 0x0
	};
}
