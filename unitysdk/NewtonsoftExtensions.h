#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }

#define NEWTONSOFTEXTENSIONS_ISVALIDJSON_OFFSET UNITYSDK_OFFSET(0x12424370)
#define NEWTONSOFTEXTENSIONS_RENAME_OFFSET UNITYSDK_OFFSET(0x12424580)

inline static constexpr unsigned int NewtonsoftExtensions_TypeDefinitionIndex = 95394;

class NewtonsoftExtensions : public ::System::Object
{
public:
	static ::System::Boolean IsValidJson(::System::String* json)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFTEXTENSIONS_ISVALIDJSON_OFFSET))(json);
	}

	static ::System::Void Rename(::Newtonsoft::Json::Linq::JToken* token, ::System::String* newName)
	{
		return ((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFTEXTENSIONS_RENAME_OFFSET))(token, newName);
	}
};
