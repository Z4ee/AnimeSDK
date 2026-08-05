#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCSharpEvent_0_1_TypeDefinitionIndex = 30510;

	template <typename T>
	class CheckCSharpEvent_0_1 : public ::System::Object
	{
	public:
		::System::Type* targetType; // 0x0
		::System::String* eventName; // 0x0
	};
}
