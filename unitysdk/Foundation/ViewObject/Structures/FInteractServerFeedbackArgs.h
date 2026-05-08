#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FInteractServerFeedbackArgs_TypeDefinitionIndex = 82856;

	struct alignas(8) FInteractServerFeedbackArgs
	{
		::System::String* interactName; // 0x10
		::System::Boolean isSuccess; // 0x18
	};
}
