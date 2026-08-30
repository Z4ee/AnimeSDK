#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JValue.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_LINQ_JRAW_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x172C7080)
#define NEWTONSOFT_JSON_LINQ_JRAW_CREATE_OFFSET UNITYSDK_OFFSET(0x172C6D80)
#define NEWTONSOFT_JSON_LINQ_JRAW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172C6D00)
#define NEWTONSOFT_JSON_LINQ_JRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x172C6C60)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JRaw_TypeDefinitionIndex = 9700;

	class JRaw : public ::Newtonsoft::Json::Linq::JValue
	{
	public:
		::System::Void _ctor(::Newtonsoft::Json::Linq::JRaw* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JRaw*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW__CTOR_1_OFFSET))(this, a1);
		}

		static ::Newtonsoft::Json::Linq::JRaw* Create(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::Newtonsoft::Json::Linq::JRaw*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_CREATE_OFFSET))(a1);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JRAW_CLONETOKEN_OFFSET))(this);
		}
	};
}
