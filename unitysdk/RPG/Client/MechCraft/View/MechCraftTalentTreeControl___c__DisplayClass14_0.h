#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftTalentPathControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD670680)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__DISPLAYCLASS14_0___FINDPOINTCONTROL_B__0_OFFSET UNITYSDK_OFFSET(0xD670860)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeControl___c__DisplayClass14_0_TypeDefinitionIndex = 80057;

	class MechCraftTalentTreeControl___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPointControl* __FindPointControl_b__0(::RPG::Client::MechCraft::View::MechCraftTalentPathControl* a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPointControl*(*)(::PVOID, ::RPG::Client::MechCraft::View::MechCraftTalentPathControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__DISPLAYCLASS14_0___FINDPOINTCONTROL_B__0_OFFSET))(this, a1);
		}
	};
}
