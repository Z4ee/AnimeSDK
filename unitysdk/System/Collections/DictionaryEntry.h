#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_COLLECTIONS_DICTIONARYENTRY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x5B60)
#define SYSTEM_COLLECTIONS_DICTIONARYENTRY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x60D0)
#define SYSTEM_COLLECTIONS_DICTIONARYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x80F20)

namespace System::Collections
{
	inline static constexpr unsigned int DictionaryEntry_TypeDefinitionIndex = 1445;

	struct alignas(8) DictionaryEntry
	{
		::System::Object* _key; // 0x10
		::System::Object* _value; // 0x18

		::System::Void _ctor(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYENTRY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYENTRY_GET_KEY_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYENTRY_GET_VALUE_OFFSET))(this);
		}
	};
}
