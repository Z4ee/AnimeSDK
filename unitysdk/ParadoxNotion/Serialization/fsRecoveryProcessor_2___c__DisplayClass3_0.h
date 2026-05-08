#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int fsRecoveryProcessor_2___c__DisplayClass3_0_TypeDefinitionIndex = 27051;

	template <typename TCanProcess, typename TMissing>
	class fsRecoveryProcessor_2___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* json; // 0x0
	};
}
