#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_DICTIONARYX_PUSHTOLIST_OFFSET UNITYSDK_OFFSET(0x19DA2FA0)

namespace Foundation
{
	inline static constexpr unsigned int DictionaryX_TypeDefinitionIndex = 7945;

	class DictionaryX : public ::System::Object
	{
	public:
		static ::System::Boolean PushToList(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* list, ::System::String* key, ::System::String* data)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DICTIONARYX_PUSHTOLIST_OFFSET))(list, key, data);
		}
	};
}
