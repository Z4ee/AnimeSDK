#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C9D7D30)
#define SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C9D7F10)
#define SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C9D8090)
#define SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C9D7F70)
#define SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1C9D8000)
#define SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D6540)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_KeyCollection_TypeDefinitionIndex = 1474;

	class Hashtable_KeyCollection : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* _hashtable; // 0x10

		::System::Void _ctor(::System::Collections::Hashtable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_KEYCOLLECTION_GET_COUNT_OFFSET))(this);
		}
	};
}
