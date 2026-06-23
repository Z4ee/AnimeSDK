#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int Extensions__Values_d__11_2_TypeDefinitionIndex = 7164;

	template <typename T, typename U>
	class Extensions__Values_d__11_2 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		U __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__source; // 0x0
		::System::Object* key; // 0x0
		::System::Object* __3__key; // 0x0
		::Newtonsoft::Json::Linq::JToken* _token_5__1; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1; // 0x0
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap2; // 0x0
	};
}
