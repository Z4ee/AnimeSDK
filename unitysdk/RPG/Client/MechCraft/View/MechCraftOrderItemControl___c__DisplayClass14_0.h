#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftOrderItemControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD644910)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__DISPLAYCLASS14_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD644F90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__DISPLAYCLASS14_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xD6450E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderItemControl___c__DisplayClass14_0_TypeDefinitionIndex = 80014;

	class MechCraftOrderItemControl___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftOrderItemControl* __4__this; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* vm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__DISPLAYCLASS14_0___REFRESH_B__0_OFFSET))(this);
		}

		::UnityEngine::GameObject* __Refresh_b__1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__DISPLAYCLASS14_0___REFRESH_B__1_OFFSET))(this);
		}
	};
}
