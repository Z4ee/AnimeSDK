#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentTreeEntranceViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD667780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL___C__DISPLAYCLASS8_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD667A00)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeEntranceControl___c__DisplayClass8_0_TypeDefinitionIndex = 80008;

	class MechCraftTalentTreeEntranceControl___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL___C__DISPLAYCLASS8_0___REFRESH_B__0_OFFSET))(this);
		}
	};
}
