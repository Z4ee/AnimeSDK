#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x964CB50)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__SORTWEAPONLIST_B__1_OFFSET UNITYSDK_OFFSET(0x964CB70)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__SORTWEAPONLIST_B__2_OFFSET UNITYSDK_OFFSET(0x964CBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass2_1_TypeDefinitionIndex = 51864;

	class EvolveBuildUtils___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearEquipInfo* a; // 0x10
		::RPG::GameCore::EvolveBuildGearEquipInfo* b; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _SortWeaponList_b__1(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__SORTWEAPONLIST_B__1_OFFSET))(this, x);
		}

		::System::Boolean _SortWeaponList_b__2(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_1__SORTWEAPONLIST_B__2_OFFSET))(this, x);
		}
	};
}
