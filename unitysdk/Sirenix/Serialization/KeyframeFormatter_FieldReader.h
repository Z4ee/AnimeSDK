#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization { class KeyframeFormatter_ReadFieldAction; }
namespace System { class String; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int KeyframeFormatter_FieldReader_TypeDefinitionIndex = 7588;

	struct alignas(8) KeyframeFormatter_FieldReader
	{
		::System::String* Name; // 0x10
		::Sirenix::Serialization::KeyframeFormatter_ReadFieldAction* Read; // 0x18
	};
}
