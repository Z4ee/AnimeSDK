#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftProductTraitControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD629CE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C__DISPLAYCLASS12_0___REFRESHTRAITS_B__2_OFFSET UNITYSDK_OFFSET(0xD629CF0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressControl___c__DisplayClass12_0_TypeDefinitionIndex = 79929;

	class MechCraftCraftProgressControl___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftProductTraitControl* control; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshTraits_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C__DISPLAYCLASS12_0___REFRESHTRAITS_B__2_OFFSET))(this);
		}
	};
}
