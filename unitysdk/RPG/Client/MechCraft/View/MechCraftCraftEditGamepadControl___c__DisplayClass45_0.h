#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftCraftChipMoldControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftEditGamepadControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITGAMEPADCONTROL___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD614460)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITGAMEPADCONTROL___C__DISPLAYCLASS45_0__SAFEADDCHIPMOLD_B__0_OFFSET UNITYSDK_OFFSET(0xD616DF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITGAMEPADCONTROL___C__DISPLAYCLASS45_0__SAFEADDCHIPMOLD_B__1_OFFSET UNITYSDK_OFFSET(0xD616F40)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftEditGamepadControl___c__DisplayClass45_0_TypeDefinitionIndex = 79881;

	class MechCraftCraftEditGamepadControl___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftCraftChipMoldControl* control; // 0x10
		::RPG::Client::MechCraft::View::MechCraftCraftEditGamepadControl* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITGAMEPADCONTROL___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _SafeAddChipMold_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITGAMEPADCONTROL___C__DISPLAYCLASS45_0__SAFEADDCHIPMOLD_B__0_OFFSET))(this);
		}

		::System::Void _SafeAddChipMold_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITGAMEPADCONTROL___C__DISPLAYCLASS45_0__SAFEADDCHIPMOLD_B__1_OFFSET))(this);
		}
	};
}
