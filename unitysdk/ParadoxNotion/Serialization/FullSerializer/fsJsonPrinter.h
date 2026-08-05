#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class String; }
namespace System::IO { class StreamWriter; }
namespace System::IO { class TextWriter; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_BUILDCOMPRESSEDSTRING_OFFSET UNITYSDK_OFFSET(0x1DB3C490)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_BUILDPRETTYSTRING_OFFSET UNITYSDK_OFFSET(0x1DB3CB70)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_COMPRESSEDJSON_1_OFFSET UNITYSDK_OFFSET(0x1DB3D440)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_COMPRESSEDJSON_OFFSET UNITYSDK_OFFSET(0x1DB3D5A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_CONVERTDOUBLETOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB3CA60)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1DB3BFB0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_INSERTSPACING_OFFSET UNITYSDK_OFFSET(0x1DB3BF50)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_PRETTYJSON_1_OFFSET UNITYSDK_OFFSET(0x1DB3D2F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_PRETTYJSON_OFFSET UNITYSDK_OFFSET(0x1DB3D590)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_TOJSON_OFFSET UNITYSDK_OFFSET(0x1DB3D2E0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsJsonPrinter_TypeDefinitionIndex = 29821;

	class fsJsonPrinter : public ::System::Object
	{
	public:
		static ::System::Void InsertSpacing(::System::IO::TextWriter* stream, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_INSERTSPACING_OFFSET))(stream, count);
		}

		static ::System::String* EscapeString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_ESCAPESTRING_OFFSET))(str);
		}

		static ::System::Void BuildCompressedString(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::IO::TextWriter* stream)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_BUILDCOMPRESSEDSTRING_OFFSET))(data, stream);
		}

		static ::System::Void BuildPrettyString(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::IO::TextWriter* stream, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::IO::TextWriter*, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_BUILDPRETTYSTRING_OFFSET))(data, stream, depth);
		}

		static ::System::String* ToJson(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Boolean pretty)
		{
			return ((::System::String*(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_TOJSON_OFFSET))(data, pretty);
		}

		static ::System::Void PrettyJson(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::IO::TextWriter* outputStream)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_PRETTYJSON_OFFSET))(data, outputStream);
		}

		static ::System::String* PrettyJson_1(::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::String*(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_PRETTYJSON_1_OFFSET))(data);
		}

		static ::System::Void CompressedJson(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::IO::StreamWriter* outputStream)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_COMPRESSEDJSON_OFFSET))(data, outputStream);
		}

		static ::System::String* CompressedJson_1(::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::String*(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_COMPRESSEDJSON_1_OFFSET))(data);
		}

		static ::System::String* ConvertDoubleToString(::System::Double d)
		{
			return ((::System::String*(*)(::System::Double))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPRINTER_CONVERTDOUBLETOSTRING_OFFSET))(d);
		}
	};
}
