#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JValue.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_LINQ_JRAW_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x164604D0)
#define NEWTONSOFT_JSON_LINQ_JRAW_CREATE_OFFSET UNITYSDK_OFFSET(0x164601A0)
#define NEWTONSOFT_JSON_LINQ_JRAW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16460120)
#define NEWTONSOFT_JSON_LINQ_JRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x16460080)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JRaw_TypeDefinitionIndex = 8360;

	class JRaw : public ::Newtonsoft::Json::Linq::JValue
	{
	public:
		::System::Void _ctor(::Newtonsoft::Json::Linq::JRaw* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JRaw*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW__CTOR_OFFSET))(this, other);
		}

		::System::Void _ctor_1(::System::Object* rawJson)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW__CTOR_1_OFFSET))(this, rawJson);
		}

		static ::Newtonsoft::Json::Linq::JRaw* Create(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Newtonsoft::Json::Linq::JRaw*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_CREATE_OFFSET))(reader);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_CLONETOKEN_OFFSET))(this);
		}
	};
}
