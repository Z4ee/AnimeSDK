#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC52C570)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS2_0__FILLPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0xC52D560)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraTransitionTeamManager___c__DisplayClass2_0_TypeDefinitionIndex = 72952;

	class ChimeraTransitionTeamManager___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _FillPosition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS2_0__FILLPOSITION_B__0_OFFSET))(this);
		}
	};
}
