#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A7282DF079FF8B3;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6266C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD626790)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftPartnersControl___c__DisplayClass8_0_TypeDefinitionIndex = 79909;

	class MechCraftCraftPartnersControl___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_8A7282DF079FF8B3* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__0_OFFSET))(this);
		}
	};
}
