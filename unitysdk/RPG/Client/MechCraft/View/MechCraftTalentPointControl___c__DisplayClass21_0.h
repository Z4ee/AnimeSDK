#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD66CA00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS21_0___REFRESHCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0xD66D140)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPointControl___c__DisplayClass21_0_TypeDefinitionIndex = 80072;

	class MechCraftTalentPointControl___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshContent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL___C__DISPLAYCLASS21_0___REFRESHCONTENT_B__0_OFFSET))(this);
		}
	};
}
