#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }

#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2D6850)
#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2D68E0)
#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D6900)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenEqualityComparer_TypeDefinitionIndex = 7195;

	class JTokenEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::Newtonsoft::Json::Linq::JToken* x, ::Newtonsoft::Json::Linq::JToken* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::Newtonsoft::Json::Linq::JToken* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
