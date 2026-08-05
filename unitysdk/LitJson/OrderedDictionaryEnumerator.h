#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class JsonData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED9BBA0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1ED9BBF0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1ED9BCE0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1ED9BDC0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ED9BEB0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ED9BF90)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED9BEA0)

namespace LitJson
{
	inline static constexpr unsigned int OrderedDictionaryEnumerator_TypeDefinitionIndex = 8219;

	class OrderedDictionaryEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::LitJson::JsonData*>>* list_enumerator; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::LitJson::JsonData*>>* enumerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::LitJson::JsonData*>>*))((::PBYTE)hIl2Cpp + LITJSON_ORDEREDDICTIONARYENUMERATOR__CTOR_OFFSET))(this, enumerator);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
