#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace Codable { class JSONNode; }
namespace Codable { class JSONObject; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CC512E0)
#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_CODABLE_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CC514E0)
#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_CODABLE_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CC51470)
#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CC51560)
#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CC514D0)
#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CC51480)
#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC512B0)
#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC51290)
#define CODABLE_JSONOBJECT__GET_CHILDREN_D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1CC512D0)

namespace Codable
{
	inline static constexpr unsigned int JSONObject__get_Children_d__23_TypeDefinitionIndex = 36464;

	class JSONObject__get_Children_d__23 : public ::System::Object
	{
	public:
		::Codable::JSONObject* __4__this; // 0x10
		::Codable::JSONNode* __2__current; // 0x18
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::Codable::JSONNode*> __7__wrap1; // 0x20
		::System::Int32 __1__state; // 0x48
		::System::Int32 __l__initialThreadId; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23___M__FINALLY1_OFFSET))(this);
		}

		::Codable::JSONNode* System_Collections_Generic_IEnumerator_Codable_JSONNode__get_Current()
		{
			return ((::Codable::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_CODABLE_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Codable::JSONNode*>* System_Collections_Generic_IEnumerable_Codable_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_CODABLE_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__GET_CHILDREN_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
