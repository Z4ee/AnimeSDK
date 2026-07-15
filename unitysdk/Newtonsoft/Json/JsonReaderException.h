#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json { class JsonReader; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x165F0840)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_2_OFFSET UNITYSDK_OFFSET(0x165F0900)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x165CAE80)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x165F06C0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x165F06D0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_PATH_OFFSET UNITYSDK_OFFSET(0x165F06E0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x165F0750)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x165F07A0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x165F06F0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonReaderException_TypeDefinitionIndex = 9276;

	class JsonReaderException : public ::Newtonsoft::Json::JsonException
	{
	public:
		::System::String* _Path_k__BackingField; // 0x88
		::System::Int32 _LinePosition_k__BackingField; // 0x90
		::System::Int32 _LineNumber_k__BackingField; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void set_LineNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_LINENUMBER_OFFSET))(this, a1);
		}

		::System::Void set_LinePosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_LINEPOSITION_OFFSET))(this, a1);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_SET_PATH_OFFSET))(this, a1);
		}

		static ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::JsonReaderException* Create_1(::Newtonsoft::Json::JsonReader* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_1_OFFSET))(a1, a2, a3);
		}

		static ::Newtonsoft::Json::JsonReaderException* Create_2(::Newtonsoft::Json::IJsonLineInfo* a1, ::System::String* a2, ::System::String* a3, ::System::Exception* a4)
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_2_OFFSET))(a1, a2, a3, a4);
		}
	};
}
