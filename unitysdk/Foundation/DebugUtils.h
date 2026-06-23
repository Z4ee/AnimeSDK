#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_DEBUGUTILS_ENSURE_OFFSET UNITYSDK_OFFSET(0x1DC992D0)

namespace Foundation
{
	inline static constexpr unsigned int DebugUtils_TypeDefinitionIndex = 8475;

	class DebugUtils : public ::System::Object
	{
	public:
		static ::System::Boolean Ensure(::System::Boolean condition, ::System::String* errorMessage)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGUTILS_ENSURE_OFFSET))(condition, errorMessage);
		}
	};
}
