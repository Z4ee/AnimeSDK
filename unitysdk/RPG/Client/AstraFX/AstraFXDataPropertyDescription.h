#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataPropertyType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataPropertyDescription_TypeDefinitionIndex = 68772;

	struct alignas(8) AstraFXDataPropertyDescription
	{
		::System::String* Property; // 0x10
		::RPG::Client::AstraFX::AstraFXDataPropertyType Type; // 0x18
		::System::Boolean Mapping; // 0x1C
		::System::String* MappingProperty; // 0x20
	};
}
