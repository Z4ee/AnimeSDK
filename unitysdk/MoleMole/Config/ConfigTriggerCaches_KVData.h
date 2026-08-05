#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigTriggerCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerCaches_KVData_TypeDefinitionIndex = 69736;

	struct alignas(8) ConfigTriggerCaches_KVData
	{
		::System::String* keyInst; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTriggerCache*>* valueInst; // 0x18
	};
}
