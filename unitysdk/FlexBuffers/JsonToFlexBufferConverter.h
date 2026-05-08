#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlexBuffer_Options.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

namespace FlexBuffers { class FlexBuffer; }
namespace FlexBuffers { class TextScanner; }
namespace System { class String; }
namespace System::IO { class TextReader; }
namespace System::Text { class StringBuilder; }

#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_CONVERTFILE_OFFSET UNITYSDK_OFFSET(0x1B219BE0)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x1B219CF0)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x1B2198A0)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_ENSUREVALIDFLXVALUE_OFFSET UNITYSDK_OFFSET(0x1B219110)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_ENSUREVALIDJSON_OFFSET UNITYSDK_OFFSET(0x1B2190B0)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READARRAY_OFFSET UNITYSDK_OFFSET(0x1B21A9D0)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B21AFA0)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READDIGITS_OFFSET UNITYSDK_OFFSET(0x1B21B430)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x1B21B7B0)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READJSONVALUE_OFFSET UNITYSDK_OFFSET(0x1B219A30)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READNULL_OFFSET UNITYSDK_OFFSET(0x1B21B250)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READNUMBER_OFFSET UNITYSDK_OFFSET(0x1B21A250)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x1B21A780)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1B21ABD0)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READUNICODELITERAL_OFFSET UNITYSDK_OFFSET(0x1B21B760)
#define FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B218F80)

namespace FlexBuffers
{
	inline static constexpr unsigned int JsonToFlexBufferConverter_TypeDefinitionIndex = 8771;

	class JsonToFlexBufferConverter : public ::System::Object
	{
	public:
		::FlexBuffers::TextScanner* _scanner; // 0x10

		::System::Void _ctor(::System::IO::TextReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER__CTOR_OFFSET))(this, reader);
		}

		static ::System::Void EnsureValidJson(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_ENSUREVALIDJSON_OFFSET))(bytes);
		}

		static ::System::Void EnsureValidFlxValue(::FlexBuffers::FlxValue flxValue)
		{
			return ((::System::Void(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_ENSUREVALIDFLXVALUE_OFFSET))(flxValue);
		}

		static ::Il2CppArray<::System::Byte>* Convert(::System::IO::TextReader* reader, ::FlexBuffers::FlexBuffer_Options options)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::TextReader*, ::FlexBuffers::FlexBuffer_Options))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_CONVERT_OFFSET))(reader, options);
		}

		static ::Il2CppArray<::System::Byte>* ConvertFile(::System::String* path, ::FlexBuffers::FlexBuffer_Options options)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::FlexBuffers::FlexBuffer_Options))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_CONVERTFILE_OFFSET))(path, options);
		}

		static ::Il2CppArray<::System::Byte>* Convert_1(::System::String* source, ::FlexBuffers::FlexBuffer_Options options)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::FlexBuffers::FlexBuffer_Options))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_CONVERT_1_OFFSET))(source, options);
		}

		::System::Void ReadJsonValue(::FlexBuffers::FlexBuffer* flx)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READJSONVALUE_OFFSET))(this, flx);
		}

		::System::Void ReadNull(::FlexBuffers::FlexBuffer* flx)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READNULL_OFFSET))(this, flx);
		}

		::System::Void ReadBoolean(::FlexBuffers::FlexBuffer* flx)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READBOOLEAN_OFFSET))(this, flx);
		}

		::System::Void ReadDigits(::System::Text::StringBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READDIGITS_OFFSET))(this, builder);
		}

		::System::Void ReadNumber(::FlexBuffers::FlexBuffer* flx)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READNUMBER_OFFSET))(this, flx);
		}

		::System::Void ReadString(::FlexBuffers::FlexBuffer* flx, ::System::Boolean asKey)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READSTRING_OFFSET))(this, flx, asKey);
		}

		::System::Int32 ReadHexDigit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READHEXDIGIT_OFFSET))(this);
		}

		::System::Char ReadUnicodeLiteral()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READUNICODELITERAL_OFFSET))(this);
		}

		::System::Void ReadArray(::FlexBuffers::FlexBuffer* flx)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READARRAY_OFFSET))(this, flx);
		}

		::System::Void ReadObject(::FlexBuffers::FlexBuffer* flx)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_JSONTOFLEXBUFFERCONVERTER_READOBJECT_OFFSET))(this, flx);
		}
	};
}
