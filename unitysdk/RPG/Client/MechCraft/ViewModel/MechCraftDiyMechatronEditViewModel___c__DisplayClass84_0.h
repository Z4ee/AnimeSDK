#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyMechatronEditViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD673350)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__DISPLAYCLASS84_0___SAVE_B__0_OFFSET UNITYSDK_OFFSET(0xD6738F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__DISPLAYCLASS84_0___SAVE_B__2_OFFSET UNITYSDK_OFFSET(0xD673A80)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronEditViewModel___c__DisplayClass84_0_TypeDefinitionIndex = 79609;

	class MechCraftDiyMechatronEditViewModel___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel* __4__this; // 0x10
		::System::Boolean exitAfterSave; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
		}

		::System::Void __Save_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__DISPLAYCLASS84_0___SAVE_B__0_OFFSET))(this, a1);
		}

		::System::Void __Save_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__DISPLAYCLASS84_0___SAVE_B__2_OFFSET))(this);
		}
	};
}
