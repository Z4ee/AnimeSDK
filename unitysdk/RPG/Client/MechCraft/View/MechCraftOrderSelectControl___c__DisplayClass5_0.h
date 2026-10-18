#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07875AF13C598E27;
namespace RPG::Client::MechCraft::View { class MechCraftOrderSelectControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD652460)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL___C__DISPLAYCLASS5_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD652FC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL___C__DISPLAYCLASS5_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xD653110)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL___C__DISPLAYCLASS5_0___REFRESH_B__2_OFFSET UNITYSDK_OFFSET(0xD653260)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderSelectControl___c__DisplayClass5_0_TypeDefinitionIndex = 80003;

	class MechCraftOrderSelectControl___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftOrderSelectControl* __4__this; // 0x10
		::Class_1_07875AF13C598E27* vm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL___C__DISPLAYCLASS5_0___REFRESH_B__0_OFFSET))(this);
		}

		::System::Void __Refresh_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL___C__DISPLAYCLASS5_0___REFRESH_B__1_OFFSET))(this);
		}

		::System::Void __Refresh_b__2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROL___C__DISPLAYCLASS5_0___REFRESH_B__2_OFFSET))(this, a1);
		}
	};
}
