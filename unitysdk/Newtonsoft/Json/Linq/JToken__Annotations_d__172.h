#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F89CAB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F89CCF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F89CC80)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F89CEE0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F89CCE0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F89CC90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F89CAA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172__CTOR_OFFSET UNITYSDK_OFFSET(0x1F89C9D0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JToken__Annotations_d__172_TypeDefinitionIndex = 7194;

	class JToken__Annotations_d__172 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _annotations_5__1; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Type* type; // 0x20
		::Newtonsoft::Json::Linq::JToken* __4__this; // 0x28
		::System::Type* __3__type; // 0x30
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 _i_5__2; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__ANNOTATIONS_D__172_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
