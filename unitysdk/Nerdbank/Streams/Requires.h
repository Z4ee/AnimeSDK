#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define NERDBANK_STREAMS_REQUIRES_FAILRANGE_OFFSET UNITYSDK_OFFSET(0x173897B0)
#define NERDBANK_STREAMS_REQUIRES_RANGE_OFFSET UNITYSDK_OFFSET(0x17389790)

namespace Nerdbank::Streams
{
	inline static constexpr unsigned int Requires_TypeDefinitionIndex = 9208;

	class Requires : public ::System::Object
	{
	public:
		static ::System::Void Range(::System::Boolean condition, ::System::String* parameterName, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_REQUIRES_RANGE_OFFSET))(condition, parameterName, message);
		}

		static ::System::Exception* FailRange(::System::String* parameterName, ::System::String* message)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_REQUIRES_FAILRANGE_OFFSET))(parameterName, message);
		}
	};
}
