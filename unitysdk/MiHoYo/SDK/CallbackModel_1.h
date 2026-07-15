#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CallbackModel_1_TypeDefinitionIndex = 7822;

	template <typename T>
	class CallbackModel_1 : public ::System::Object
	{
	public:
		::System::Int32 ret; // 0x0
		::System::String* msg; // 0x0
		T data; // 0x0
	};
}
