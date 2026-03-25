#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_PAIRTOSTRING_OFFSET UNITYSDK_OFFSET(0x161C8190)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int KeyValuePair_TypeDefinitionIndex = 1518;

	class KeyValuePair : public ::System::Object
	{
	public:
		static ::System::String* PairToString(::System::Object* key, ::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_PAIRTOSTRING_OFFSET))(key, value);
		}
	};
}
