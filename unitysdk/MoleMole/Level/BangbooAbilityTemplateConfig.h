#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityType.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooAbilityTemplateConfig_TypeDefinitionIndex = 58490;

	struct alignas(8) BangbooAbilityTemplateConfig
	{
		::System::Collections::Generic::List_1<::MoleMole::Level::BangbooAbilityType>* DefaultAbilities; // 0x10
	};
}
