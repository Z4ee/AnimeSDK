#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckStaticCSharpEvent_1_TypeDefinitionIndex = 27539;

	template <typename T>
	class CheckStaticCSharpEvent_1 : public ::System::Object
	{
	public:
		::System::Type* targetType; // 0x0
		::System::String* eventName; // 0x0
	};
}
