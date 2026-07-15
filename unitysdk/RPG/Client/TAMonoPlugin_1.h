#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorTickMode.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoPlugin_1_TypeDefinitionIndex = 67613;

	template <typename TBehavior>
	class TAMonoPlugin_1 : public ::RPG::Client::TAMonoBase
	{
	public:
		::Il2CppArray<::System::String*>* DependentAssets; // 0x0
		::RPG::Client::TABehaviorTickMode TickMode; // 0x0
		::System::String* TickLodTemplateName; // 0x0
	};
}
