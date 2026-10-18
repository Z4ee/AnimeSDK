#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_061585F9B8C87A36;
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopLevelUpControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD675920)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL___C__DISPLAYCLASS7_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD675D10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL___C__DISPLAYCLASS7_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xD675EC0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftWorkshopLevelUpControl___c__DisplayClass7_0_TypeDefinitionIndex = 80077;

	class MechCraftWorkshopLevelUpControl___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftWorkshopLevelUpControl* __4__this; // 0x10
		::Class_1_061585F9B8C87A36* vm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL___C__DISPLAYCLASS7_0___REFRESH_B__0_OFFSET))(this, a1);
		}

		::System::Void __Refresh_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL___C__DISPLAYCLASS7_0___REFRESH_B__1_OFFSET))(this);
		}
	};
}
