#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_590214B1C850A70F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int InteractantTagListEntry_TypeDefinitionIndex = 82305;

	struct alignas(8) InteractantTagListEntry
	{
		::Enum_3_590214B1C850A70F Interactant; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Tags; // 0x18
	};
}
