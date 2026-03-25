#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class TextReader; }

#define SPINE_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x183A07B0)

namespace Spine
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 30717;

	class Json : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::IO::TextReader* text)
		{
			return ((::System::Object*(*)(::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SPINE_JSON_DESERIALIZE_OFFSET))(text);
		}
	};
}
