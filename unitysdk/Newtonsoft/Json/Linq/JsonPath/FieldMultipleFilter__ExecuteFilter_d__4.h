#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq::JsonPath { class FieldMultipleFilter; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DF70F30)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DF71630)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF715C0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DF71820)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF71620)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DF715D0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DF70D40)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF70C70)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DF70E50)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DF70E40)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int FieldMultipleFilter__ExecuteFilter_d__4_TypeDefinitionIndex = 7208;

	class FieldMultipleFilter__ExecuteFilter_d__4 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::System::String*> __7__wrap2; // 0x10
		::System::String* _name_5__2; // 0x28
		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current; // 0x30
		::Newtonsoft::Json::Linq::JToken* __2__current; // 0x38
		::Newtonsoft::Json::Linq::JObject* _o_5__1; // 0x40
		::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* __4__this; // 0x48
		::Newtonsoft::Json::Linq::JToken* _t_5__3; // 0x50
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1; // 0x58
		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current; // 0x60
		::System::Boolean errorWhenNoMatch; // 0x68
		::System::Boolean __3__errorWhenNoMatch; // 0x69
		::System::Int32 __1__state; // 0x6C
		::System::Int32 __l__initialThreadId; // 0x70

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4___M__FINALLY2_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
