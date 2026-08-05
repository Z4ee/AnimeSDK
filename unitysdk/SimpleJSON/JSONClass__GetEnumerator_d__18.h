#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D98FBD0)
#define SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D98FD80)
#define SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D98FDE0)
#define SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D98FD90)
#define SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D98FBA0)
#define SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x1D98FB90)
#define SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1D98FBC0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONClass__GetEnumerator_d__18_TypeDefinitionIndex = 8430;

	class JSONClass__GetEnumerator_d__18 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::SimpleJSON::JSONNode*> __7__wrap1; // 0x10
		::SimpleJSON::JSONClass* __4__this; // 0x38
		::System::Object* __2__current; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
