#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::HoyoTag
{
	inline static constexpr unsigned int HoyoTagRuntimeContainerManager_1_TypeDefinitionIndex = 49399;

	template <typename T>
	class HoyoTagRuntimeContainerManager_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T, ::RPG::GameCore::HoyoTagContainer*>* _dictionary; // 0x0
	};
}
