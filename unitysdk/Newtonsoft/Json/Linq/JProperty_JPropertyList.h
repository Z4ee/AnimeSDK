#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x17A8A850)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A8A860)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x17A8A870)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x17A8A880)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A8A7A0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x17A8A930)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x17A8A940)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A8A970)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x17A8A270)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x17A8A950)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x17A8A960)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x17A8A910)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A8A980)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A8A800)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8A0A0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JProperty_JPropertyList_TypeDefinitionIndex = 8536;

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

		::System::Void Add(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_ADD_OFFSET))(this, item);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_CONTAINS_OFFSET))(this, item);
		}

		::System::Void CopyTo(::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Boolean Remove(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_REMOVE_OFFSET))(this, item);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Int32 IndexOf(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_INDEXOF_OFFSET))(this, item);
		}

		::System::Void Insert(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_INSERT_OFFSET))(this, index, item);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_REMOVEAT_OFFSET))(this, index);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Int32 index)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST_SET_ITEM_OFFSET))(this, index, value);
		}
	};
}
