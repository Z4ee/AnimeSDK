#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x1E8506C0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x1E8506A0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER_SET_NAMES_OFFSET UNITYSDK_OFFSET(0x1E8506B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E850730)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int FieldMultipleFilter_TypeDefinitionIndex = 7206;

	class FieldMultipleFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _Names_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_Names()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER_GET_NAMES_OFFSET))(this);
		}

		::System::Void set_Names(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER_SET_NAMES_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER_EXECUTEFILTER_OFFSET))(this, current, errorWhenNoMatch);
		}
	};
}
