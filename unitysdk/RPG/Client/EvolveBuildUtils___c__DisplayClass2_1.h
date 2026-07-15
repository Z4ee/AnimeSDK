#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0AD80)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__SORTWEAPONLIST_B__1_OFFSET UNITYSDK_OFFSET(0x17D0AD90)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__SORTWEAPONLIST_B__2_OFFSET UNITYSDK_OFFSET(0x17D0ADC0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass2_1_TypeDefinitionIndex = 61027;

	class EvolveBuildUtils___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearEquipInfo* a; // 0x10
		::RPG::GameCore::EvolveBuildGearEquipInfo* b; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _SortWeaponList_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__SORTWEAPONLIST_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _SortWeaponList_b__2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__SORTWEAPONLIST_B__2_OFFSET))(this, a1);
		}
	};
}
