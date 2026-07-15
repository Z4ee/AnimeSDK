#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"

namespace System { class String; }

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Config_TypeDefinitionIndex = 42724;

	class Config : public ::System::Object
	{
	public:
		// static const ::System::String* LibraryName; // 0x0
		// static const ::System::Runtime::InteropServices::CallingConvention LibraryCallingConvention; // 0x0
	};
}
