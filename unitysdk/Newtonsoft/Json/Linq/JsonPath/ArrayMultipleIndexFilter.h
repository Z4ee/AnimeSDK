#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x1ED5C140)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER_GET_INDEXES_OFFSET UNITYSDK_OFFSET(0x1ED5C120)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER_SET_INDEXES_OFFSET UNITYSDK_OFFSET(0x1ED5C130)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED5C330)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ArrayMultipleIndexFilter_TypeDefinitionIndex = 7204;

	class ArrayMultipleIndexFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _Indexes_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_Indexes()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER_GET_INDEXES_OFFSET))(this);
		}

		::System::Void set_Indexes(::System::Collections::Generic::List_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER_SET_INDEXES_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER_EXECUTEFILTER_OFFSET))(this, current, errorWhenNoMatch);
		}
	};
}
