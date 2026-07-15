#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pref_1.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"

namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_KeyCollection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_ValueCollection; }

namespace RPG::Client
{
	inline static constexpr unsigned int PrefDictionary_2_TypeDefinitionIndex = 33890;

	template <typename TKey, typename TValue>
	class PrefDictionary_2 : public ::RPG::Client::Pref_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>
	{
	public:
		::System::Action_2<TKey, TValue>* _OnValueChanged; // 0x0
		::System::Action_1<::RPG::Client::PrefDictionary_2<TKey, TValue>*>* _OnFlushCallback; // 0x0
	};
}
