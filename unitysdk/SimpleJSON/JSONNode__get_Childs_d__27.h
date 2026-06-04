#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AC2BB40)
#define SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIMPLEJSON_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AC2BBD0)
#define SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIMPLEJSON_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AC2BB60)
#define SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AC2BC40)
#define SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AC2BBC0)
#define SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AC2BB70)
#define SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC2BB30)
#define SIMPLEJSON_JSONNODE__GET_CHILDS_D__27__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC271C0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONNode__get_Childs_d__27_TypeDefinitionIndex = 9602;

	class JSONNode__get_Childs_d__27 : public ::System::Object
	{
	public:
		::SimpleJSON::JSONNode* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Int32 __l__initialThreadId; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_CHILDS_D__27__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_MOVENEXT_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_SimpleJSON_JSONNode__get_Current()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIMPLEJSON_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_SimpleJSON_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIMPLEJSON_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_CHILDS_D__27_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
