#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9C180)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE___C__DISPLAYCLASS5_0__SHOWRECONNECTCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x1AC9C190)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersWindowService___c__DisplayClass5_0_TypeDefinitionIndex = 78583;

	class TeamTowersWindowService___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* onCancel; // 0x10
		::System::Action* onConfirm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowReconnectConfirm_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE___C__DISPLAYCLASS5_0__SHOWRECONNECTCONFIRM_B__0_OFFSET))(this, a1);
		}
	};
}
