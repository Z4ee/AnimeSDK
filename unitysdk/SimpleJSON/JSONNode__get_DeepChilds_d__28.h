#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DE3EBB0)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIMPLEJSON_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DE3F2C0)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIMPLEJSON_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE3F250)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DE3F340)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE3F2B0)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DE3F260)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE3E7C0)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3E7A0)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DE3EAD0)
#define SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DE3E9F0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONNode__get_DeepChilds_d__28_TypeDefinitionIndex = 8147;

	class JSONNode__get_DeepChilds_d__28 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>* __7__wrap3; // 0x10
		::SimpleJSON::JSONNode* _C_5__3; // 0x18
		::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>* __7__wrap1; // 0x20
		::SimpleJSON::JSONNode* __4__this; // 0x28
		::SimpleJSON::JSONNode* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28___M__FINALLY2_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_SimpleJSON_JSONNode__get_Current()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIMPLEJSON_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_SimpleJSON_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIMPLEJSON_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__GET_DEEPCHILDS_D__28_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
