#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_98E68E4FC3F60295;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD640660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD641E50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xD641FA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamDetailControl___c__DisplayClass9_0_TypeDefinitionIndex = 79959;

	class MechCraftExamDetailControl___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Class_1_98E68E4FC3F60295* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__0_OFFSET))(this);
		}

		::System::Void __Refresh_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__1_OFFSET))(this);
		}
	};
}
