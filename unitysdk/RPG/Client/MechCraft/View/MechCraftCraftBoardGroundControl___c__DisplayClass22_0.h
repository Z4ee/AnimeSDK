#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A972FE8328AB478;
namespace RPG::Client::MechCraft::View { class MechCraftCraftBoardGroundControl; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F6350)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS22_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD5F7F90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS22_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xD5F8070)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS22_0___REFRESH_G__DETERMINECELLSIDE_2_OFFSET UNITYSDK_OFFSET(0xD5F6360)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftBoardGroundControl___c__DisplayClass22_0_TypeDefinitionIndex = 79846;

	class MechCraftCraftBoardGroundControl___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControl* __4__this; // 0x10
		::Class_1_0A972FE8328AB478* vm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* __Refresh_b__0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS22_0___REFRESH_B__0_OFFSET))(this);
		}

		::System::Action* __Refresh_b__1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS22_0___REFRESH_B__1_OFFSET))(this, a1, a2);
		}

		::System::Single __Refresh_g__DetermineCellSide_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS22_0___REFRESH_G__DETERMINECELLSIDE_2_OFFSET))(this);
		}
	};
}
