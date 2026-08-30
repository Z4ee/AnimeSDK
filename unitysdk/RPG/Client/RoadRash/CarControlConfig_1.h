#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int CarControlConfig_1_TypeDefinitionIndex = 75403;

	template <typename T>
	class CarControlConfig_1 : public ::System::Object
	{
	public:
		::System::Boolean SetupConfig; // 0x0
	};
}
