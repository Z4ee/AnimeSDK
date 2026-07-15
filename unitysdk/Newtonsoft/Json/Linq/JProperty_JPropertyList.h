#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x16613AB0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x16613AC0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x16613AD0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x16613AE0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16613A00)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x16613B80)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x16613B90)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x16613BC0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x16613160)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x16613BA0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x16613BB0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x16613B60)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x16613BD0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16613A60)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16612F90)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JProperty_JPropertyList_TypeDefinitionIndex = 9451;

	class JProperty_JPropertyList : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Linq::JToken* _token; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Int32 IndexOf(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_REMOVEAT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Int32 a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_SET_ITEM_OFFSET))(this, a1, a2);
		}
	};
}
