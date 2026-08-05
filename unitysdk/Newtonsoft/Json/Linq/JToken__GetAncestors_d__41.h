#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F89CFD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F89D0D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F89D060)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F89D2C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F89D0C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F89D070)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F89CFC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x1F89CEF0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JToken__GetAncestors_d__41_TypeDefinitionIndex = 7190;

	class JToken__GetAncestors_d__41 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Linq::JToken* _current_5__1; // 0x10
		::Newtonsoft::Json::Linq::JToken* __2__current; // 0x18
		::Newtonsoft::Json::Linq::JToken* __4__this; // 0x20
		::System::Boolean self; // 0x28
		::System::Boolean __3__self; // 0x29
		::System::Int32 __1__state; // 0x2C
		::System::Int32 __l__initialThreadId; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_MOVENEXT_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__GETANCESTORS_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
