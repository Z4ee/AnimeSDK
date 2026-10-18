#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiySignal; }
namespace System { class Action; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD67E450)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL___C__DISPLAYCLASS2_0__SUBSCRIBE_B__0_OFFSET UNITYSDK_OFFSET(0xD67E470)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiySignal___c__DisplayClass2_0_TypeDefinitionIndex = 79620;

	class MechCraftDiySignal___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftDiySignal* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Subscribe_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL___C__DISPLAYCLASS2_0__SUBSCRIBE_B__0_OFFSET))(this);
		}
	};
}
