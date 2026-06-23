#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class JsonData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D8913D0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1D891420)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1D891510)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D8915F0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D8916E0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D8917C0)
#define LITJSON_ORDEREDDICTIONARYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8916D0)

namespace LitJson
{
	inline static constexpr unsigned int OrderedDictionaryEnumerator_TypeDefinitionIndex = 7902;

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
