#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define SIMPLEJSON_JSON_PARSE_OFFSET UNITYSDK_OFFSET(0x1E59CD70)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSON_TypeDefinitionIndex = 9909;

	class JSON : public ::System::Object
	{
	public:
		static ::SimpleJSON::JSONNode* Parse(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSON_PARSE_OFFSET))(a1);
		}
	};
}
