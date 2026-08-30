#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_2__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF5340)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_2__SORTWEAPONLIST_B__3_OFFSET UNITYSDK_OFFSET(0xCEF53B0)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_2__SORTWEAPONLIST_B__4_OFFSET UNITYSDK_OFFSET(0xCEF53C0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass2_2_TypeDefinitionIndex = 63881;

	class EvolveBuildUtils___c__DisplayClass2_2 : public ::System::Object
	{
	public:
		::System::UInt32 toFindB; // 0x10
		::System::UInt32 toFindA; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _SortWeaponList_b__3(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_2__SORTWEAPONLIST_B__3_OFFSET))(this, a1);
		}

		::System::Boolean _SortWeaponList_b__4(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS2_2__SORTWEAPONLIST_B__4_OFFSET))(this, a1);
		}
	};
}
