#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole
{
	inline static constexpr unsigned int InLevelCustomPerformerRunnerEnvironment_TypeDefinitionIndex = 81440;

	struct alignas(8) InLevelCustomPerformerRunnerEnvironment
	{
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Environment; // 0x10
	};
}
