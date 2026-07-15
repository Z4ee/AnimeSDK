#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_JSON_PARSE_OFFSET UNITYSDK_OFFSET(0x181CB3C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSON_TypeDefinitionIndex = 8094;

	class JSON : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::JSONNode* Parse(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSON_PARSE_OFFSET))(a1);
		}
	};
}
