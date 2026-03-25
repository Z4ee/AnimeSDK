#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueActivityResidentConfigRow; }

#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DCA30)
#define RPG_CLIENT_RESIDENTACTIVITYPANELUTILS___C__DISPLAYCLASS5_0___SETROGUEASLATESTPLAYED_B__0_OFFSET UNITYSDK_OFFSET(0xA2DCE10)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityPanelUtils___c__DisplayClass5_0_TypeDefinitionIndex = 50133;

	class ResidentActivityPanelUtils___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueSubMode subMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SetRogueAsLatestPlayed_b__0(::RPG::GameCore::RogueActivityResidentConfigRow* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELUTILS___C__DISPLAYCLASS5_0___SETROGUEASLATESTPLAYED_B__0_OFFSET))(this, r);
		}
	};
}
