#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeBossInfoPanelState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_METHOD_3_062806601C361078_OFFSET UNITYSDK_OFFSET(0x1D589B40)
#define RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_METHOD_3_FA41FC885F08D0ED_OFFSET UNITYSDK_OFFSET(0x1D589B80)
#define RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D589B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchChallengeBossInfoPanelState_TypeDefinitionIndex = 22955;

	class SwitchChallengeBossInfoPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChallengeBossInfoPanelState TargetType; // 0x18
		::RPG::Client::TextID WarningText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_062806601C361078(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_METHOD_3_062806601C361078_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FA41FC885F08D0ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_METHOD_3_FA41FC885F08D0ED_OFFSET))(a1, a2);
		}
	};
}
