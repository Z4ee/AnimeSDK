#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ICoroutineGroupController; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___c__DisplayClass21_0_1_TypeDefinitionIndex = 33795;

	template <typename TReturn>
	class CoroutineUtils___c__DisplayClass21_0_1 : public ::System::Object
	{
	public:
		::System::Int32 frames; // 0x0
		TReturn returnVal; // 0x0
		::RPG::Client::ICoroutineGroupController* ctrl; // 0x0
	};
}
