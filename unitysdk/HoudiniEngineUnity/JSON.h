#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONNode; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_JSON_PARSE_OFFSET UNITYSDK_OFFSET(0x1B4840B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSON_TypeDefinitionIndex = 39389;

	class JSON : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::JSONNode* Parse(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSON_PARSE_OFFSET))(a1);
		}
	};
}
