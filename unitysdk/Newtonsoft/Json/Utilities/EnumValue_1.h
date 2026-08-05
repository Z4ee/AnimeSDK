#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int EnumValue_1_TypeDefinitionIndex = 7059;

	template <typename T>
	class EnumValue_1 : public ::System::Object
	{
	public:
		::System::String* _name; // 0x0
		T _value; // 0x0
	};
}
