#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataPropertyDescription.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataNodeDescription_TypeDefinitionIndex = 68771;

	struct alignas(8) AstraFXDataNodeDescription
	{
		::System::String* Node; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::AstraFX::AstraFXDataPropertyDescription>* Data; // 0x18
	};
}
