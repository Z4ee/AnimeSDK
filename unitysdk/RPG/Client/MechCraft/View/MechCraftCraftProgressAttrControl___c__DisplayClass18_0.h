#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressAttrTrailControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROL___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6227A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROL___C__DISPLAYCLASS18_0___HANDLEPLAYTARGETREACHING_B__0_OFFSET UNITYSDK_OFFSET(0xD6231E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrControl___c__DisplayClass18_0_TypeDefinitionIndex = 79911;

	class MechCraftCraftProgressAttrControl___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTrailControl* trail; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROL___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __HandlePlayTargetReaching_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRCONTROL___C__DISPLAYCLASS18_0___HANDLEPLAYTARGETREACHING_B__0_OFFSET))(this);
		}
	};
}
