#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftSettleControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftSettleViewModel; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6604F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD660E60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xD661380)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0___REFRESH_B__2_OFFSET UNITYSDK_OFFSET(0xD661630)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0___REFRESH_B__3_OFFSET UNITYSDK_OFFSET(0xD661780)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleControl___c__DisplayClass14_0_TypeDefinitionIndex = 80036;

	class MechCraftSettleControl___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftSettleViewModel* vm; // 0x10
		::RPG::Client::MechCraft::View::MechCraftSettleControl* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0___REFRESH_B__0_OFFSET))(this, a1);
		}

		::System::Void __Refresh_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0___REFRESH_B__1_OFFSET))(this, a1);
		}

		::System::Void __Refresh_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0___REFRESH_B__2_OFFSET))(this);
		}

		::System::Void __Refresh_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL___C__DISPLAYCLASS14_0___REFRESH_B__3_OFFSET))(this);
		}
	};
}
