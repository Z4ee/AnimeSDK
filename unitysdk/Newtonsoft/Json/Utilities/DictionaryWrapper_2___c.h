#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class DictionaryWrapper_2___c; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DictionaryWrapper_2___c_TypeDefinitionIndex = 9330;

	template <typename TKey, typename TValue>
	class DictionaryWrapper_2___c : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>** StaticGet___9()
		{
			return (::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryWrapper_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryWrapper_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
