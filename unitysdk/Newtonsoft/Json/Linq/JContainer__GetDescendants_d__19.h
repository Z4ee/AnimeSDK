#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8469D0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E847190)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E847120)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E847380)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E847180)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E847130)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E8465F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1E846520)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E8468F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1E846810)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JContainer__GetDescendants_d__19_TypeDefinitionIndex = 7171;

	class JContainer__GetDescendants_d__19 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1; // 0x10
		::Newtonsoft::Json::Linq::JToken* _o_5__1; // 0x18
		::Newtonsoft::Json::Linq::JContainer* __4__this; // 0x20
		::Newtonsoft::Json::Linq::JToken* __2__current; // 0x28
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap2; // 0x30
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Boolean __3__self; // 0x40
		::System::Boolean self; // 0x41

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19___M__FINALLY2_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__GETDESCENDANTS_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
