#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ECF740E1BEC9395A;
namespace RPG::Client::MechCraft::View { class MechCraftExamStartControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD644540)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD644980)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xD644AC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__2_OFFSET UNITYSDK_OFFSET(0xD644C10)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamStartControl___c__DisplayClass8_0_TypeDefinitionIndex = 79965;

	class MechCraftExamStartControl___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftExamStartControl* __4__this; // 0x10
		::Class_1_ECF740E1BEC9395A* vm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__0_OFFSET))(this, a1);
		}

		::System::Void __Refresh_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__1_OFFSET))(this);
		}

		::System::Void __Refresh_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__2_OFFSET))(this);
		}
	};
}
