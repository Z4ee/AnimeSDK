#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E9E9850)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E9E9BC0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E9E9C20)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E9E9BD0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E9E9680)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9670)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E9E9770)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JObject__GetEnumerator_d__55_TypeDefinitionIndex = 7179;

	class JObject__GetEnumerator_d__55 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1; // 0x10
		::Newtonsoft::Json::Linq::JObject* __4__this; // 0x18
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*> __2__current; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__GETENUMERATOR_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
