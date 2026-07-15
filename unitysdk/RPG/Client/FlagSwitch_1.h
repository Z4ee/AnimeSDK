#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int FlagSwitch_1_TypeDefinitionIndex = 57253;

	template <typename T>
	class FlagSwitch_1 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x0
		::System::Collections::Generic::HashSet_1<T>* flagSet; // 0x0
		::System::Boolean _Enable_k__BackingField; // 0x0
	};
}
