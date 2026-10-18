#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C6BC77542F8B8A3;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD665D20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__DISPLAYCLASS10_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD666EB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeControl___c__DisplayClass10_0_TypeDefinitionIndex = 80055;

	class MechCraftTalentTreeControl___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::Class_1_0C6BC77542F8B8A3* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__DISPLAYCLASS10_0___REFRESH_B__0_OFFSET))(this);
		}
	};
}
