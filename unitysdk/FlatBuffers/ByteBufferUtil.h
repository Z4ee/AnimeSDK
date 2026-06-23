#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace FlatBuffers { class ByteBuffer; }

#define FLATBUFFERS_BYTEBUFFERUTIL_CONVERTUTF16TOUTF8_OFFSET UNITYSDK_OFFSET(0x1E212980)
#define FLATBUFFERS_BYTEBUFFERUTIL_GETSIZEPREFIX_OFFSET UNITYSDK_OFFSET(0x1E212960)
#define FLATBUFFERS_BYTEBUFFERUTIL_TRYDATALIST_OFFSET UNITYSDK_OFFSET(0x1E212AD0)

namespace FlatBuffers
{
	inline static constexpr unsigned int ByteBufferUtil_TypeDefinitionIndex = 6725;

	class ByteBufferUtil : public ::System::Object
	{
	public:
		static ::System::Int32 GetSizePrefix(::FlatBuffers::ByteBuffer* bb)
		{
			return ((::System::Int32(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFERUTIL_GETSIZEPREFIX_OFFSET))(bb);
		}

		static ::System::Void ConvertUtf16ToUtf8(::System::ReadOnlySpan_1<::System::Char> utf16Chars, ::System::Span_1<::System::Byte>& utf8Span)
		{
			return ((::System::Void(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Span_1<::System::Byte>&))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFERUTIL_CONVERTUTF16TOUTF8_OFFSET))(utf16Chars, utf8Span);
		}

		static ::System::Boolean TryDataList(::FlatBuffers::Table __p, ::System::Int32 i, ::FlatBuffers::Table& p)
		{
			return ((::System::Boolean(*)(::FlatBuffers::Table, ::System::Int32, ::FlatBuffers::Table&))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFERUTIL_TRYDATALIST_OFFSET))(__p, i, p);
		}
	};
}
