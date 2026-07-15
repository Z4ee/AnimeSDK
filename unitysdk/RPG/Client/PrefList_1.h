#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pref_1.h"

namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PrefList_1_TypeDefinitionIndex = 33888;

	template <typename T>
	class PrefList_1 : public ::RPG::Client::Pref_1<::System::Collections::Generic::List_1<T>*>
	{
	public:
	};
}
