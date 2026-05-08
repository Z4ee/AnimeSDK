#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class String; }

#define MIHOYOSDKJSON_JSON_PARSE_OFFSET UNITYSDK_OFFSET(0x1A2DE0C0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSON_TypeDefinitionIndex = 34886;

	class JSON : public ::System::Object
	{
	public:
		static ::MiHoYoSDKJSON::JSONNode* Parse(::System::String* aJSON)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSON_PARSE_OFFSET))(aJSON);
		}
	};
}
