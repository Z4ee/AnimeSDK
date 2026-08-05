#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ListDictionaryInternal; }
namespace System::Collections { class ListDictionaryInternal_DictionaryNode; }

#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D8B0070)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1D8B0130)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1D8B01C0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D8B0240)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D8B02C0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D8B0370)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B0040)

namespace System::Collections
{
	inline static constexpr unsigned int ListDictionaryInternal_NodeEnumerator_TypeDefinitionIndex = 1477;

	class ListDictionaryInternal_NodeEnumerator : public ::System::Object
	{
	public:
		::System::Collections::ListDictionaryInternal_DictionaryNode* current; // 0x10
		::System::Collections::ListDictionaryInternal* list; // 0x18
		::System::Int32 version; // 0x20
		::System::Boolean start; // 0x24

		::System::Void _ctor(::System::Collections::ListDictionaryInternal* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ListDictionaryInternal*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR__CTOR_OFFSET))(this, list);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
