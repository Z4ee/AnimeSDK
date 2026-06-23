#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/TextPosition.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class TextReader; }

#define FLEXBUFFERS_TEXTSCANNER_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1D602950)
#define FLEXBUFFERS_TEXTSCANNER_ASSERT_OFFSET UNITYSDK_OFFSET(0x1D602C70)
#define FLEXBUFFERS_TEXTSCANNER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1D602C40)
#define FLEXBUFFERS_TEXTSCANNER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D6039E0)
#define FLEXBUFFERS_TEXTSCANNER_PEEK_OFFSET UNITYSDK_OFFSET(0x1D601770)
#define FLEXBUFFERS_TEXTSCANNER_READLINE_OFFSET UNITYSDK_OFFSET(0x1D6039F0)
#define FLEXBUFFERS_TEXTSCANNER_READ_OFFSET UNITYSDK_OFFSET(0x1D602B40)
#define FLEXBUFFERS_TEXTSCANNER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1D601410)
#define FLEXBUFFERS_TEXTSCANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D600610)

namespace FlexBuffers
{
	inline static constexpr unsigned int TextScanner_TypeDefinitionIndex = 6757;

	class TextScanner : public ::System::Object
	{
	public:
		::System::IO::TextReader* _reader; // 0x10
		::FlexBuffers::TextPosition _position; // 0x18

		::System::Void _ctor(::System::IO::TextReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER__CTOR_OFFSET))(this, reader);
		}

		::FlexBuffers::TextPosition get_Position()
		{
			return ((::FlexBuffers::TextPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER_GET_POSITION_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER_GET_CANREAD_OFFSET))(this);
		}

		::System::Char Peek()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER_PEEK_OFFSET))(this);
		}

		::System::Char Read()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER_READ_OFFSET))(this);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER_READLINE_OFFSET))(this);
		}

		::System::Void SkipWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER_SKIPWHITESPACE_OFFSET))(this);
		}

		::System::Void Assert(::System::Char next)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER_ASSERT_OFFSET))(this, next);
		}

		::System::Void Assert_1(::System::String* next)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTSCANNER_ASSERT_1_OFFSET))(this, next);
		}
	};
}
