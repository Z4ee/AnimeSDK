#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class TextReader; }

#define SPINE_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19DDB2F0)

namespace Spine
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 36437;

	class Json : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::IO::TextReader* text)
		{
			return ((::System::Object*(*)(::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SPINE_JSON_DESERIALIZE_OFFSET))(text);
		}
	};
}
