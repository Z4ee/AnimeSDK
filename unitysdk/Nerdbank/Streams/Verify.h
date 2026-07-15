#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NERDBANK_STREAMS_VERIFY_OPERATION_OFFSET UNITYSDK_OFFSET(0x1B946A80)

namespace Nerdbank::Streams
{
	inline static constexpr unsigned int Verify_TypeDefinitionIndex = 7118;

	class Verify : public ::System::Object
	{
	public:
		static ::System::Void Operation(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_VERIFY_OPERATION_OFFSET))(a1, a2);
		}
	};
}
