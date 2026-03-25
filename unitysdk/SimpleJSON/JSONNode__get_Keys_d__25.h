#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SIMPLEJSON_JSONNODE__GET_KEYS_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1835E020)
#define SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1835E0B0)
#define SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1835E040)
#define SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1835E120)
#define SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1835E0A0)
#define SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1835E050)
#define SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1835E010)
#define SIMPLEJSON_JSONNODE__GET_KEYS_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x18358E30)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONNode__get_Keys_d__25_TypeDefinitionIndex = 9644;

	class JSONNode__get_Keys_d__25 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Int32 __l__initialThreadId; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_KEYS_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_KEYS_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_KEYS_D__25_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
