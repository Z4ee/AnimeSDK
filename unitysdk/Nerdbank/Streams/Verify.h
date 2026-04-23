#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NERDBANK_STREAMS_VERIFY_OPERATION_OFFSET UNITYSDK_OFFSET(0x17389850)

namespace Nerdbank::Streams
{
	inline static constexpr unsigned int Verify_TypeDefinitionIndex = 9209;

	class Verify : public ::System::Object
	{
	public:
		static ::System::Void Operation(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_VERIFY_OPERATION_OFFSET))(condition, message);
		}
	};
}
