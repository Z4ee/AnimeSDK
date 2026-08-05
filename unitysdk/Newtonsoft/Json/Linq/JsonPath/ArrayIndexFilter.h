#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x1F552370)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1F552350)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1F552360)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5523E0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ArrayIndexFilter_TypeDefinitionIndex = 7202;

	class ArrayIndexFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Nullable_1<::System::Int32> _Index_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_Index()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_SET_INDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_EXECUTEFILTER_OFFSET))(this, current, errorWhenNoMatch);
		}
	};
}
