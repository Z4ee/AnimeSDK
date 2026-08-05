#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq::JsonPath { class ScanFilter; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F6E5350)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F6E5930)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F6E58C0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F6E5B20)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F6E5920)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F6E58D0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F6E5170)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E50A0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F6E5270)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ScanFilter__ExecuteFilter_d__4_TypeDefinitionIndex = 7222;

	class ScanFilter__ExecuteFilter_d__4 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Linq::JToken* _root_5__1; // 0x10
		::Newtonsoft::Json::Linq::JToken* _value_5__2; // 0x18
		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current; // 0x20
		::Newtonsoft::Json::Linq::JsonPath::ScanFilter* __4__this; // 0x28
		::Newtonsoft::Json::Linq::JToken* __2__current; // 0x30
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1; // 0x38
		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current; // 0x40
		::System::Int32 __l__initialThreadId; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4___M__FINALLY1_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__EXECUTEFILTER_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
