#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int PresentResult_1_TypeDefinitionIndex = 79292;

	template <typename TViewModel>
	class PresentResult_1 : public ::System::Object
	{
	public:
		TViewModel _ViewModel_k__BackingField; // 0x0
		::RPG::Client::LuaUIController* _UIController_k__BackingField; // 0x0
	};
}
