#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftEntranceControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftEntranceViewModel; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD634790)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL___C__DISPLAYCLASS12_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD6351C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftEntranceControl___c__DisplayClass12_0_TypeDefinitionIndex = 79953;

	class MechCraftEntranceControl___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel* vm; // 0x10
		::RPG::Client::MechCraft::View::MechCraftEntranceControl* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL___C__DISPLAYCLASS12_0___REFRESH_B__0_OFFSET))(this, a1);
		}
	};
}
