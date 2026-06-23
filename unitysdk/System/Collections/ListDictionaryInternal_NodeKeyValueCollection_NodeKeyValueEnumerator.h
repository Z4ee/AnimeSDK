#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ListDictionaryInternal; }
namespace System::Collections { class ListDictionaryInternal_DictionaryNode; }

#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AE3C1F0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AE3C270)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AE3C320)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3C1C0)

namespace System::Collections
{
	inline static constexpr unsigned int ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator_TypeDefinitionIndex = 1479;

	class ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator : public ::System::Object
	{
	public:
		::System::Collections::ListDictionaryInternal_DictionaryNode* current; // 0x10
		::System::Collections::ListDictionaryInternal* list; // 0x18
		::System::Boolean start; // 0x20
		::System::Boolean isKeys; // 0x21
		::System::Int32 version; // 0x24

		::System::Void _ctor(::System::Collections::ListDictionaryInternal* list, ::System::Boolean isKeys)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ListDictionaryInternal*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR__CTOR_OFFSET))(this, list, isKeys);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
