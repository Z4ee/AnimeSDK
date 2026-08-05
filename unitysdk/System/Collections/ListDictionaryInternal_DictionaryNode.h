#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_DICTIONARYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD66F0)

namespace System::Collections
{
	inline static constexpr unsigned int ListDictionaryInternal_DictionaryNode_TypeDefinitionIndex = 1480;

	class ListDictionaryInternal_DictionaryNode : public ::System::Object
	{
	public:
		::System::Object* key; // 0x10
		::System::Collections::ListDictionaryInternal_DictionaryNode* next; // 0x18
		::System::Object* value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_DICTIONARYNODE__CTOR_OFFSET))(this);
		}
	};
}
