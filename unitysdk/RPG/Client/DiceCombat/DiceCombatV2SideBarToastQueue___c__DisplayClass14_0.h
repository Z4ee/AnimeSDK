#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastQueue; }
namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastQueue_ActiveToastInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA15BBD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE___C__DISPLAYCLASS14_0___SHOW_B__0_OFFSET UNITYSDK_OFFSET(0xA15BFC0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarToastQueue___c__DisplayClass14_0_TypeDefinitionIndex = 69976;

	class DiceCombatV2SideBarToastQueue___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatV2SideBarToastQueue* __4__this; // 0x10
		::RPG::Client::DiceCombat::DiceCombatV2SideBarToastQueue_ActiveToastInfo* info; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void __Show_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE___C__DISPLAYCLASS14_0___SHOW_B__0_OFFSET))(this);
		}
	};
}
