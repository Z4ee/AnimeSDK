#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftProductAttributeControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD62C840)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__DISPLAYCLASS6_0___REFRESH_B__2_OFFSET UNITYSDK_OFFSET(0xD62C8C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTargetControl___c__DisplayClass6_0_TypeDefinitionIndex = 79917;

	class MechCraftCraftProgressAttrTargetControl___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftProductAttributeControl* control; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__DISPLAYCLASS6_0___REFRESH_B__2_OFFSET))(this);
		}
	};
}
