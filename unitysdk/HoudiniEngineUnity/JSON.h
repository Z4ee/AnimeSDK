#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONNode; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_JSON_PARSE_OFFSET UNITYSDK_OFFSET(0x8494350)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSON_TypeDefinitionIndex = 37858;

	class JSON : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::JSONNode* Parse(::System::String* aJSON)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSON_PARSE_OFFSET))(aJSON);
		}
	};
}
