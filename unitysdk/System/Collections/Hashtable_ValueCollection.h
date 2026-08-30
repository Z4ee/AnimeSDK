#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1BBBD410)
#define SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BBBD5F0)
#define SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BBBD770)
#define SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1BBBD650)
#define SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1BBBD6E0)
#define SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBA210)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_ValueCollection_TypeDefinitionIndex = 1475;

	class Hashtable_ValueCollection : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* _hashtable; // 0x10

		::System::Void _ctor(::System::Collections::Hashtable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_VALUECOLLECTION_GET_COUNT_OFFSET))(this);
		}
	};
}
