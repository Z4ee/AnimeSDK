#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x1B5F2510)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_END_OFFSET UNITYSDK_OFFSET(0x1B5F24D0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_START_OFFSET UNITYSDK_OFFSET(0x1B5F24B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1B5F24F0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B5F2580)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_END_OFFSET UNITYSDK_OFFSET(0x1B5F24E0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_START_OFFSET UNITYSDK_OFFSET(0x1B5F24C0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_STEP_OFFSET UNITYSDK_OFFSET(0x1B5F2500)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F25A0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ArraySliceFilter_TypeDefinitionIndex = 7071;

	class ArraySliceFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Nullable_1<::System::Int32> _Start_k__BackingField; // 0x10
		::System::Nullable_1<::System::Int32> _Step_k__BackingField; // 0x18
		::System::Nullable_1<::System::Int32> _End_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_Start()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_START_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_End()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_END_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_Step()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_STEP_OFFSET))(this);
		}

		::System::Void set_Step(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_STEP_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_EXECUTEFILTER_OFFSET))(this, current, errorWhenNoMatch);
		}

		::System::Boolean IsValid(::System::Int32 index, ::System::Int32 stopIndex, ::System::Boolean positiveStep)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_ISVALID_OFFSET))(this, index, stopIndex, positiveStep);
		}
	};
}
