#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B626240)
#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIMPLEJSON_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B626440)
#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIMPLEJSON_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B6263D0)
#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B6264C0)
#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B626430)
#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B6263E0)
#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B626210)
#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6261F0)
#define SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B626230)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONClass__get_Childs_d__17_TypeDefinitionIndex = 8105;

	class JSONClass__get_Childs_d__17 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::SimpleJSON::JSONNode*> __7__wrap1; // 0x10
		::SimpleJSON::JSONClass* __4__this; // 0x38
		::SimpleJSON::JSONNode* __2__current; // 0x40
		::System::Int32 __l__initialThreadId; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17___M__FINALLY1_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_SimpleJSON_JSONNode__get_Current()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIMPLEJSON_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_SimpleJSON_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIMPLEJSON_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GET_CHILDS_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
