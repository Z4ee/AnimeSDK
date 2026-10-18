#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentPointState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD66CD80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS22_0___REFRESHSTATE_B__0_OFFSET UNITYSDK_OFFSET(0xD66D290)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS22_0___REFRESHSTATE_B__1_OFFSET UNITYSDK_OFFSET(0xD66D400)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPointControl___c__DisplayClass22_0_TypeDefinitionIndex = 80073;

	class MechCraftTalentPointControl___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftTalentPointControl* __4__this; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointState vmState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshState_b__0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS22_0___REFRESHSTATE_B__0_OFFSET))(this, a1);
		}

		::System::Void __RefreshState_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS22_0___REFRESHSTATE_B__1_OFFSET))(this);
		}
	};
}
