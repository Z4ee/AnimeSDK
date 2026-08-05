#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F4C2350)
#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIMPLEJSON_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F4C2540)
#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIMPLEJSON_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F4C24D0)
#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F4C25C0)
#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F4C2530)
#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F4C24E0)
#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4C2320)
#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C2300)
#define SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F4C2340)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONArray__get_Childs_d__14_TypeDefinitionIndex = 8274;

	class JSONArray__get_Childs_d__14 : public ::System::Object
	{
	public:
		::SimpleJSON::JSONArray* __4__this; // 0x10
		::SimpleJSON::JSONNode* __2__current; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::SimpleJSON::JSONNode*> __7__wrap1; // 0x20
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14___M__FINALLY1_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_SimpleJSON_JSONNode__get_Current()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIMPLEJSON_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_SimpleJSON_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIMPLEJSON_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GET_CHILDS_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
