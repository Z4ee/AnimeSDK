#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA30BC80)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_1__SORTACCESSORYLIST_B__1_OFFSET UNITYSDK_OFFSET(0xA30BC90)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_1__SORTACCESSORYLIST_B__2_OFFSET UNITYSDK_OFFSET(0xA30BCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass3_1_TypeDefinitionIndex = 58815;

	class EvolveBuildUtils___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearEquipInfo* a; // 0x10
		::RPG::GameCore::EvolveBuildGearEquipInfo* b; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _SortAccessoryList_b__1(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_1__SORTACCESSORYLIST_B__1_OFFSET))(this, x);
		}

		::System::Boolean _SortAccessoryList_b__2(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_1__SORTACCESSORYLIST_B__2_OFFSET))(this, x);
		}
	};
}
