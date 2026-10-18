#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronItemViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD67E2A0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL___C__DISPLAYCLASS45_0___FINDDEFAULTITEM_B__0_OFFSET UNITYSDK_OFFSET(0xD67E420)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronListViewModel___c__DisplayClass45_0_TypeDefinitionIndex = 79631;

	class MechCraftDiyMechatronListViewModel___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::UInt32 mechatronID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __FindDefaultItem_b__0(::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL___C__DISPLAYCLASS45_0___FINDDEFAULTITEM_B__0_OFFSET))(this, a1);
		}
	};
}
