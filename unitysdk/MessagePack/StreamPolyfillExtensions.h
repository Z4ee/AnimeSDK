#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System::IO { class Stream; }

#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READ_OFFSET UNITYSDK_OFFSET(0x19859AB0)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITE_OFFSET UNITYSDK_OFFSET(0x19859D50)

namespace MessagePack
{
	inline static constexpr unsigned int StreamPolyfillExtensions_TypeDefinitionIndex = 26981;

	class StreamPolyfillExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 Read(::System::IO::Stream* stream, ::System::Span_1<::System::Byte> buffer)
		{
			return ((::System::Int32(*)(::System::IO::Stream*, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READ_OFFSET))(stream, buffer);
		}

		static ::System::Void Write(::System::IO::Stream* stream, ::System::ReadOnlySpan_1<::System::Byte> buffer)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITE_OFFSET))(stream, buffer);
		}
	};
}
