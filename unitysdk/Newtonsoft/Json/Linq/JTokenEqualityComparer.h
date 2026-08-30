#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }

#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEBEAC0)
#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEBEB80)
#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBEC10)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenEqualityComparer_TypeDefinitionIndex = 9702;

	class JTokenEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::Newtonsoft::Json::Linq::JToken* a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
