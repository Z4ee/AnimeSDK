#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarUpdateTiming.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLEONENTITYACTIONORDERUPDATEDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x174BF1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleOnEntityActionOrderUpdatedParam_TypeDefinitionIndex = 68087;

	class BattleOnEntityActionOrderUpdatedParam : public ::System::Object
	{
	public:
		::RPG::Client::ActionBarUpdateTiming Timing; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEONENTITYACTIONORDERUPDATEDPARAM__CTOR_OFFSET))(this);
		}
	};
}
