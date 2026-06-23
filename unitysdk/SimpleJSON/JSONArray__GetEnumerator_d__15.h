#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONNode; }

#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E1F2340)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E1F24C0)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E1F2520)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E1F24D0)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E1F2310)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F2300)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__15___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E1F2330)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONArray__GetEnumerator_d__15_TypeDefinitionIndex = 8373;

	class JSONArray__GetEnumerator_d__15 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::SimpleJSON::JSONNode*> __7__wrap1; // 0x10
		::System::Object* __2__current; // 0x28
		::SimpleJSON::JSONArray* __4__this; // 0x30
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
