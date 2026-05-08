#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONNode; }

#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C012410)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C0125A0)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C012600)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C0125B0)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C0123E0)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0123D0)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C012400)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONArray__GetEnumerator_d__15_TypeDefinitionIndex = 7795;

	class JSONArray__GetEnumerator_d__15 : public ::System::Object
	{
	public:
		::SimpleJSON::JSONArray* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::SimpleJSON::JSONNode*> __7__wrap1; // 0x20
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
