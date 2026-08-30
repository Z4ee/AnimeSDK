#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_METHOD_3_5A880B76904ED407_OFFSET UNITYSDK_OFFSET(0x1DB8C780)
#define RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_METHOD_3_A3B574803374F614_OFFSET UNITYSDK_OFFSET(0x1DB8C740)
#define RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8C770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveChallengeBossInfoPanelState_TypeDefinitionIndex = 22957;

	class RemoveChallengeBossInfoPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID WarningText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3B574803374F614(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_METHOD_3_A3B574803374F614_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A880B76904ED407(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_METHOD_3_5A880B76904ED407_OFFSET))(a1, a2);
		}
	};
}
