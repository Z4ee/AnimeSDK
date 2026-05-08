#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_GETTOKENINDEX_OFFSET UNITYSDK_OFFSET(0x1BB5EA00)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB5ECB0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int PathFilter_TypeDefinitionIndex = 7079;

	class PathFilter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER__CTOR_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JToken* GetTokenIndex(::Newtonsoft::Json::Linq::JToken* t, ::System::Boolean errorWhenNoMatch, ::System::Int32 index)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JToken*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_GETTOKENINDEX_OFFSET))(t, errorWhenNoMatch, index);
		}
	};
}
