#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftProductTraitControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD664F80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__DISPLAYCLASS8_0___REFRESHTRAITS_B__2_OFFSET UNITYSDK_OFFSET(0xD665000)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleProductStatsControl___c__DisplayClass8_0_TypeDefinitionIndex = 80043;

	class MechCraftSettleProductStatsControl___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftProductTraitControl* control; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshTraits_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__DISPLAYCLASS8_0___REFRESHTRAITS_B__2_OFFSET))(this);
		}
	};
}
