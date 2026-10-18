#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }

#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x1C098CC0)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C098F30)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1C098EB0)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C098D60)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C098FB0)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C098DD0)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C099020)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C097460)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_HashtableEnumerator_TypeDefinitionIndex = 1477;

	class Hashtable_HashtableEnumerator : public ::System::Object
	{
	public:
		::System::Object* currentValue; // 0x10
		::System::Object* currentKey; // 0x18
		::System::Collections::Hashtable* hashtable; // 0x20
		::System::Boolean current; // 0x28
		::System::Int32 getObjectRetType; // 0x2C
		::System::Int32 bucket; // 0x30
		::System::Int32 version; // 0x34

		::System::Void _ctor(::System::Collections::Hashtable* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_CLONE_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
