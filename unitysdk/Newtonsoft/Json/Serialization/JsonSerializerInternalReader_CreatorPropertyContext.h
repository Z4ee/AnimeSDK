#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonSerializerInternalReader_PropertyPresence.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATORPROPERTYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1648B470)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalReader_CreatorPropertyContext_TypeDefinitionIndex = 8339;

	class JsonSerializerInternalReader_CreatorPropertyContext : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::JsonProperty* ConstructorProperty; // 0x10
		::System::Object* Value; // 0x18
		::Newtonsoft::Json::Serialization::JsonProperty* Property; // 0x20
		::System::String* Name; // 0x28
		::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence> Presence; // 0x30
		::System::Boolean Used; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATORPROPERTYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
