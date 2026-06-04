#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AC25340)
#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AC255B0)
#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AC25540)
#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AC25630)
#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AC255A0)
#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AC25550)
#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC25320)
#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC23B40)
#define SIMPLEJSON_JSONCLASS__GET_KEYS_D__15___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1AC25330)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONClass__get_Keys_d__15_TypeDefinitionIndex = 9613;

	class JSONClass__get_Keys_d__15 : public ::System::Object
	{
	public:
		::SimpleJSON::JSONClass* __4__this; // 0x10
		::System::String* __2__current; // 0x18
		::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::String*, ::SimpleJSON::JSONNode*> __7__wrap1; // 0x20
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15___M__FINALLY1_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_KEYS_D__15_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
