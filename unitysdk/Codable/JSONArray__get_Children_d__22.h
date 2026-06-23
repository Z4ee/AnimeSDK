#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace Codable { class JSONArray; }
namespace Codable { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CODABLE_JSONARRAY__GET_CHILDREN_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B7A5540)
#define CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_CODABLE_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B7A5730)
#define CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_CODABLE_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7A56C0)
#define CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B7A57B0)
#define CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7A5720)
#define CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B7A56D0)
#define CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7A5510)
#define CODABLE_JSONARRAY__GET_CHILDREN_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A54F0)
#define CODABLE_JSONARRAY__GET_CHILDREN_D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B7A5530)

namespace Codable
{
	inline static constexpr unsigned int JSONArray__get_Children_d__22_TypeDefinitionIndex = 36461;

	class JSONArray__get_Children_d__22 : public ::System::Object
	{
	public:
		::Codable::JSONNode* __2__current; // 0x10
		::System::Collections::Generic::List_1_Enumerator<::Codable::JSONNode*> __7__wrap1; // 0x18
		::Codable::JSONArray* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22___M__FINALLY1_OFFSET))(this);
		}

		::Codable::JSONNode* System_Collections_Generic_IEnumerator_Codable_JSONNode__get_Current()
		{
			return ((::Codable::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_CODABLE_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Codable::JSONNode*>* System_Collections_Generic_IEnumerable_Codable_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_CODABLE_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
