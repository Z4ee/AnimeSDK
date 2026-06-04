#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ListDictionaryInternal; }
namespace System::Collections { class ListDictionaryInternal_DictionaryNode; }

#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x185B4080)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x185B4100)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x185B41B0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x185B4050)

namespace System::Collections
{
	inline static constexpr unsigned int ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator_TypeDefinitionIndex = 1482;

	class ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator : public ::System::Object
	{
	public:
		::System::Collections::ListDictionaryInternal_DictionaryNode* current; // 0x10
		::System::Collections::ListDictionaryInternal* list; // 0x18
		::System::Boolean isKeys; // 0x20
		::System::Boolean start; // 0x21
		::System::Int32 version; // 0x24

		::System::Void _ctor(::System::Collections::ListDictionaryInternal* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ListDictionaryInternal*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR__CTOR_OFFSET))(this, a1, a2);
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
