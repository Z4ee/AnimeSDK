#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pref_1.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PrefHashSet_1_TypeDefinitionIndex = 33889;

	template <typename T>
	class PrefHashSet_1 : public ::RPG::Client::Pref_1<::System::Collections::Generic::HashSet_1<T>*>
	{
	public:
		::System::Action_1<::RPG::Client::PrefHashSet_1<T>*>* onChanged; // 0x0
	};
}
