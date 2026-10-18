#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftProductAttributeControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD65B550)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__DISPLAYCLASS7_0___REFRESHATTRIBUTES_B__2_OFFSET UNITYSDK_OFFSET(0xD65B740)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleProductStatsControl___c__DisplayClass7_0_TypeDefinitionIndex = 80041;

	class MechCraftSettleProductStatsControl___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftProductAttributeControl* control; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshAttributes_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__DISPLAYCLASS7_0___REFRESHATTRIBUTES_B__2_OFFSET))(this);
		}
	};
}
