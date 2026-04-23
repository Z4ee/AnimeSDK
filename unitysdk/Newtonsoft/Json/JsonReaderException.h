#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json { class JsonReader; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x17A6FC90)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_2_OFFSET UNITYSDK_OFFSET(0x17A6FCF0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x17A562C0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x17A6FB10)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x17A6FB20)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_PATH_OFFSET UNITYSDK_OFFSET(0x17A6FB30)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A6FBA0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A6FBF0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6FB40)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonReaderException_TypeDefinitionIndex = 8361;

	class JsonReaderException : public ::Newtonsoft::Json::JsonException
	{
	public:
		::System::String* _Path_k__BackingField; // 0x88
		::System::Int32 _LineNumber_k__BackingField; // 0x90
		::System::Int32 _LinePosition_k__BackingField; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException, ::System::String* path, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_2_OFFSET))(this, message, innerException, path, lineNumber, linePosition);
		}

		::System::Void set_LineNumber(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_LINENUMBER_OFFSET))(this, value);
		}

		::System::Void set_LinePosition(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_LINEPOSITION_OFFSET))(this, value);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_PATH_OFFSET))(this, value);
		}

		static ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* reader, ::System::String* message)
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET))(reader, message);
		}

		static ::Newtonsoft::Json::JsonReaderException* Create_1(::Newtonsoft::Json::JsonReader* reader, ::System::String* message, ::System::Exception* ex)
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_1_OFFSET))(reader, message, ex);
		}

		static ::Newtonsoft::Json::JsonReaderException* Create_2(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::System::String* path, ::System::String* message, ::System::Exception* ex)
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_2_OFFSET))(lineInfo, path, message, ex);
		}
	};
}
