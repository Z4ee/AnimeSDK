#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x1E3BFF20)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E3BFF00)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E3BFF10)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0110)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int FieldFilter_TypeDefinitionIndex = 7204;

	class FieldFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER_SET_NAME_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER_EXECUTEFILTER_OFFSET))(this, current, errorWhenNoMatch);
		}
	};
}
