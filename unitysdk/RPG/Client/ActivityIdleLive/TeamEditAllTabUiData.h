#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int TeamEditAllTabUiData_TypeDefinitionIndex = 75144;

	struct alignas(8) TeamEditAllTabUiData
	{
		::System::Boolean IsNew; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>* AvatarList; // 0x18
		::RPG::GameCore::ILBattleCharacterLocation PosType; // 0x20
	};
}
