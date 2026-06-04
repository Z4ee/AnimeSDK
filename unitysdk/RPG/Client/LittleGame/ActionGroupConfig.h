#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/WeightConfig.h"

namespace RPG::Client::LittleGame { class ActionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_ACTIONGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCCDB0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ActionGroupConfig_TypeDefinitionIndex = 39356;

	class ActionGroupConfig : public ::RPG::Client::LittleGame::WeightConfig
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ActionConfig*>* GroupItemList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ACTIONGROUPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
