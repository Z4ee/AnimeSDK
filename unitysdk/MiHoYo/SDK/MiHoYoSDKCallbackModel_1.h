#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKCallbackModel_1_TypeDefinitionIndex = 44608;

	template <typename T>
	class MiHoYoSDKCallbackModel_1 : public ::System::Object
	{
	public:
		T data; // 0x0
		::System::Int32 ret; // 0x0
		::System::String* msg; // 0x0
	};
}
