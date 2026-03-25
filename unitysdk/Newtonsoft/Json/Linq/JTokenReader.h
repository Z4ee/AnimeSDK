#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonReader.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System { class String; }

#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_GETENDTOKEN_OFFSET UNITYSDK_OFFSET(0x16468E60)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_GET_CURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x16468640)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x16469330)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x164691B0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x16469270)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x16469100)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_READINTO_OFFSET UNITYSDK_OFFSET(0x16468730)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_READOVER_OFFSET UNITYSDK_OFFSET(0x164687C0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x16468DE0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_READ_OFFSET UNITYSDK_OFFSET(0x16468650)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_SAFETOSTRING_OFFSET UNITYSDK_OFFSET(0x164690D0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_SETEND_OFFSET UNITYSDK_OFFSET(0x16468E00)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x16468890)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x16465F90)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenReader_TypeDefinitionIndex = 8380;

	class JTokenReader : public ::Newtonsoft::Json::JsonReader
	{
	public:
		::Newtonsoft::Json::Linq::JToken* _parent; // 0x70
		::Newtonsoft::Json::Linq::JToken* _root; // 0x78
		::Newtonsoft::Json::Linq::JToken* _current; // 0x80
		::System::String* _initialPath; // 0x88

		::System::Void _ctor(::Newtonsoft::Json::Linq::JToken* token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER__CTOR_OFFSET))(this, token);
		}

		::Newtonsoft::Json::Linq::JToken* get_CurrentToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_GET_CURRENTTOKEN_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_READ_OFFSET))(this);
		}

		::System::Boolean ReadOver(::Newtonsoft::Json::Linq::JToken* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_READOVER_OFFSET))(this, t);
		}

		::System::Boolean ReadToEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_READTOEND_OFFSET))(this);
		}

		::System::Nullable_1<::Newtonsoft::Json::JsonToken> GetEndToken(::Newtonsoft::Json::Linq::JContainer* c)
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::JsonToken>(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_GETENDTOKEN_OFFSET))(this, c);
		}

		::System::Boolean ReadInto(::Newtonsoft::Json::Linq::JContainer* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_READINTO_OFFSET))(this, c);
		}

		::System::Boolean SetEnd(::Newtonsoft::Json::Linq::JContainer* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_SETEND_OFFSET))(this, c);
		}

		::System::Void SetToken(::Newtonsoft::Json::Linq::JToken* token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_SETTOKEN_OFFSET))(this, token);
		}

		::System::String* SafeToString(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_SAFETOSTRING_OFFSET))(this, value);
		}

		::System::Boolean Newtonsoft_Json_IJsonLineInfo_HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_GET_PATH_OFFSET))(this);
		}
	};
}
