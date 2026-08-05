#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JToken__Annotations_d__171_1_TypeDefinitionIndex = 7193;

	template <typename T>
	class JToken__Annotations_d__171_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::Newtonsoft::Json::Linq::JToken* __4__this; // 0x0
		::Il2CppArray<::System::Object*>* _annotations_5__1; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
